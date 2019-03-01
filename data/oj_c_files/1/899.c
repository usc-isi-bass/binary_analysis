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

int f(int a,int j);
int main()
{
    int n,a,s,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
                    cin>>a;
                    s=f(a,2)+1;
                    cout<<s<<endl;}
 
    return 0;
}
int f(int a,int j)
{  int i,tem;
    //if(j>sqrt(a))return 0;
    int count = 0;
   for(i=j;i<=sqrt(a);i++)
   {
       if(a%i==0) 
           {
                  j=i;
                  //tem=f(a/i,j);
                  //count=(tem+1)+count;
                  //cout<<"i="<<i<<","<<"f="<<tem<<","<<count<<endl;
                  //cout<<"count="<<count<<endl; 
                  //count=(f(a/i,j)+1)+count; 
                  //count=count+(f(a/i,j)+1);
                  if(a/i < j) count+=1;
                  else count+=(f(a/i,j)+1);
                  //cout<<"i="<<i<<","<<count<<endl;
           }
   }
   return count;
}