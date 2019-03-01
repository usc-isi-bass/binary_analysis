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
	int a[1001],b[1001],i,j,m,n,x,y,flag;
	cin>>x>>y;
	flag=0;
	for(i=0;i<=x;i++) a[i]=0;
	for(i=0;i<=y;i++) b[i]=0;
 	i=0;j=0;
	while(x>0)
	{
		a[i]=x;
		x=x/2;
		i++;
	}
	while(y>0)
	{
		b[j]=y;
		y=y/2;
		j++;
	}
    for(m=0;m<=i;m++)
    {

	 for(n=0;n<=j;n++)
     if (a[m]==b[n]) {cout<<a[m];goto lable;}
   
    }
    lable:
	return 0;
}
