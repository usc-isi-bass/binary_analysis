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
	void insert(char *a,char *b);
	char str[14],substr[3];
	while (scanf("%s",str)!=-1)
	{
		scanf("%s",substr);
		insert(str,substr);
	}
}

void insert(char *a,char *b)
{
	int i,n=0,m=1,la,lb;
	char c[14]={'\0'};
	la=strlen(a);
	lb=strlen(b);
	for(i=1;i<la;i++)if(*(a+i)>*(a+m-1))m=i+1;
	for(i=0;i<la-m;i++){c[i]=*(a+m+i);*(a+m+i)='\0';}
	strcat(a,b);
	strcat(a,c);
	printf("%s\n",a);
}
