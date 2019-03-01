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
  int n,a[300],d[300],i=0,*p;
  int judge(int *w,int i,int *p);
  scanf("%d",&n);
  for(p=a;p<a+n;p++)
  {
  scanf("%d",p);
  }
  for(p=a;p<a+n;p++)
  {
  if(judge(d,i,p)==0)
  {d[i]=*p;i++;}
  }
  for(p=d;p<d+i;p++)
  {
	  if(p==d)printf("%d",*p);
	  else printf(",%d",*p);
  }
	  
	  return 0;
}
int judge(int *w,int i,int *p)
{

	int *pi=w;
		for(;pi<w+i;pi++)
		{
	
			if(*p==*pi) return 1;
		}
return 0;
}
