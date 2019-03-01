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

int f(int ,int);
int main()
{
    int x,y,i,j,k=0;
    cin>>x>>y;
    for(i=1;i<=500;i++)
      { for(j=1;j<=500;j++)
       {   if(f(x,i)==f(y,j)) {cout<<f(y,j)<<endl;k=1;break;}
           else continue;}
           if(k==1) break;}
           return 0;
           }
int f(int a,int b)
{
    int m;
    if(b==1) m=a;
   else if(b==2) m=a/2;
    else m=f(a,b-1)/2;
    return m;
}
