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

int a[5][5],b[5][5],m,n,c[5];   
int zhuanhuan(int a[5][5],int m, int n)
{
    int z,i;
    if(n<=4&&n>=0&&m<=4&&m>=0)
    {
       z=1;
        for (i=0;i<5;i++)
        {
            *(c+i)=*(a[m]+i);           
            *(a[m]+i)=*(a[n]+i);
            *(a[n]+i)=*(c+i);
        }
        
    }
    else 
    {
        z=0;
    }
    return(z);
}
void main()
{
     int i,j,fanhui;
     for (i=0;i<5;i++)
     {
         for (j=0;j<5;j++)
         {
             scanf("%d",&*(a[i]+j));
         }
     }     
     scanf("%d",&m);
     scanf("%d",&n);
     fanhui=zhuanhuan(a,m,n);          
     if (fanhui==0)
     {
         printf("error");
     }
     if (fanhui==1)
     {
         for(i=0;i<5;i++)
         {
             for (j=0;j<5;j++)
             {
                 if(j==4) printf("%d\n",*(a[i]+j));
                 else printf("%d ",*(a[i]+j));
             }
         } 
     }
}
