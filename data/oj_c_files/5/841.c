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
    double k;
    int N=1;
    char kk[100];
    gets(kk);
    k=atof(kk);
    char aa[10000];
    gets(aa);
    char bb[10000];
    gets(bb);
    int na,nb;
    na=strlen(aa);
    nb=strlen(bb);
    int n=0;
    if(na!=nb){N=0;}else{
        for(int i=0;i<na;i++){
            if(aa[i]==bb[i]&&(aa[i]=='A'||aa[i]=='T'||aa[i]=='C'||aa[i]=='G')){
                n++;
            }else if(aa[i]=='a'||aa[i]=='t'||aa[i]=='c'||aa[i]=='g'||bb[i]=='a'||bb[i]=='t'||bb[i]=='c'||bb[i]=='g'){
                N=0;
            }
        }
    }
    if(N==0){printf("error");}else{
        double p;
        p=1.0*n/na;
        if(p>k){printf("yes");}else{
            printf("no");
        }
    }
    return 0;
}
