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
double m,sz[100],fm[100],a[100],result[100];
int k,i;
scanf("%lf",&m);
for(k=0;k<m;k++) scanf("%lf",&sz[k]);
for(k=0;k<m;k++){if(sz[k]==1) result[k]=2.000;
                 else {for(i=1;i<=sz[k]+1;i++){fm[1]=1;
                               fm[2]=2;
                               fm[i]=fm[i-1]+fm[i-2];}
                 for(i=1;i<=sz[k];i++) a[i]=fm[i+1]/fm[i];
                 result[k]=0; 
                 for(i=1;i<=sz[k];i++) result[k]+=a[i];
                 } }
for(k=0;k<m;k++) printf("%.3lf\n",result[k]);
return 0;
}