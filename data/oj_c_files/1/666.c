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

int sum;
int yin(int c,int g)//?????
{
    int j,k,f,e;
    for(j=g;j<=c;j++)//??
    {
        if(c%j==0)
        {
           e=c/j;
            if(e>1)
            {
                f=j;
                yin(e,f);
            }
            else sum++;//?????????
        }
    }
    return sum;//??
}
int main()
{
    int n,a[1000],b[1000],i,d;
    cin>>n;
    for(i=0;i<n;i++) cin>>a[i];//??
    for(i=0;i<n;i++) {d=2;sum=0;b[i]=yin(a[i],d);}
    for(i=0;i<n;i++) cout<<b[i]<<endl;//??
    return 0;

}
