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


int main(int argc, char* argv[])
{
	char a[1000][41];
	int p=0,i=0,n;
	/*gets(a[0]);
	printf("%d",strlen(a[0]));*/
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	for(i=0;i<n;i++)
	{
		if(p==0)
		{
			printf("%s",a[i]);
			p=p+strlen(a[i]);
		}
		else if(p+1+strlen(a[i])<=80)
		{	
			printf(" %s",a[i]);
			p=p+strlen(a[i])+1;
		}
		else
		{
		/*	printf("(%i)",p);*/
			p=0;
			i--;
			printf("\n");
		}
	}
}