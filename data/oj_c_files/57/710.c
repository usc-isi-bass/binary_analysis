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
    int x;
    scanf("%d", &x);
    char string[100][100];
    int i,n[100];
    for(i=1;i<=x;i++)
    {
                     scanf("%s", string[i]);
                     n[i]=strlen(string[i]);
    }
    for(i=1;i<=x;i++)
    {
                     if(string[i][n[i]-1]=='r'||string[i][n[i]-1]=='y')
                     {
                        string[i][n[i]-2]='\0';
                     }
                     else
                     {string[i][n[i]-3]='\0';}
                     printf("%s\n", string[i]);
    }
    return 0;
}
