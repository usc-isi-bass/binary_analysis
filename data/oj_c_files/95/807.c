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

int y(int x);
main()
{
    char a[80],b[80];char m;
    gets(a);
    gets(b);
    int i,na,nb;
    for(i=0;a[i]!='\0';i++)
    {}
    na=i;
    for(i=0;b[i]!='\0';i++)
    {}
    nb=i;
    for(i=0;i<na;i++)
    {
                     if(a[i]>='A'&&a[i]<='Z')
                     a[i]+=32;
                     }
    for(i=0;i<nb;i++)
    {
                     if(b[i]>='A'&&b[i]<='Z')
                     b[i]+=32;
                     }
    if(strcmp(a,b)>0)
    m='>';
   else if(strcmp(a,b)<0)
    m='<';
    else
    m='=';
    
    printf("%c",m);
   
}
