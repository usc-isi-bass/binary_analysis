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

int su(int i)
{
    int z=1; 
    for (int k=2;k<=sqrt(i);k++)
    if(i%k==0)
    z=0;
    return z;
} 

int hui(int i)
{
         int a[100];
         int j=0,p=1; 
         while(i>0)
         {
                 a[j]=i%10;
                 i=i/10;
                 j++;
         }
         for(int k=0;k<j/2;k++)
         {
                 if(a[k]!=a[j-1-k])
                 {
                                  
                                   p=0;
                                    break;
                 }
         } 
         return p;
}
int main()
{
     int m,n;
     scanf("%d %d",&m,&n); 
     int i;
     int b[100];
     int k=0; 
     for(i=m;i<=n;i++)
     {
                       if(su(i)) 
                       {
                                 if(hui(i))
                                 {b[k]=i;k++;}
                       }
     }
     if(k==0)
     printf("no");
     else{
          for(i=0;i<k-1;i++)
          printf("%d,",b[i]);
          printf("%d",b[i]);
          }
          getchar();
          getchar();
          getchar(); 
} 