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

main()
{
char b[1001];
gets(b);
int n,i;
n=1;
for(i=0;b[i]!='\0';i++)
{
if((b[i]>='a')&&(b[i]<='z'))
b[i]=b[i]+'A'-'a';
else
b[i]=b[i];
}
if(b[1]!=b[0])
printf("(%c,%d)",b[0],n);
for(i=1;b[i]!='\0';i++)
{
if(b[i]==b[i-1])
{
n=n+1;
if((b[i]!=b[i+1])||(b[i+1]=='\0'))
{
printf("(%c,%d)",b[i],n);
n=1;
}
}
else
{
    if((b[i]!=b[i+1])||(b[i+1]=='\0'))
    printf("(%c,%d)",b[i],n);
    else
    continue;
}
}
}