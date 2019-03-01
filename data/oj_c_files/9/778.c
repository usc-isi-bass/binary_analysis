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

struct bing
{
       char a[10];
       int age;
};
struct bing bing[1000];
int main()
{
    int n,i,j=1,v=1,k,t[1000],m,p[1000];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     scanf("%s%d",&bing[i].a,&bing[i].age);
     if(bing[i].age>=60)
     {
        t[j]=i;
        j++;
        }
     else
     {
         p[v]=i;
         v++;
      }
        }
     j--;
     v--;
    if(j!=0)
    {
        for(i=1;i<j;i++)
         for(k=1;k<j-i+1;k++)
         if(bing[t[k]].age<bing[t[k+1]].age)
         {
            m=t[k];
            t[k]=t[k+1];
            t[k+1]=m;
            }
    }
    for(i=1;i<=j;i++)
    printf("%s\n",bing[t[i]].a);
    for(i=1;i<=v;i++)
    printf("%s\n",bing[p[i]].a);
    getchar();
    getchar();
    getchar();
}
    
             
     
