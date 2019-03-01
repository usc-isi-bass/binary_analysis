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
    char word[1000][40];
    int number,count=0,i;
    scanf("%d",&number);
    for(i=0;i<number;i++)scanf("%s",word[i]);
    for(i=0;i<number;i++)
    {
        if(count+strlen(word[i])+1<=80)
        {
            if(i==0)
            {
                printf("%s",word[i]);
                count+=strlen(word[i]);
            }
            else
            {
                printf(" %s",word[i]);
                count+=strlen(word[i])+1;
            }
        }
        else
        {
            printf("\n%s",word[i]);
            count=strlen(word[i]);
        }
    }
    return 0;
}
