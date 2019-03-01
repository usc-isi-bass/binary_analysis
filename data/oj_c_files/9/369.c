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

struct person
{
 char num[11];
 int yr;
}pe[100],t;
int main()
{
 int n,i,e,k;
 scanf("%d",&n);
 for(i=0;i<n;i++){
  scanf("%s %d",pe[i].num,&pe[i].yr);
 }
    for(k = 0 ; k < n ; k++){
 for(i = 0; i <n-k-1 ; i++){
   if((pe[i+1].yr>=60)&&(pe[i].yr<pe[i+1].yr)){
    t=pe[i];
    pe[i]=pe[i+1];
    pe[i+1]=t;
   }
 }
}
    for(i=0;i<n;i++){
  printf("%s\n",pe[i].num);
 }
 return 0;
}