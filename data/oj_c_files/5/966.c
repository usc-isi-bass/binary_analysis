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
    int i,l,m,k=0,p=1;
    double n;
    char str[500],tw[500];
    scanf("%lf",&n);
    scanf("%s",str);
    scanf("%s",tw);
    l=strlen(str);
    m=strlen(tw);
    if(l!=m) p=0;
    for(i=0;i<l;i++)if((str[i]!='A'&&str[i]!='T'&&str[i]!='C'&&str[i]!='G')||(tw[i]!='A'&&tw[i]!='T'&&tw[i]!='C'&&tw[i]!='G')) {
         p=0;
         break;
         }
if(p==1){
         for(i=0;i<l;i++) if(str[i]==tw[i]) k++;
         if(1.0*k/l>=n) printf("yes") ;
         else printf("no");
         }
else printf("error");
return 0;
}
