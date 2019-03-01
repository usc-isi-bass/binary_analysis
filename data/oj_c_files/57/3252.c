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
    int n,i;
    scanf("%d",&n);
    char a[33];
    for(i=0;i<n;i++){
        scanf("%s",a);
      int l=strlen(a);
     if(a[l-1]=='r'||a[l-1]=='y'){
         a[l-2]=0;
     }
     else if(a[l-1]=='g'){
         a[l-3]=0;
     }
          printf("\n%s",a);
      }
    return 0;
}


