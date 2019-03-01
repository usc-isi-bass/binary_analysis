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
     char a[1000];
     char *p=a;
     int len;

     gets(a);
     len=strlen(a);

     while (p<a+len)
     if ((*p==' ')&&(*(p+1)==' ')) p++;
     else {cout<<*p; p++;}
     return 0;
}