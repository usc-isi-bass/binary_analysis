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

int main()
{
   int z,q,s,l,i,j,a,A[4];                  //???`?`?`??????,????i`j,????a,????A
   char b,B[4]={'z','q','s','l'};           //?????????b,??????????B
   for (z=10;z<=50;z=z+10)                  //?????????
   {
     for (q=10;q<=50;q=q+10)
     {
       for (s=10;s<=50;s=s+10)
       {
         for (l=10;l<=50;l=l+10)
         {
           if (z+q==s+l&&z+l>s+l&&z+s<q)    //?????????????
           {
              A[0]=z;                       //???A??????
              A[1]=q;                           
              A[2]=s;
              A[3]=l;
           }   
         }    
       }    
     }    
   }   
   for (i=0;i<4;i++)                        //?????,?????????,???????????????
   {
      for (j=0;j<3-i;j++)
      {
        if (A[j]<A[j+1])  
        {
           a=A[j];
           A[j]=A[j+1];
           A[j+1]=a;
           b=B[j];
           B[j]=B[j+1];
           B[j+1]=b;                 
        }  
      }    
   }
   for (i=0;i<4;i++)                        //?????????????
   {
      cout<<B[i]<<" "<<A[i]<<endl;    
   }
   return 0;
} 