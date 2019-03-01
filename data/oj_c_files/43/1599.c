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
     int i,j,m,n;
     int prime(int n);
     scanf("%d",&m);
     for(i=3;i<=m/2;i++) 
     {  if(prime(i)&&prime(m-i)) 
           printf("%d %d\n",i,m-i);}
     }
     
     int prime(int n)
     {
         int k,i;
         k=sqrt(n);
         for(i=2;i<=k;i++) if(n%i==0)break;
         return(i>k)?1:0;
         }
