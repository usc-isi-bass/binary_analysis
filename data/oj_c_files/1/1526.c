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

int sum=0;
int f(int a,int b)
{
     for(int i=a;i>1;i--)
     {
     if(a%i!=0)
     {continue;}
     else
     {
     if(i>b) 
     {continue;}
     else
     {
     int q;
     q=a/i;
     if(q==1)
     {sum++;}
     else {f(q,i);}
     }
     }
     }
     return sum;
}  

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    int num;
    cin>>num;
    int c;
    c=f(num,num);
    cout<<c<<endl;
    sum=0;
    }
    return 0;
}
