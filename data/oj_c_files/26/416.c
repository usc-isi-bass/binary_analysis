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
    char s[102],t;
    gets(s);
    int i,j,k,a,b,c;
    b=strlen(s);
    int n=0;
    for(k=0;k<b;k++)
    {
    for(i=2;i<b;i++)
    {
                     if(s[i-1]==' ')
                     {
                             if(s[i]==' ')
                             {
                                        for(j=i;j<b-1;j++)
                                        {
                                                          s[j]=s[j+1];
                                        }
                                                           n++;
                                                          s[b-n]='\0'; 
                                        
                             }
                     }
    }
    }
    printf("%s",s);
    getchar();
    }
