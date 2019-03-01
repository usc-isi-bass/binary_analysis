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
char sb[1000]={'\0'};
gets(sb);
for(int i=0;sb[i]!='\0';i++){
if(sb[i]!=' ')
printf("%c",sb[i]);
else if(sb[i]==' '&&sb[i+1]!=' ')
printf(" ");
}
return 0;
}
