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
{int a,b,i,j;
 while(1)
 {
	 scanf("%d %d",&a,&b);
     if(a==0&&b==0)break;
 
	 int f[301]={0},n;
 
	 n=a;
 
	 for(j=1;j<=n;j++)
 
	 {f[j]=(f[j-1]+b)%j;
     if(f[j]==0)
      f[j]=j;}
 printf("%d\n",f[n]);
}
}