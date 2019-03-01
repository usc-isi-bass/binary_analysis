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
    int n;
    scanf("%d",&n); 
    int i,j;
    int f[10000];
    for(i=0;i<n;i++)   f[i]=0;
    while(!(i==0&&j==0))   
    { 
       scanf("%d %d",&i,&j);f[i]--;f[j]++;}
   for(i=0;i<n;i++) 
    if(f[i]==n-1) { printf("%d",i); break;}  
   if(i==n)    printf("NOT FOUND");
return 0;
} 