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
{  int a[100],b[100],i=0,j=0,m,n,c=0,d=0;
scanf("%d %d",&n,&m);
while(n!=0)
{   a[i]=n;
	n=n/2;
	i++;
	c++;
}
while(m!=0)
{
	b[j]=m;
	m=m/2;
	j++;
	d++;
}
for(i=0;i<c;i++)
{
	for(j=0;j<d;j++)
	{
		if(a[i]==b[j])
		{
			goto loop;
		}
		else
		{
			continue;
		}
	}
}
loop:printf("%d\n",a[i]);

	

 return 0;

}