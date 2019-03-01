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
{int n,v[20000],m=0,s[20000],p=0;
 scanf("%d",&n);
 for(int i=0;i<=n-1;i++)
 {
   scanf("%d",&v[i]);
 }
for(int j=1;j<=n-1;j++)
 { 
  for(int k=0;k<=j-1;k++)
   {
     if(v[j]!=v[k]) 
     {p++;}
   } 
   if(p==j){s[m]=v[j];m++;}
   p=0;
 }
if(m==0)
 {printf("%d",v[0]);}
else
{printf("%d ",v[0]);}
for(int k=0;k<=m-1;k++)
 {
   if(k==m-1){printf("%d",s[k]);}
   else {printf("%d ",s[k]);}     
 }

}
