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
    char a[101],c;
    char *p,*q;
    int i,l,j;
    gets(a);   c=a[0];
    p=a,q=p+1;
    
    l=strlen(a);
    for(i=0;i<l-1;i++){
        *p=*p + *(p+1);p++;}
    *p+=c;
    p=a;
    for(i=0;i<l;i++){
       printf("%c",*(p++));}
}