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

int main (){
int i,j;
char a[81],b[81];
gets(a);
gets(b);
for (i=0;a[i]!='\n';i++){
if (a[i]>='a'&&a[i]<='z')
a[i]+='A'-'a';
}
for (j=0;b[j]!='\n';j++){
if (b[j]>='a'&&b[j]<='z')
b[j]+='A'-'a';
}
if (strcmp(a,b)<0)
printf("<");
else if (strcmp(a,b)>0)
printf (">");
else
printf ("=");
return 0;
}