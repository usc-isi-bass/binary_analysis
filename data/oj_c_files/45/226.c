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

void main()
{
	char a[50],b[50];int c,d,i,j,t,k;
    scanf("%s %s",&a,&b);
	c=strlen(a);
	d=strlen(b);
	a[c]='\0';
	b[d]='\0';
	for(j=0;j<d-c+1;j++)
	{
		for(t=0;t<=c;t++)
		{
			if((b[j+t]-a[t])!=0)
				break;
		}
		if(t==c)
			break;
	}
	if(j<=d-c)
		printf("%d",j); 
	else if(j==d-c+1)
	{
		for(k=0;k<=c;k++)
		{
			if(b[k+d-c]!=a[k])
				break;
		}
		if(k==c+1)
			printf("%d",d-c);
	}
}


   
	


	