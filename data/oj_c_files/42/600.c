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
 long int n,m,i,j=0;
 long int a[100001];
 long int *p,*q,*o;
 scanf("%ld",&n);
 for(p=a;p-a<n;p++)
 scanf("%ld",p);
 scanf("%ld",&m);
 for(p=a;p-a<n-j;)
 {if(*p==m) 
   {for(q=p+1;q-a<n;q++)
    *(q-1)=*q;
    j++;}
  else p++;}  
 for(p=a;p-a<n-j-1;p++)
 printf("%ld ",*p);
 printf("%ld",*p);
}
