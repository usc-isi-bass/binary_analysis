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
    void str(char a[100]);
    int n,i;
    char b[100],c[100];
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%s",b);
        str(b);
        printf("%s\n",b);
    }
}
void str(char a[100])
{
    int k,t;
    k=strlen(a);
    if(a[k-2]=='e'&&a[k-1]=='r')
    a[k-2]='\0';
    else if(a[k-2]=='l'&&a[k-1]=='y')
    a[k-2]='\0';
    else if(a[k-2]=='n'&&a[k-1]=='g'&&a[k-3]=='i')
    a[k-3]='\0';
}