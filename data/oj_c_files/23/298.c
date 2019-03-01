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
	char a[100][50];
	int i=1,j;
	while(cin>>a[i])
		i++;
	for(j=i-1;j>=1;j--)
	{
		if(j==1){cout << a[j];break;} 
		cout << a[j] <<" ";
	}
	return 0;
}

