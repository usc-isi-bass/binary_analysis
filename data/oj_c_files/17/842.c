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
    char str[200];
    while(scanf("%s",str)!=EOF)
    {
        int n,i,j,k;
        printf("%s\n",str); 
        n=strlen(str);
        for(i=0,k=0;i<n;i++)
        {
            if(str[i]=='(')
            {
                k=i;
            }
            if(str[i]==')'&&str[k]=='(')
            {
                str[i]=' ';
                str[k]=' ';
                i=-1;
                k=0;
            }
        }
        for(i=0;i<n;i++)
        {
            if(str[i]!='('&&str[i]!=')')
                printf(" ");
            else
            {
                if(str[i]=='(')
                    printf("$");
                else
                    printf("?");
            }
        }
        printf("\n");
    }
    }
        

        