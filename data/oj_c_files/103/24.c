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
    char s[1000];
    scanf("%s",s);
    int l=strlen(s);
    int a=s[0],n=1;
    for(int i=1;i<l;i++)
    {
            if(s[i]==a||s[i]==a+32||s[i]==a-32)
            n++;
            else
            {
                if(a>'Z')
                a=a-'a'+'A';
                printf("(%c,%d)",a,n);
                a=s[i];
                n=1;
            }
    }
    if(a>'Z')
    a=a-'a'+'A';
    printf("(%c,%d)",a,n);
    getchar();
    getchar();
}
