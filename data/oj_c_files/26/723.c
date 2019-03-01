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


int main(int argc, char* argv[])
{
char a[100];
int n,i;
gets(a);
n=strlen(a);
if(a[0]!=' ')printf("%c",a[0]);
for(i=1;i<n;i++){
if(a[i]!=' ')printf("%c",a[i]);
else{if(a[i-1]!=' ')printf("%c",a[i]);}}



return 0;
}