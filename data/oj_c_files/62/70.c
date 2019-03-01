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
    char string[100];
    gets(string);
    int i,j;
    int num;
    int count=0;
    num=strlen(string);
    for(i=1;i<num;i++)
    {
                    if(string[i]==' '&&string[i-1]==' ')
                    {
                                    for(j=i;j<num;j++)
                                    {
                                    string[j]=string[j+1];
                                    }
                                    count++;
                                    string[num-count]='\0';
                                    i=i-1;
                    }
                    
    }
    puts(string);                
    getchar();
    getchar();
    return 0;
    }
