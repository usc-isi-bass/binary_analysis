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

main()
{
	int n,i,num[100],*p;
	p=num;
    scanf("%d",&n);
    for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	sort(n,p);
    for(;p<num+n-1;p++)
		printf("%d ",*p);
       printf("%d",*p);
}
void sort(int m,int *p1)
{
	int i,t;
  for(i=0;i<m/2;i++)
	 { t=*(p1+i);
      *(p1+i)=*(p1+m-1-i);
      *(p1+m-1-i)=t;}
}