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
int n;
scanf("%d",&n);
char sz[400],*ps;
for(int i=0;i<=n;i++){
gets(sz);
for(ps=sz;*ps!='\0';ps++){
if(*ps=='A'){
*ps='T';
}else if(*ps=='C'){
*ps='G';
}else if(*ps=='T'){
*ps='A';
}else if(*ps=='G'){
*ps='C';
}
}
printf("%s\n",sz);
}
}