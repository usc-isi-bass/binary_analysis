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
    char str[1000],a[1000];
    gets(str);
    int i,n=1,j=0;
    int b[1000];
    for(i=0;str[i]!='\0';i++)
    {
    if(str[i]>'Z')
    str[i]=str[i]-32;
    }
    for(i=0;str[i]!='\0';i++)
{
    if(str[i+1]==str[i])
    n++;
    else
    {
    a[j]=str[i]; 
    b[j]=n;
    j++;
    n=1;
    }
}
    for(i=0;i<j;i++)
    printf("(%c,%d)",a[i],b[i]);
return 0;
}
    