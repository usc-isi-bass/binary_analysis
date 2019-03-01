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
    int N,number[500],i,k,min,odd[500],n,e;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&number[i]);
    }
    k=0;
    for(i=0;i<n;i++){
        if(number[i]%2==1){
            odd[k]=number[i];
            k++;
        }
    }
    n=k;
    for(i=0;i<n;i++){
        min=i;
        for(k=i+1;k<n;k++){
            if(odd[min]>odd[k]){
                min=k;
            }
        }
        e=odd[min];
        odd[min]=odd[i];
        odd[i]=e;
    }
    for(i=0;i<n-1;i++){
        printf("%d,",odd[i]);
    }
    printf("%d",odd[n-1]);
    return 0;
}
