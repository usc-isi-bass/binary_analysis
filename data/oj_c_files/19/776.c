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
	char s[123],a[20],b[20],danci[50][20],
		*ss=s,*aa=a,*bb=b,*p1,*p2,*word[50];
	int i,j=0,num;
	for(i=0;i<50;i++)
		word[i]=danci[i];
	gets(ss); gets(aa); gets(bb);
	for(p1=p2=s;;p1++)
	{
		if(*p1==' '||*p1=='\0')
		{
			strncpy(word[j],p2,p1-p2);
			*(word[j]+(p1-p2))='\0';
			p2=p1+1;
			j++;
			if(*p1=='\0')
				break;
		}
	}
	num=j;
	for(j=0;j<num;j++)
	{
		if(!strcmp(word[j],aa))
			strcpy(word[j],bb);
	}
	for(j=0;j<num-1;j++)
		printf("%s ",word[j]);
	printf("%s",word[j]);
}
		

