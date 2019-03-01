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
    char string1[100],string2[100];
    char str[100][100];
    int i=0,j=0,k=0;
    char c;
    gets(string1);
    for(i=0;(c=string1[i])!='\0';i++)
    {
           if(c!=' ')
         {
            str[j][k]=string1[i];
            k++;
         }
         else if(c==' ')
         {
            j++;
            k=0;
         }

    }
    strcpy(string2,"");
    for(i=j;i>0;i--)
    {
        strcat(string2,str[i]);
        strcat(string2, " ");
    }
    strcat(string2,str[0]);
    printf("%s",string2);
}
