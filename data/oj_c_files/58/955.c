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
    int i,j,n;
    char s[81];
    scanf("%d\n",&n);
    for(i=0;i<n;i++)
    {
        gets(s);
        for(j=0;s[j]!='\0';j++)
        {
            if((s[j]=='_')||(s[j]>='A'&&s[j]<='Z')||(s[j]>='a'&&s[j]<='z')||(s[j]>='0'&&s[j]<='9'&&j>0))
            {;}
            else
            break;
        }
        if(s[j])
        printf("0\n");
        else
        printf("1\n");
    }
}
