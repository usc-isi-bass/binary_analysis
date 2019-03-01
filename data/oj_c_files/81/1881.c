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

int ismatrix(int m, int n)
{
    if(m>=5||n>=5||n<0||m<0){
    return 0;
    }
    return 1;
}

int main()
{
    int i, j;
    int m, n;
    int a[5][5];
    for(i=0; i<5; i++)
    for(j=0; j<5; j++)
    scanf("%d", &a[i][j]);
    scanf("%d%d", &m, &n);
    if(ismatrix(m, n)){
        int tmp, first=1;
        for(i=0; i<5; i++){
            tmp=a[m][i];
            a[m][i]=a[n][i];
            a[n][i]=tmp;
        }
        for(i=0; i<5; i++)
        for(j=0; j<5; j++){
            if(j!=4)
            printf("%d ", a[i][j]);
            if(j==4)
            printf("%d\n",a[i][j]);
        }
    }
    else
    printf("error\n");
    return 0;
}

