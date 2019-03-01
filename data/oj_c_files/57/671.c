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
    int i,l,n;
    char s[200];
    
    scanf("%d\n",&n);

    for(i=1;i<=n;i++)
    {
       char st[200]={'\0'};
       
       gets(s);
       l=strlen(s);
       if((s[l-1]=='r')&&(s[l-2]=='e'))
         strncpy(st,s,l-2);
       else if((s[l-1]=='y')&&(s[l-2]=='l'))
         strncpy(st,s,l-2);
       else if((s[l-1]=='g')&&(s[l-2]=='n')&&(s[l-3]=='i'))\
         strncpy(st,s,l-3);
       puts(st);                
    }
    
    return 0;
}