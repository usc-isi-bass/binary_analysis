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
    int a[100][100];
    int m,n,i,b,c,d;
    scanf("%d %d",&m,&n);
    for(i=1;i<=m;i++){
        for(b=1;b<=n;b++){
            scanf("%d",&a[i][b]);
        }
    }
    for(i=1;i<=m;i++){
        for(b=1;b<=n;b++){
            if((a[i][b]>=a[i][b-1])&&
				(a[i][b]>=a[i][b+1])&&
				(a[i][b]>=a[i-1][b])&&
				(a[i][b]>=a[i+1][b])){
				c=i-1;
				d=b-1;
				printf("%d %d\n",c,d);
			}
        }
    }
    return 0;
}

 
 
 
