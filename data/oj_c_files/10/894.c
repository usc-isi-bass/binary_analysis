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

int a[25];
int main()
{   int max(int k,int n);
    int i,n,m=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);}
    for(i=0;i<n;i++){
        if(max(i,n)>m)
        m=max(i,n);
        }
    printf("%d",m);
}
int max(int k,int n)
{
    int l=0,j;
    if (k==n-1)
    l=0;
    for(j=k+1;j<n;j++){
        if(a[j]<=a[k]){
           if(max(j,n)>l)
           l=max(j,n);
           }
           }
    return l+1;
}   
        
    
        