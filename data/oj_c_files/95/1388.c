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
	char s1[100]={0},s2[100]={0};
int n,m,i,k;
gets(s1);
gets(s2);
n=strlen(s1);
m=strlen(s2);
for(i=0;i<=n-1;i++)
{if(s1[i]>='a'&&s1[i]<='z') s1[i]=s1[i]-32;}
for(i=0;i<=m-1;i++)
{if(s2[i]>='a'&&s2[i]<='z') s2[i]=s2[i]-32;
}
k=strcmp(s1,s2);
{if(k==0) printf("=");
else if(k>0) printf(">");
else if(k<0) printf("<");
}
}