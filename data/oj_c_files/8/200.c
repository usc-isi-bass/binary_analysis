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

void main()
{
  void f(int x,int y);
  int m,n;
  scanf("%d %d",&m,&n);
  f(m,n);
}

void f(int x,int y)
{
  void h(int array[],int n);
  int i,c;
  int a[20],b[20];
  for(i=0;i<x;i++)
  scanf("%d",&a[i]);
  for(i=0;i<y;i++)
  scanf("%d",&b[i]);
  h(a,x);       
  printf(" ");
  h(b,y);
  printf("\n");
}

void h(int array[],int n)
{
  int i,j,t;
  for(i=0;i<n-1;i++)
  for(j=0;j<n-i-1;j++)
  if(array[j]>array[j+1])
  {
   t=array[j];
   array[j]=array[j+1];
   array[j+1]=t;
  }
printf("%d",array[0]);
for(i=1;i<n;i++)
printf(" %d",array[i]);
}