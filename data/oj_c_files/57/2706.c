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

char s[100];
int l;
int n;
int main()
{
    int i;
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        l=strlen(gets(s));
            if(l>=3 && s[l-3]=='i' && s[l-2]=='n' && s[l-1]=='g')
            {
                s[l-3]='\0';
            }
            else if(l>=2 && s[l-2]=='e' && s[l-1]=='r')
            {
                s[l-2]='\0';
            }
            else if(l>=2 && s[l-2]=='l' && s[l-1]=='y')
            {
                s[l-2]=0;
            }
            puts(s);
        }
        return 0;
    }
        
