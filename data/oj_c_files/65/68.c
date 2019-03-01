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
    int n,i,a[100],b[100],c=0,d=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
    
    scanf("%d %d",&a[i],&b[i]);
    if(a[i]==0&&b[i]==1){
    c++;
}else if(a[i]==1&&b[i]==2){
    c++;
}else if(a[i]==2&&b[i]==0){
    c++;
}else if(a[i]==b[i]){
continue;
}else{
     d++;
}

}


if(c>d){
        printf("A");
        }
if(c<d){
        printf("B");
        }
if(c==d){
        printf("Tie");
        }

return 0;
} 