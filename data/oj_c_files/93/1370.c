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
	int a,b[3],c[3],i,j=0;
	scanf("%d\n",&a);
	b[0]=3;
	b[1]=5;
    b[2]=7;
	for(i=0;i<3;i++)
	{
		if(a%b[i]==0)
		{
			c[j]=b[i];
			j++;
		}
	}
	if(j==1)
	{
printf("%d",c[0]);
			}
	else if(j==2)
{
printf("%d %d",c[0],c[1]);
}
else if(j==3)
{
printf("%d %d %d",c[0],c[1],c[2]);
}
else if(j==0)
	{
		printf("n");
	}
	return 0;
}