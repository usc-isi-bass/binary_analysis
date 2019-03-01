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

main(){
int i,j,k;
char a[31];
for(i=0;i<31;i++)
a[i]='\0';
gets(a);
k=strlen(a);
for(i=0;i<k;i++){
for(j=i;j<k;j++){
if(a[j]>='0'&&a[j]<='9'&&a[j-1]!='-'){
printf("%c",a[j]);
a[j]='*';
if(a[j+1]<'0'||a[j+1]>'9'){
printf("\n");
break;
}
}
}
}
}