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
    char string[1000];
    gets(string);
    int l,i,j,count;
    l=strlen(string);
    for(i=0;i<l;i++)
    {      
           if(string[i]<'A'||string[i]>'Z')
           string[i]=string[i]-'a'+'A';
    }
    for(i=0;i<l;i++)
    {
                    count=0;
                    for(j=i;j<l;j++)
                    {
                                    if(string[i]==string[j])
                                    count++;
                                    else
                                    break;
                    }
                    if(count!=0)
                    {
                    printf("(%c,%d)",string[i],count);
                    i=i+count-1;
                    }
    }
    getchar();
    getchar();
}  