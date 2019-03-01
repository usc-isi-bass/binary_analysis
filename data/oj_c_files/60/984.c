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

int su(int n)
{
    int m=0,i;
    for(i=1;i<n+1;i++){
                       if(n%i==0) m+=1;
                       }
    if(m==2) return 1;
    else return 0;
}
int main()
{
    int n,j=0;
    scanf("%d",&n);
    int i;
    for(i=1;i<n-1;i++){
                     if(su(i)==1 && su(i+2)==1){
                                 printf("%d %d\n",i,i+2);
                                 j++;
                                 }
                     }
    if(j==0) printf("empty");
    return 0;
}
