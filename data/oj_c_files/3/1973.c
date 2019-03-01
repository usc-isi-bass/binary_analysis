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

//************************************************
//???K?????
/*?????????n(n<1000)??????????
???????????k?*/
//************************************************ 
int main()
{
   int k,n,i,j,a[1000],b[1000]={0},sum=0; //a[]??n?? 
   cin>>n>>k;
   for(i=0;i<n;i++)                    //for??????n?? 
   {
       cin>>a[i];             
   }
   for(i=0;i<n;i++)
   {
      for(j=i+1;j<n;j++)
      {
         if(a[i]+a[j]==k)              //??b[]???????????k 
            {
               b[i]=1;                 //???b[i](i=1,2……)??=1 
               break;             
            }                  
      }                
   }
   for(i=0;i<n;i++)
   {
      sum=sum+b[i];                    //??b[]?? 
   }
   if(sum==0)
      cout<<"no";                      //????yes,????no 
   else
      cout<<"yes";
      cin.get();                   
   return 0;   
}