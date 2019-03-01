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

void input(int *p,int *q,int *n,int *m) 
{
     int *x;
     scanf("%d %d",n,m);
     x=p+*n;
     for(;p<x;p++)
        scanf("%d",p);
     x=q+*m;
     for(;q<x;q++)
        scanf("%d",q);
}

void sort(int *p,int n)
{
     int x,i,j,k;
     for(i=0;i<n-1;i++)
     {
         k=i;
         for(j=i+1;j<n;j++)
            if(*(p+j)<*(p+k)) k=j;
         if(k!=i)
         {
                 x=*(p+i);
                 *(p+i)=*(p+k);
                 *(p+k)=x;
         }
     }
}

void copy(int *p,int *q,int x[],int n,int m)
{
     int i;
     for(i=0;i<n;i++,p++)
        x[i]=*p;
     for(;i<n+m;i++,q++)
        x[i]=*q;
}

void output(int *p,int n)
{
     int *y;
     y=p+n-1;
     printf("%d",*p);
     p++;
     for(;p<=y;p++)
        printf(" %d",*p);
}        

int main()
{ 
     int i,a[100],b[100],c[200],x,y,*n,*m;
     n=&x;
     m=&y;
     input(a,b,n,m);
     sort(a,x);    
     sort(b,y);
     copy(a,b,c,x,y); 
     output(c,x+y);
     
}