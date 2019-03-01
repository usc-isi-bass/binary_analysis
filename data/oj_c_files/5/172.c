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
double c,w=0,n=0;
char x[600],y[600];
scanf("%lf",&c);
getchar();
gets(x);
gets(y);
if (strlen(x)==strlen(y)){
for (int j=0;j<strlen(x);j++){
    if ((x[j]!='A'&&x[j]!='T'&&x[j]!='G'&&x[j]!='C')||(y[j]!='A'&&y[j]!='T'&&y[j]!='G'&&y[j]!='C')){
                  printf("error");
                  n=1;
                  break;
    }
    if(x[j]==y[j]){
          w++;
    }
 }
}
else {
     printf("error");
     n=1;
}
if (n==0){
    w=w/strlen(x);
    if (c<w){
              printf("yes");
    }
    else {
              printf("no");
    }
}
return 0;
}