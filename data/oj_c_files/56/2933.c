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

int main()                                         //???
{
	int n,a[5];
	cin>>n;                                        //???????
	for (int j=0;j<5;j++)
        {
           a[j]=n%10;
           n=n/10;
         }
	for (int i=0;i<5;i++)
	{
           if(a[i]>0)
		cout<<a[i];
	}                                            //??????????0???????
	
	return 0;
}

