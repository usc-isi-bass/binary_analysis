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
    int n;char a[1000][50];//????
    int i,b[1000],sum=0,p=0;
    cin>>n;//????
    for(i=0;i<n;i++) {scanf("%s",a[i]);b[i]=strlen(a[i]);}//???????????????
   for(i=0;i<n;i++)
   {

       if(p) cout<<" ";
       cout<<a[i];
       p=1;
       sum=sum+b[i]+1;
       if(sum+b[i+1]>80) {cout<<endl;sum=0;p=0;}//?????80????
   }
    return 0;
}
