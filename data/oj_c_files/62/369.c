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

char t[200];
int main(){
int s,i,j,n,l;
gets(t);
l=strlen(t);
for(i=0;i<200;i++)
for(j=0;j<l;j++){
if(t[j]==' '&&t[j+1]==' '){
for(s=j;s<l;s++)
t[s]=t[s+1];
}
}
puts(t);
return 0;
}