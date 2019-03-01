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
{int run(int n);
 int q[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
 int i,n,y,r,s=0,k;
 scanf("%d %d %d",&n,&y,&r);
 for(i=0;i<y;i++)
  s=s+q[i];
 s=s+r;
 k=run(n);
 if(k&&(y>2)) s+=1;
 printf("%d",s);
 
}

int run(int n)
{int a;
 if((n%400==0)||((n%4==0)&&(n%100!=0)))  a=1;
 else a=0; 
 return a;
} 
