#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

//********************************
//*????????   **
//*?????? 1300012713 **
//*???2013.10.31  **
//********************************
int main() 
{ 
	int a[1000][2],b[1010] = {0}, x, y, num = 1, max = 0;
	char ch; 
	for (num = 1; ; num++) //??
	{
		cin >> a[num-1][0]; //????????
    	ch = cin.get();
		if(ch == '\n') break; //???????
	}
	for(int i = 1; i <= num; i++) 
	{
		cin >> a[i-1][1];//??????
		ch = cin.get();
	    for(int j = a[i-1][0]; j < a[i-1][1];j++) 
		{
			b[j-1] = b[j-1] + 1;
		}
	}
	cout << num << " ";
    for(int k = 1; k <= 1010; k++)
		if(b[k-1] > max)
			max = b[k-1];
    cout << max;
	return 0;
}


