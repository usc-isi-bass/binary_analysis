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
{int num[100500]={0};
 int n,i,j,k,count=0;
 cin>>n;
 for(i=0;i<n;i++) cin>>num[i];
 cin>>k;
 
 for(i=0;i<n;i++)   //??k???????? 
  while(num[i]==k)
    {count++;
     for(j=i;j<n-1;j++) num[j]=num[j+1];
     num[n-1]=12365;} //???????? 
 for(i=0;i<n-count-1;i++) cout<<num[i]<<" "; //??????? 
 if(n-count-1>=0)cout<<num[n-count-1];
 cout<<endl; 

 return 0;
    } 
