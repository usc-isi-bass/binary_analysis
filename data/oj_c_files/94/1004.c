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
    int a[500],n,b[500];
    b[0]=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
             scanf("%d",&a[i]);
             } 
    for(int m=1;m<=n;m++){
            b[m]=10000;
            for(int j=0;j<n;j++){
                    if(a[j]%2==1&&a[j]>b[m-1]&&a[j]<b[m])
                      b[m]=a[j];
                    }
            if(m==1)
              printf("%d",b[m]);
            else if(b[m]!=10000)
              printf(",%d",b[m]);
            }
    return 0;
}