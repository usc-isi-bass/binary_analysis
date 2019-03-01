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
   int i,j,l,k,o=0;
   char a[10000],b[10000]={' '};
   gets(a);
   l=strlen(a);
   b[o++]=a[0];
   for(i=1;i<l;i++){
        if(a[i]!=' '||a[i]==' '&&a[i-1]!=' ') b[o++]=a[i];
        }
    for(i=0;i<o;i++) printf("%c",b[i]);
    
    
    scanf("%d",&i);
    return 0;
    }
