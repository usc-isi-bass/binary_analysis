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

int sc(char a[]);
int main(){
char a[32];
int n,i,q;
scanf("%d",&n);
for (i=0;i<n;i++){
scanf("%s",a);
q=sc(a);
printf("%s\n",a);
}
return 0;
}
int sc(char a[]){
int l;
l=strlen(a);
if ((a[l-3]=='i')&&(a[l-2]=='n')&&(a[l-1]=='g')) a[l-3]=0;
if ((a[l-2]=='e')&&(a[l-1]=='r')) a[l-2]=0;
if ((a[l-2]=='l')&&(a[l-1]=='y')) a[l-2]=0;
return 0;
}
