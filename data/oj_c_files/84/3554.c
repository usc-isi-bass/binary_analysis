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
 int arr[100]={0};
 int n,i,s,j;
n=0;
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {
  scanf("%d",&arr[i]);
 }
 int max=-10000;
 for(s=0;s<n;s++)
 {
  max=(max>=arr[s])?max:arr[s];
 }
 int secondMax=0;
 for(j=0;j<n;j++)
 {
  secondMax=(secondMax>=arr[j]||arr[j]==max)?secondMax:arr[j];
 }
 printf("%d\n",max);
 printf("%d",secondMax);
 return 0;
}