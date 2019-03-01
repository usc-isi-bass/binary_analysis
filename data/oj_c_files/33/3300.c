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
char sz[n][300],zfc[n][300];

for(k=0;k<n;k++){
scanf("%s\n",sz[k]);
for(i=0;sz[k][i]!='\0';i++){
if(sz[k][i]=='A'){zfc[k][i]='T';}
else if(sz[k][i]=='T'){zfc[k][i]='A';}
else if(sz[k][i]=='G'){zfc[k][i]='C';}
else {zfc[k][i]='G';}
}
printf("%s\n",zfc[k]);
}
return 0;
}

