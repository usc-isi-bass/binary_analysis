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
 int i,j,n;
 int*p,*q;
 scanf("%d",&n);
 p=(int*)malloc(n*sizeof(int));
 q=(int*)malloc(n*sizeof(int));
 for(i=0;i<n;i++)
 {
  *(p+i)=0;
  *(q+i)=0;               
}
                 int a,b;
                while(1)
                 {
                  scanf("%d %d",&a,&b);
                  if(a==0&&b==0) break;
                  else
                  {
                   *(p+a)=*(p+a)+1;
                   *(q+b)=*(q+b)+1;   
                      }         
                           }
                           int x[2];
                           x[0]=-1;
                           for(i=0;i<n;i++)
                           {
                            if(*(p+i)==0&&*(q+i)==n-1)
                            {x[0]=i;printf("%d",x[0]);break;}               
                                           } 
                                           if(x[0]==-1)
                                           printf("NOT FOUND\n");

      }
