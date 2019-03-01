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
   int N,i,A,B;
   int a[1000000],b[1000000];
   scanf("%d",&N);                     //???
   int c[N];
   for(i=0;i<N;i++)
   {c[i]=N;}
   i=0;
   while(scanf("%d %d",&A,&B)&&((A*A+B*B)!=0)) 
   {  
      c[A]=0;             
      a[i]=A;
      b[i]=B;             
      i++;}   
   
   for(i;i>0;i--)
   {
    c[b[i-1]]--;           
                  }
    int k=0;
    for(i=0;i<N;i++)
    {
    if(c[i]==1)
    printf("%d",i);
     else
     k++;            
        }              
    if(k==N)
    printf("NOT FOUND") ;
    
    
    getchar();      
    getchar();      
    getchar(); 
    getchar(); 
    getchar();      
    getchar();      
    getchar();
    getchar();      
    getchar(); 
    getchar(); 
    getchar();           
   }
