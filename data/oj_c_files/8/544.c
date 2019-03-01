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

int A,B,a[40],b[40];

void enter()
{
 int i;
 scanf("%d %d",&A,&B);
 scanf("%d",&a[1]);
    for(i=2;i<=A;i++)
  scanf(" %d",&a[i]);
 scanf("%d",&b[1]);
    for(i=2;i<=B;i++)
  scanf(" %d",&b[i]);
}

void array()
{
 int i,j,m;
 for(i=1;i<=A-1;i++)
  for(j=1;j<=A-i;j++)
  {
   if(a[j]>a[j+1])
   {
                m=a[j];
    a[j]=a[j+1];
    a[j+1]=m;
   }
  }
 for(i=1;i<=B-1;i++)
     for(j=1;j<=B-i;j++)
  {
      if(b[j]>b[j+1])
   {
                m=b[j];
        b[j]=b[j+1];
       b[j+1]=m;
   }
  }
}

void connect()
{
 int i,j;
 for(i=A+1,j=1;i<=A+B;i++,j++)
  a[i]=b[j];
}

void print()
{
 int i;
 printf("%d",a[1]);
 for(i=2;i<=A+B;i++)
  printf(" %d",a[i]);
}


void main()
{
    enter();
    array();
 connect();
 print();
}

