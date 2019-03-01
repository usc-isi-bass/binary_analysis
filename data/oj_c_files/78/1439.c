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
	int  a[4],j,k,z,q,s,l,temp;
	char b[4],oemp;
	for (z=1;z<=5;z++)
	{
	for (q=1;q<=5;q++)
	{
	for (s=1;s<=5;s++)
	{
	for (l=1;l<=5;l++)
	{
	if (z+q==s+l && z+l>s+q && z+s<q )
		{
		z=10*z;
		q=10*q;
		s=10*s;
		l=10*l;
		a[0]=z,b[0]='z';
		a[1]=q,b[1]='q';
		a[2]=s,b[2]='s';
		a[3]=l,b[3]='l';
        for(j=0;j<3;j++)
	{
		for(k=0;k<3-j;k++)
		{
			if(a[k]<a[k+1])
			{
				temp=a[k];
				oemp=b[k];
			    a[k]=a[k+1];
				b[k]=b[k+1];
			    a[k+1]=temp;
				b[k+1]=oemp;
			}
		}
	}
		}
		}
		}
		}
		}
for(int m=0;m<4;m++)
cout<<b[m]<<" "<<a[m]<<endl;
	return 0;
}
