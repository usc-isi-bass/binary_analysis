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


char str[100][100];
char s[100],t[100];
char c;

int main()
{
    int cnt=0;
    while(1)
    {
         scanf("%s",str[cnt++]);
         if(getchar()=='\n')
               break;
    }
    scanf("%s",s);
    scanf("%s",t);
    for(int i=0;i<cnt;i++)
    {
            if(strcmp(str[i],s)==0)
                   strcpy(str[i],t);
    }
    for(int i=0;i<cnt-1;i++)
            printf("%s ",str[i]);
    printf("%s\n",str[cnt-1]);
    return 0;
}
