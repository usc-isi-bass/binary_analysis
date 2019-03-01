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

int i,j,k,m,n,l,r;
int flag=1;
int minleft,maxright;
int b[20000];
int main(){
    minleft=50001;
    maxright=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&l);
        scanf("%d",&r);
        if(l<=minleft)minleft=l;
        if(r>=maxright)maxright=r;
        for(j=l;j<r;j++){
            b[j]=1;
        }
    }
    for(k=minleft;k<=maxright-1;k++)
    if(b[k]==0){flag=0;break;}
    if(flag==0)printf("no\n");
    else printf("%d %d\n",minleft,maxright);
    return 0;
}
