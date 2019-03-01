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


int f(char str[1000],int re[1000])
{
    int k=0,n=0,l; 
    l=strlen(str);
    while(k<l)
    {
              re[n]=0;
              while((str[k]!=',')&&(str[k]!='\0'))
              re[n]=re[n]*10+str[k++]-'0';
              k++;n++;
    }
    return(n);
}
              
void main()
{
    int x[1000],y[1000],t[1000]={0};
    int n=0,i,j,max=0;
    char a[100000],b[100000];
    gets(a);
    gets(b);
    n=f(a,x);
    n=f(b,y);
    for(i=0;i<n;i++)
       for(j=x[i];j<y[i];j++)
          t[j]++;
    for(i=0;i<1000;i++)
    if(max<t[i]) max=t[i];            
    printf("%d %d\n",n,max);
}