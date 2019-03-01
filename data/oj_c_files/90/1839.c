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
void main() 
{ 
   int n,m,s,i;
   scanf("%d",&i);
   while(i--)
  {
     scanf("%d %d",&m,&n); 
     if(n>m) n=m; 
     s=fun(m,n,0); 
     printf("%d\n",s); 
  } 
}
int fun(int m,int n,int j) 
{ 
    int i,s=0; 
    if(m<j) 
       return 0;
    if(n==1) 
        return 1;
    for(i=j;i<m;i++) 
        s+=fun(m-i,n-1,i); 
    return s; 
}