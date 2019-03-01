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





int mystrcmp(char* str1,char* str2,int lens)
{
    for(int i=0;i<lens;i++)
            if(*(str1+i)!=*(str2+i))return 0;
    return 1;
}

int main()
{
    char big[50],small[50];
    scanf("%s %s",small,big);
    int l=strlen(small);
    for(int k=0;k<strlen(big)-l+1;k++)
            if(mystrcmp(big+k,small,l))
            {
                printf("%d\n",k);
                return 0;
            }

    printf("String Not Found");      
      
}