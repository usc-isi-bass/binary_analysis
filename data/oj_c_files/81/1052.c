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
	int check(int x,int y);
	char a[5][10];
	char *p[5];
	char *t;
	int n,m,i;
	
	for(i=0;i<5;i++)
	gets(a[i]);
	for(i=0;i<5;i++)
	p[i]=a[i];
	
	scanf("%d%d",&n,&m);
	if(check(n,m))
	{
      t=p[n];
	  p[n]=p[m];
	  p[m]=t;
	
	for(i=0;i<5;i++)
	{printf("%s\n",p[i]);}}
	else printf("error\n");
	return 0;
}

int check(int x,int y)
{
	if(x>-1&&x<5&&y>-1&&y<5)return 1;
	else return 0;
}

