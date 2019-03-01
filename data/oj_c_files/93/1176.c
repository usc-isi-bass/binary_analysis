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

int main()
{
	int n; 
	cin >> n;
	int sum = 0;
	for(int i = 3; i <= 7; i = i+2)
	{
            if((n%i) == 0)
            sum = sum + 1;
    }
    int t = 0;
    for(int i = 3; i <= 7; i = i+2)
	{
            if((n%i) == 0)
            {
             t = t + 1;
               if(t < sum) cout << i <<" ";
               else  cout << i ;
            }
    }
    if(sum == 0) cout << 'n';
	//while(1);
	return 0;
}
