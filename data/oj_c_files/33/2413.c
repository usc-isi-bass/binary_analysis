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
int n,i,j;
char a[256];
char N[1000];
gets(N);
n=atoi(N);
for(j=0;j<n;j++){
gets(a);
int l=strlen(a);
for(i=0;i<l;i++){
if(a[i]=='A'){
a[i]='T';
}else if(a[i]=='T'){
a[i]='A';
}else if(a[i]=='C'){
a[i]='G';
}else if(a[i]=='G'){
a[i]='C';
}
}
puts(a);
}
return 0;
}