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
    int leap=0,i,j;
    char s[301];
    int b[60]={0};
    char z[]="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
         if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z')
         for(j=0;j<52;j++)
         {
                          leap=1;
             if(s[i]==z[j])
             b[j]++;
         }
    }
    if(leap==0)
    printf("No");
    else
    {
       for(i=0;i<52;i++)
       {
        if(b[i]!=0)
        printf("%c=%d\n",z[i],b[i]);
       }
    }
}