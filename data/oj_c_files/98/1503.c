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

void judge(char s[],int *n,int *m)
{
	char *a,*b,word[40];
	int k=0;
	for(a=s+*n,b=word;*a!=' '&&*a!='\0';a++,b++)
	{
		k++;
		*b=*a;
	}
	*b='\0';
	if(k<80-*m+1)
	{
		if(*m!=1)
		{
			printf(" ");
		}
		printf("%s",word);
		*n=*n+k+1;
		*m=*m+k+1;
		if(*m>80)
		{
			printf("\n");
			*m=1;
		}
	}
	else
	{	
		if(k==80-*m+1)
		{
			printf(" ");
			printf("%s\n",word);
			*n=*n+k+1;
			*m=1;
		}
		else
		{
			printf("\n%s",word);
			*n=*n+k+1;
			*m=k+2;
		}
	}
}
int main()
{
	void judge(char s[],int *n,int *m);
	int n,now=0,line=1,i;
	int *all=&now,*current=&line;
	char para[2000],enter;
	scanf("%d%c",&n,&enter);
	gets(para);
	for(i=1;i<=n;i++)
	{
		judge(para,all,current);
	}
	return 0;
}