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
    int n,i;
    scanf("%d",&n);
    for(i = 0;i < n;i++)
    {
        char input[100];
        int len,j = 0;
        scanf("%s",input);
        len = strlen(input);
        if(input[0] == '_' || (input[0]>='a' && input[0]<='z') || (input[0]>='A' && input[0]<='Z'))
        {
            for(j = 1;j < len;j++)
                 if(!(input[j] == '_' || (input[j]>='a' && input[j]<='z') || (input[j]>='A' && input[j]<='Z') || (input[j] >= '0' && input[j] <= '9')))
                    break;
        }
        if(j == len)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}