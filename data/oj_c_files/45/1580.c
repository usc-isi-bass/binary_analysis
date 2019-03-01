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

char p[1000][21];
int judge(char s[],char w[],int x)
{
	int l,k;
	l=strlen(s);
	for(k=0;k<l;k++)
	{
		if(s[k]!=w[k+x])
			break;
	}
	if(k==l)
		return(1);
	else return(0);
}
void main()
{
	int l1,l2,i;
	char s[50],w[50];
	scanf("%s %s",s,w);
	l1=strlen(s);
	l2=strlen(w);
	for(i=0;i<l2-l1;i++)
	{
		if(judge(s,w,i)==1)
			break;
	}
	printf("%d\n",i);
}