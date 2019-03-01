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

int main(){
    int n;
    scanf("%d",&n);
    int a[30];
    int b[30][100];
    for(int i=0;i<=29;i++){
            b[i][1]=1;
            b[i][2]=1;}
    for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
            if((a[i]==1)||(a[i]==2)){
                                 printf("%d\n",b[i][a[i]]=1);}
            else{
                 for(int j=3;j<=a[i];j++){
                     b[i][j]=b[i][j-1]+b[i][j-2];
                    }
                   printf("%d\n",b[i][a[i]]); }
            }
            scanf("%d",&n);
    return 0;}
