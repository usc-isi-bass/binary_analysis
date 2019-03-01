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


int hefa(char*a){
	for (;*a=='_'||(*a>='A' &&*a<='Z')||(*a>='a' &&*a<='z')||(*a>='0' &&*a<='9')||*a=='\0';a++)
	{
		if (*a=='\0')
		{
			printf("1\n");
			return 0;
		}else if (!(*a=='_'||(*a>='A' &&*a<='Z')||(*a>='a' &&*a<='z')||(*a>='0' &&*a<='9')))
		{
			printf("0\n");
			return 0;
		}
	}
	printf("0\n");
	return 0;
}
int main(){
	char zifu[2000000];
	char *p;
	int i,n;
	scanf("%d",&n);
	getchar();
	for (i=0;i<n;i++)
	{
		gets(zifu);
		p=zifu;
		if (*p=='_'||(*p>='A' &&*p<='Z')||(*p>='a' &&*p<='z'))
		{
			hefa(p);
		} 
		else
		{
			printf("0\n");
		}
	}
	return 0;
}
