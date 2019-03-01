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
    char string[200];
    gets(string);
    int n,i,j;
    n=strlen(string);
    for(i=0;i<n;i++)
    {
                    while(string[i]==' '&&string[i+1]==' ')
                    {
                                    for(j=i+1;j<n;j++)
                                    {
                                          string[j]=string[j+1];
                                    }
                    }
                    
}
    
    
    for(i=0;i<n;i++)
    {
                  
                    if(string[i]=='\0')
                    break; 
                     printf("%c", string[i]);
    }
    return 0;
}
