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
int n,i,k;
scanf("%d\n",&n);
char z[n][N];
for(i=0;i<n;i++){
scanf("%s\n",z[i]);
}
for(k=0;k<n;k++){
i=0;
while(z[k][i]!='\0'){
if(z[k][i]=='T'){z[k][i]='A';}
else if(z[k][i]=='A'){z[k][i]='T';}
else if(z[k][i]=='G'){z[k][i]='C';}
else if(z[k][i]=='C'){z[k][i]='G';}
i++;}
}
for(i=0;i<n;i++){
puts(z[i]);}
return 0;
}