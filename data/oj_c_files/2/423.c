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

int a[26][1000];
int ai[26];
void func()
{
    int k,i,len;
    char str[27];
    scanf("%d %s",&k,str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        a[str[i]-'A'][ai[str[i]-'A']]=k;
        ai[str[i]-'A']++;
    }
}
int main()
{
    memset(a,0,sizeof(a));
    memset(ai,0,sizeof(ai));
    int n,i,i0,max=0;
    scanf("%d",&n);
    while(n--)
    func();
    for(i=0;i<26;i++)
    {
        if(ai[i]>max)
        {max=ai[i];
        i0=i;}
    }
    printf("%c\n",i0+'A');
    printf("%d\n",max);
    for(i=0;i<ai[i0];i++)
    printf("%d\n",a[i0][i]);
}
