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
{long i,n,x;
 int a[100]={0};
 scanf("%d",&n);
 scanf("%d",&x);
 printf("%d",x);
 a[x]=1;
 for(i=2;i<=n;i++)
    {scanf("%d",&x);
     if(a[x]==0){
     printf(" %d",x);a[x]=1;}
	 }
 return 0;
}

