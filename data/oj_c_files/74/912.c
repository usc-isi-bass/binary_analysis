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
 int a,b,i,m,n,j,k=0,t,g[100],l;
 scanf("%d %d",&a,&b);
 for(i=a;i<=b;i++)
 {t=i;m=1;n=0;
 while(t!=0)
 {m=t%10;t=t/10;n=n*10+m;}
 if(n==i)
 {for(j=2;j<i/2;j++)
 {if(i%j==0) break;
 if(j==i/2-1) {g[k]=i;k=k+1;}
 }
 }
 }
 if(k==0) printf("no");
 else printf("%d",g[0]);
 for(l=1;l<k;l++)
 {printf(",%d",g[l]);}
}