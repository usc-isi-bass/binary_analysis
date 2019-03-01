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


void find(char *str)
{
    int i, j, k, len, count=0;
    int num[26]={0};

    len=strlen(str);
    for(i=0; i<len; i++)
    {
        *(num+count)=(int)*(str+i);
        count++;

        if(count>1)
        {
            for(j=0; j<count-1; j++)
            {
                if(*(num+j)==*(num+count-1))
                {
                    for(k=j; k<count-2; k++)
                    {
                        *(num+k)=*(num+k+1);
                    }
                    count-=2;
                }
            }
        }
    }

    if(count==0)
    {
        printf("no\n");
    }else{
        printf("%c\n", *num);
    }
}

int main()
{
    int n, i;
    char str[100000];

    scanf("%d\n", &n);
    for(i=0; i<n; i++)
    {
        gets(str);
        find(str);
    }

    return 0;
}