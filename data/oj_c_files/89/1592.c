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


int  main()
{
     int d,e,f,g,i,j,k,l,m,n,x,y;
     int a[10000]={0};
     int b[10000]={0};
     scanf("%d",&d);
x=y=1;         
a[0]=b[0]=-1;
    while(x+y!=0)
    {
        scanf("%d %d",&x,&y);
        a[x]++;
        b[y]++;
    }
    
     for(j=0,m=1,n=0;j<d;j++)
        {
            if(b[j]==d-1&&a[j]==0)
             {
                      l=j;           
             n=1;
           
            }
            
           
        }                                            
     if(n==1)
       printf("%d",l);
       else
        printf("NOT FOUND");
        
 
}                                                                                     
                