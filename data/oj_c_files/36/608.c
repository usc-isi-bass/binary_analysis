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
	int i,j;
	int n;
	char str1[10];
	char str2[10];
	char temp;
	scanf("%s%s",str1,str2);
	n=strlen(str1);
	for(j=1;j<n;j++)
		for(i=0;i<n-j;i++)
			if(str1[i]<str1[i+1])
			{
				temp=str1[i];
				str1[i]=str1[i+1];
				str1[i+1]=temp;
			}
		n=strlen(str2);
		for(j=1;j<n;j++)
		    for(i=0;i<n-j;i++)
			    if(str2[i]<str2[i+1])
				{
				    temp=str2[i];
				    str2[i]=str2[i+1];
				    str2[i+1]=temp;
				}
			if(strcmp(str1,str2)==0)
				printf("YES\n");
			else
				printf("NO\n");

}