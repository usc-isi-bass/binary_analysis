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
    char a[256],b[256],c[256];
    gets(a);
    gets(b);
    gets(c);
    int n=strlen(a);
    int m=strlen(b);
    int i,j;
    for(int i=0;i<n;i++)
    {
        if(a[i]==b[0])
        {
            for(j=1;j<m;j++)
            {
                if(a[i+j]!=b[j])
                break;
            }
            if(j==m)
            {
                for(j=0;j<m;j++)
                {
                    a[i+j]=c[j];
                }
                break;
            }
        }
    }
    puts(a);
}
