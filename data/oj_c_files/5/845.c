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
    double z;
    int i,j,a,b,c,d,m,n;
    scanf("%lf",&z);
    char zfc[501];
    scanf("%s",zfc);
    char bjc[501];
    scanf("%s",bjc);
    i=0;
    j=0;
    c=0;
    d=0;
    n=0;
    while(zfc[i]!='\0'){i++;}
    while(bjc[j]!='\0'){j++;}
    for(a=0;zfc[a]!='\0';a++){if(zfc[a]=='A'||zfc[a]=='T'||zfc[a]=='C'||zfc[a]=='G'){c++;}}
    for(b=0;bjc[b]!='\0';b++){if(bjc[b]=='A'||bjc[b]=='T'||bjc[b]=='C'||bjc[b]=='G'){d++;}}
    if(i==j&&c==i&&d==i){for(m=0;m<i;m++){if(zfc[m]==bjc[m]){n++;}}
    if((1.0*n/i)>z){printf("yes");}else{printf("no");}
}
else printf("error");
return 0;
}

