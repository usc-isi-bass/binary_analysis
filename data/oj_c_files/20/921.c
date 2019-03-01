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

int posi(char str[])
{
    int i,k=0;
    for(i=1;i<strlen(str);i++)
    {
                              if(str[i]>str[k])k=i;
    }
    return k+1;
}
int main()
{
    char str[20],substr[4];
    while(scanf("%s%s",str,substr)!=EOF)
    {
                                        int k,i,j,l=strlen(str);
                                        k=posi(str);
                                        for(i=l;i>=k;i--)
                                        {
                                                         str[i+3]=str[i];
                                        }
                                        for(i=0;i<3;i++)
                                        {
                                                        str[k+i]=substr[i];
                                        }
    printf("%s\n",str);
    }
}
                                         
