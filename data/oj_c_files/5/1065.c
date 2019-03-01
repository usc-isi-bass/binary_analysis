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
int i,k,l,s=0,p=0;
double n,m;
char a[600],b[600];
scanf("%lf",&n);
scanf("%s%s",&a,&b);
k=strlen(a),l=strlen(b);
for(i=0;i<k;i++){
    if((a[i]!='A')&&(a[i]!='T')&&(a[i]!='C')&&(a[i]!='G')){
        p++;
    }
}
for(i=0;i<k;i++){
    if(a[i]==b[i]){
        s++;
    }
}
m=1.0*s/k;
if((k==l)&&(p==0)&&(m>n)){
    printf("yes");
}
else if((k==l)&&(p==0)&&(m<=n)){
    printf("no");
}
else{
    printf("error");
}
return 0;
}
