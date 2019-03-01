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
    
    int arr[300];
    int arr1[300],arr2[300];
    int i,j;
    
    for (i=0;i<n;i++) {
        scanf("%d",&arr[i]);
        arr1[i]=arr[i];
        arr2[i]=i;
        }
    
    for (i=0;i<n;i++) {
        for (j=i+1;j<n;j++) {
        if (arr1[i]==arr1[j]) {
                              arr2[j]=-1;
                              }
                              }
                              }
                              
    int s=0;
    for (i=0;i<n;i++) {
        if (arr2[i]!=-1) {
                         s++;
                         }
                         }
                                                       
    for (i=0;i<n;i++) {
        if (arr2[i]!=-1) {
                         printf("%d",arr1[i]);
                         s--;
                         if (s>0) printf(",");
                         }
                         }
    return 0;
} 