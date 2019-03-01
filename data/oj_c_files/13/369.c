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
	int n,i,j,l,k;  //??????
	cin>>n;         //??n??
	int a[20001];   //????
	for ( i=0; i<n; i++)
		cin>>a[i];
	for ( i=0; i<n; i++)  //??????i
	{
		for (j=i+1; j<n; j++)  //??????j
		{
		    if (a[i]==a[j])   //??????
                {
                    for (k=j; k<n-1; k++)
                        a[k]=a[k+1];//????
                    n=n-1;
                    j=j-1;
                }

		}
	}
		for (l=0; l<n; l++)
cout<<a[l]<<setw(3);//???????
return 0;           //??????????????????
}                 //????
