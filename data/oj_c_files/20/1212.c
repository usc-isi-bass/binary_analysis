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


void main() 
{
    char str[14],substr[4];
    int i,n,k=0;
    while(scanf("%s%s",str,substr)!=EOF)
    {n=strlen(str);
    for(i=0;i<n;i++)
    if(str[i]>str[k]) k=i;
    for(i=n;i>k;i--)
    str[i+3]=str[i]; 
    for(i=1;i<4;i++)
    str[k+i]=substr[i-1];
    puts(str);}
}