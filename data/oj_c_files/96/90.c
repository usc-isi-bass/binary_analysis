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
    char string[101];
    int i;
    scanf("%s",string);
    char a[101];
    int b=string[0]-'0';
    for(i=0;string[i+1]!='\0';i++)
    {
                                  a[i]=(b*10+string[i+1]-'0')/13+'0';
                                  b=(b*10+string[i+1]-'0')%13;
    }
    a[i]='\0';
    if(a[0]=='0')
    {
                 char c[101];
                 strcpy(c,a);
                 for(i=0;c[i+1]!='\0';i++)
                 {a[i]=c[i+1];}
                 a[i]='\0';                         
    } 
    if(string[1]=='\0')
    {
                  a[0]='0';a[1]='\0';b=string[0]-'0';
    }
    if(string[2]=='\0'&&((string[0]-'0')*10+string[1]-'0')<13)
    {
                                                              a[0]='0';
                                                              a[1]='\0';
                                                              b=(string[0]-'0')*10+string[1]-'0';
    }
    printf("%s\n",a);
    printf("%d",b);
    getchar();
    getchar();
}