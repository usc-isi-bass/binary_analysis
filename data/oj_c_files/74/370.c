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

int a[10];
main()
{
	int sushu(int i);
	int huiwen(int i);
	
	int num,m,n,i;
	int flag=0;
	int c,d;
	scanf("%d%d",&m,&n);
	for(i=m;i<=n;i++)
	{c=sushu(i);
	 d=huiwen(i);
	 if(c==1&&d==1)
	 {flag++;
	  if(flag==1) printf("%d",i);
	  else printf(",%d",i);}}
	if(flag==0) printf("no");
}

int sushu(int i)
{
	int j;
	for(j=2;j<i;j++)
	{if(i%j==0)
	   {return 0;
	break;}}
	if(j==i) return 1;
}

int huiwen(int i)
{
	int j,k;
	for(j=0;;j++)
	{if(pow(10,j)>i) break;}
    for(k=0;k<j;k++)
	{a[j-1-k]=i%10;
	i=i/10;}
	for(k=0;k<j;k++)
	{if(a[k]!=a[j-1-k])
	{return 0;
	break;}}
	if(k==j) return 1;
}
