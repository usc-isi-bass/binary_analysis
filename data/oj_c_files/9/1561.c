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

struct stu{
         char n[30];
         int y;
       };

void sort(struct stu a[],int l, int r)
{
     int i=l,j=r,t=a[(l+r)/2].y;
     
     struct stu temp;
     while (i<=j)
     {
          while (a[i].y>t) i++;
          while (a[j].y<t) j--;  
          if (i<=j)
              {
                  temp=a[i];
                  a[i]=a[j];
                  a[j]=temp;
                  i++;
                  j--;
              }
          
     }
     if (l<j) sort(a,l,j);
     if (i<r) sort(a,i,r);
}



int main()
{
   int n;
   struct stu a[1000],b[1000],c[1000],temp;
   int i,j,tot=0,totc=0;
   
   scanf("%d",&n);
   
   for (i=1;i<=n;i++)
       {
          scanf("%s %d",&a[i].n,&a[i].y);                     
          if (a[i].y>=60) 
             {
                b[++tot]=a[i];               
             } else
             {
                c[++totc]=a[i];      
             }
             
       }
       
   for (i=1;i<tot;i++)
      for (j=2;j<=tot-i+1;j++)
        if (b[j-1].y<b[j].y)
           {
               temp=b[j-1];
               b[j-1]=b[j];
               b[j]=temp;       
                          
           }
         
       
   
   for (i=1;i<=tot;i++) printf("%s\n",b[i].n);
   for (i=1;i<=totc;i++) printf("%s\n",c[i].n);
   
 //  scanf("%d",&n);
   
   return 0;
   
}
