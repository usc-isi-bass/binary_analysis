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
	int num,i;
	scanf("%d",&num);
	char **p; 
	int judge(char *x);
	p=(char **)malloc(num*sizeof (char *));
	for(i=0;i<num+1;i++)
	{
		*(p+i)=(char *)malloc(100);
		gets(*(p+i));
	}
	for(i=1;i<num+1;i++)
		printf("%d\n",judge(*(p+i)));
}
int judge(char *x)
{
	int i,flag=0;
	if(*x=='_'||*x>='a'&&*x<='z'||*x>='A'&&*x<='Z')
		flag=1;
	for(i=1;*(x+i)&&flag==1;i++)
		if((*(x+i)>='a'&&*(x+i)<='z'||*(x+i)>='A'&&*(x+i)<='Z'||*(x+i)>='0'&&*(x+i)<='9'||*(x+i)=='_')!=1)
			flag=0;
	return flag;
}