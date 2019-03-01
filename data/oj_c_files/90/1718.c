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
 int p(int a,int b);
 int i,j,m,n,k,l;
 scanf("%d",&l);
 for(i=0;i<l;i++)
 {scanf("%d%d",&m,&n);
  k=p(m,n);
  printf("%d\n",k);} 
}
int p(int a,int b)
{int k;
 if(b>1)
 {if(a>=b)
   k=p(a,b-1)+p(a-b,b);
  else   k=p(a,b-1);}
 if(b==1) k=1; 
 return(k);
}
