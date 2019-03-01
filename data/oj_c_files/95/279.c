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

int chance(char d[])
{
    int lend, i;
    lend = strlen(d);
    for(i=0;i<lend;i++)
    {
        if(d[i]<123&&d[i]>96)
        {
            d[i]=d[i]-32;
        }
    }
}
int main()
{
    char a[80], b[80];
    int lena, lenb;
    gets(a);
    gets(b);
    chance(a);
    chance(b);
    if(strcmp(a, b)==0)
    cout<<"="<<endl;
    if(strcmp(a, b)>0)
    cout<<">"<<endl;
    if(strcmp(a, b)<0)
    cout<<"<"<<endl;
    return 0;
}
