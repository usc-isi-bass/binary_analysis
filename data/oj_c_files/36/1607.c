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
	int i,j;
	char a[10000],b[10000],c;
	scanf("%s %s",a,b);
	for(i=0;i<strlen(a);i++)
		for(j=0;j<strlen(a)-1;j++)
		{
			if(a[j]>a[j+1]) 
			{
				c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
			}
		}
	//printf("%s",a);
	for(i=0;i<strlen(b);i++)
		for(j=0;j<strlen(b)-1;j++)
		{
			if(b[j]>b[j+1]) 
			{
				c=b[j];
				b[j]=b[j+1];
				b[j+1]=c;
			}
		}
	if(strcmp(a,b)==0) printf("YES");
	else printf("NO");
	return 0;
}