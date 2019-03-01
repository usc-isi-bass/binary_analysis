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

int main ()
{
	int a[100005];
	int j=0,i,n,m;
	cin >>n;
    for (i=0;i<n;i++)
    {
		cin >>a[i];
    }
    cin >>m;
    for (i=0;i<n;i++)
    {
		if (a[i]!=m)
		j++;
    }
    i=0;
if(j==1)
{
for (i=0;i<n;i++)
{if (a[i]!=m)
{cout <<a[i]<<endl;
break;
}
}
}
else
{
    while (j>1)
    {
		
		if (a[i]!=m)
		{
		cout <<a[i]<<' ';
		j--;
		}
		i++;
    }
    for (i=n-1;i>0;i--)
    {
    if (a[i]!=m)
    {cout<< a[i] <<endl;
    break;
    } 
    }
}
    return (0);
}
