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

int main()
{
int n,i,j,e;
char w[1000][256];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s",w[i]);
e=strlen(w[i]);
for(j=0;j<e;j++){
if(w[i][j]=='A'){
printf("T");
}else if(w[i][j]=='T'){
printf("A");
}else if(w[i][j]=='C'){
printf("G");
}else{
printf("C");
}
}
printf("\n");
}
return 0;
}
