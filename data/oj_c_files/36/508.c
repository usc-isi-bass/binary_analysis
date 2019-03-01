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


void kjj(char a[],int len)
{
	int i,j;
	char c;
	len=strlen(a);
	for(i=1;i<len;i++)
		for(j=0;(j<len-i)&&(a[j]!='\0');j++)
			if(a[j]>a[j+1])
			{
				c=a[j];
				a[j]=a[j+1];
				a[j+1]=c;
			}
			
}
			
void main()
{
	char a[10000],b[10000];
	int len1,len2;
    scanf("%s %s",a,b);
    len1=strlen(a);len2=strlen(b);
	kjj(a,len1);
	kjj(b,len2);
	if(strcmp(a,b)==0&&len1==len2)
		printf("YES");
	else
		printf("NO");
}
