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

int fun(int m,int n,int j); 
int main(void) 
{ int a,n,m;
int s[20];
scanf("%d",&a);
for(int i=0;i<a;i++)
{
scanf("%d%d",&m,&n); 
if(n>m) n=m;
s[i]=fun(m,n,0);
}
for(int i=0;i<a;i++)
printf("%d\n",s[i]); 
} 
int fun(int m,int n,int j) 
{ int i,s=0; 
if(n==1) return m>=j; 
for(i=j;i<m;i++) s+=fun(m-i,n-1,i); 
return s; 
}