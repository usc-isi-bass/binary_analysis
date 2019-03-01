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
{int m,n,i,j;
 int a[301][301];
 for(j=1;j<301;j++){
     a[1][j]=1;
     for(i=2;i<301;i++){
         a[i][j]=(a[i-1][j]+j-1)%i+1;
     }
 }
 for(i=0;i<1000;i++){
 scanf("%d%d",&n,&m);
 if(m==0&&n==0){
     break;
 }else{
    printf("%d\n",a[n][m]);}}
     return 0;
}
