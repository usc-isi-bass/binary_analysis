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
int z,q,s,l,i,j,k,n,a[100];
char b[100];
for(i=1;i<=4;i++)
{
    z=i*10;
	for(j=1;j<=4;j++)
	{
		q=j*10;
		for(k=1;k<=4;k++)
		{
			s=k*10;
			l=z+q-s;
			if(z+l>s+q&&z+s<q)
			{
		      a[1]=z;
			  b[a[1]]='z';
			  a[2]=q;
			  b[a[2]]='q';
			  a[3]=s;
			  b[a[3]]='s';
			  a[4]=l;
			  b[a[4]]='l';
			}
		}
	}
}
for(i=1;i<=4;i++)
{
	for(j=1;j<=3;j++)
	{
		if(a[j]<a[j+1])
		{
			n=a[j];
			a[j]=a[j+1];
			a[j+1]=n;
		}
	}
}
for(i=1;i<=4;i++)
{
	cout<<b[a[i]]<<" "<<a[i]<<endl;
}
return 0;
}
