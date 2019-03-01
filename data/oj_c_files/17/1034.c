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
    char str[1001];int n;
    while(~scanf("%s",str))
    {
        n=strlen(str);
        printf("%s",str);
        printf("\n");
        for(int i=1;i<n;i++)
        {
            if(str[i]==')')  
            {
                for(int j=i-1;j>=0;j--) 
                {if(str[j]=='(') {str[i]=' ';str[j]=' ';break;}}
            }
        }
        for(int i=0;i<n;i++)
        {
            if(str[i]=='(') str[i]='$';
            else if(str[i]==')') str[i]='?';
            else str[i]=' ';
        }
        printf("%s",str);
        printf("\n");
    }
}