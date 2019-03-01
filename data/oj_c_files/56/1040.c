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

int main(int argc, char* argv[]){
int i;
char n[5]={0};
scanf("%s",n);
for(i=4;i>=0;i--)
{
if(n[i]!='0'&&n[i]!='\0')
printf("%c",n[i]);
}
return 0;
}
