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
    char s[101];
    int i,a[101],j,l;
    while((scanf("%s",s))!=EOF)
    {
        j=0;
        puts(s);
        l=strlen(s);
        for(i=0;i<l;i++)
        {
            if(s[i]=='(') a[++j]=i;
            else if(s[i]==')')
            {
                if(j)
                {
                    s[i]=' ';
                    s[a[j]]=' ';
                    j--;
                }
                else s[i]='?';
            }
            else s[i]=' ';
        }
        for(i=1;i<=j;i++) s[a[i]]='$';
        puts(s);
    }
}
