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
	int a[100000],*p,n,i,k,*p1,num=0,t;
	scanf("%d\n",&n);
	for(p=a;p<a+n;p++)
	   scanf("%d",p);
    scanf("\n");
    scanf("%d",&k);
    for(p=a;p<a+n;p++)
       if(*p==k)
       {
       	p1=p;t=0;
       	while(*p1==k)
       	{p1++;num++;t++;}
       	for(i=0;p+i<a+n;i++)
       	*(p+i)=*(p1+i);
       }
    n-=num;
    for(p=a;p<a+n-1;p++)
       printf("%d ",*p);
    printf("%d\n",*p);
}