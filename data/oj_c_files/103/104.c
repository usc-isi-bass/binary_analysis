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
    int n[27];
    char s[1001];
    gets(s);
    int i,j,k;
    int c=1;
    int l=strlen(s);
    for(i=0;i<l;i++)
    {
                    if(s[i]<='z'&&s[i]>='a')
                    s[i]=s[i]-'a'+'A';
    }
    for(i=1;i<l;i++)
    {
                    if(s[i]==s[i-1])
                    {c++;}
                    else
                    {
                        printf("(%c,%d)",s[i-1],c);
                        c=1;
                    }
    }
    printf("(%c,%d)",s[l-1],c);
    getchar();
    getchar();
}