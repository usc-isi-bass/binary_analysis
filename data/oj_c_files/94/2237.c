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
    int n,a,b,j,r,i;
    int sz[500];
    a=0;
    int num[500];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf(" %d ",&sz[i]);
        if(sz[i]%2!=0){
            num[a]=sz[i];
            a++;
        }
    }
    for(j=a;j>0;j--){
        for(r=0;r<j;r++){
            if(num[r]>num[r+1]){
                int tmp;
                tmp=num[r+1];
                num[r+1]=num[r];
                num[r]=tmp;
            }
        }
    }
    printf("%d",num[1]);
        for(int i=2;i<a+1;i++){
            printf(",%d",num[i]);
        }
    return 0;
}