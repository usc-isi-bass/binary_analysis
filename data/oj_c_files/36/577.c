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


void rearrange(char c[])
{
	int i,j,len;
	char temp;
	len=strlen(c);
	for(i=0;i<len;i++)
	{
		for(j=i+1;j<len;j++)
			if(c[i]>c[j])
			{
				temp=c[i];
				c[i]=c[j];
				c[j]=temp;
			}
	}
}


void compare(char c1[],char c2[])
{
	int i,j,total=0;
	int len1,len2;
	len1=strlen(c1);
	len2=strlen(c2);
	if(len1!=len2)
		printf("NO");
	else if(len1==len2)
	{
		for(i=0;i<len1;i++)
		{
			if(c1[i]==c2[i])
				total++;
		}
		if(total==len1)
			printf("YES");
		else
			printf("NO");
	}
}

void main()
{
	char c1[100],c2[100];
	scanf("%s%s",c1,c2);
	rearrange(c1);
	rearrange(c2);
	compare(c1,c2);
}
