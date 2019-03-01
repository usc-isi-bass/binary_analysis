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
char s[100],s0[100];
gets(s);
int i,k=0;
for(i=0;s[i]!='\0';i++){
 if(s[i]!=' '||(s[i]==' '&&s[i+1]!=' ')){
    s0[k]=s[i];
    k++;
 }
}
s0[k]='\0';
printf("%s",s0);
return 0;
}