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
    char sz[100];
    int n,en;
    scanf("%d",&n);
    for(int i=0;i<=n;i++)
    {
            gets(sz);
            en=strlen(sz);
            switch(sz[en-1])
            {
                            case 'g':
                                 for(int j=0;j<en-4;j++)
                                 printf("%c",sz[j]);
                                 printf("%c\n",sz[en-4]);
                                 break;
                             case 'r':
                                 for(int j=0;j<en-3;j++)
                                 printf("%c",sz[j]);
                                 printf("%c\n",sz[en-3]);
                                 break;
                             case 'y':
                                 for(int j=0;j<en-3;j++)
                                 printf("%c",sz[j]);
                                 printf("%c\n",sz[en-3]);
                                 break;
            }
    }scanf("%d",&n);
            return 0;
}
