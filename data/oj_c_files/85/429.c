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
int i,k,n,q,w;
char a[100][21];
scanf("%d",&n);
for(i=0;i<n;i++){
scanf("%s",a[i]);}
for(i=0;i<n;i++){
q=strlen(a[i]);
w=0;
for(k=0;k<q;k++){
if(k==0&&(a[i][k]==95||(a[i][k]>=97&&a[i][k]<=122)||(a[i][k]>=65&&a[i][k]<=90))){w++;}
if(k!=0&&(a[i][k]==95||(a[i][k]>=97&&a[i][k]<=122)||(a[i][k]>=48&&a[i][k]<=57)||(a[i][k]>=65&&a[i][k]<=90))){w++;}
}
if(w==q){printf("yes\n");}
else{printf("no\n");}
}
return 0;
}