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
    char a[1000],b[100],c[100];
    int lenb,lena,len;
    int i=0,j,k,flag;
    gets(c);
    scanf("%s",a);
    scanf("%s",b);
    len=strlen(c);
    lena=strlen(a);
    lenb=strlen(b);
    for(i=0;i<len;++i)
        if(c[i]==a[0])
        {
            flag=1;
            for(j=0;j<lena && i+j<len;++j)
                if(a[j]!=c[i+j])
                {
                    flag=0;
                    break;
                }
            if(flag)
            {
                printf("%s",b);
                i+=lena;
                break;
            }
            else
                printf("%c",c[i]);
        }
        else
            printf("%c",c[i]);
    printf("%s",c+i);
    return 0;
}
