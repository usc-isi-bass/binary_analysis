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

struct student
{
  int ID;
  int chi;
  int math;     
}student[100000];
int main()
{
   int n,i,j,k;
   scanf("%d",&n);
      int a[n];
   for(i=0;i<n;i++)
     {
     scanf("%d %d %d",&student[i].ID,&student[i].chi,&student[i].math);      
      a[i]=student[i].chi+student[i].math;
      }

  for(k=0;k<3;k++)
  {
   for(i=0;i<n;i++)
    {
       for(j=0;j<n;j++)
       {
          if(a[i]<a[j])
             break;          
       } 
       if(j==n&&a[i]>=a[j-1]) 
         {
           printf("%d %d\n",student[i].ID,a[i]);
           a[i]=0;
           break;
         }      
    }  
  } 
   getchar();
   getchar();   
}
