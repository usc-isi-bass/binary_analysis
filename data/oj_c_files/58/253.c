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
    int i,j,n,x=1;
    scanf("%d",&n);
    getchar();
    char s[n][80];
    for(i=0;i<n;i++)
    {
                    x=1;
                    gets(s[i]);
                    if((s[i][0]>='a'&&s[i][0]<='z')||(s[i][0]>='A'&&s[i][0]<='Z')||s[i][0]=='_')
                    {
                               for (j=1;j<strlen(s[i]);j++)
                               if((s[i][j]>='a'&&s[i][j]<='z')||(s[i][j]>='A'&&s[i][j]<='Z')||s[i][j]=='_'||(s[i][j]>='0'&&s[i][j]<='9'))
                                         x=1;
                               else
                               {
                                   x=0;
                                   break;
                               }
                    }
                    else
                    {
                        x=0;
                    
                    }
                    printf("%d\n",x);
    }
}

