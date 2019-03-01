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
{int sushu(int i); 
 int n,e,i,j,k,p,q,d;
 scanf("%d",&n);
 for(p=6;p<=n;p=p+2)
 {for(e=2;e<p;e++)
    {if((sushu(e)==1)&&(sushu(p-e)==1)) 
     {printf("%d=%d+%d",p,e,p-e);break;}
    }
  printf("\n");
 }




}


int sushu(int i)
{int j,p,s;
 s=sqrt(i);
 for(j=2,p=1;j<=s;j++)
    if(i%j==0) {p=0;break;}
 return (p);   
    } 
