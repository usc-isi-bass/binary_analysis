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
    int n,i,j,t,s=0;
    int a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
                     scanf("%d",&t);
                     if(t%2==1){
                                a[s]=t;
                                s++;
                                }
                     }
    for(i=1;i<s;i++){
                       for(j=0;j<s-i;j++){
                                          if(a[j]>a[j+1]){
                                                        int t=a[j];
                                                        a[j]=a[j+1];
                                                        a[j+1]=t;
                                                        }
                                                        }
                                                        }
    for(i=0;i<s-1;i++)
    printf("%d,",a[i]);
    printf("%d",a[s-1]); 
    return 0;
    }
