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

main()
{
    char c2[101];
    int i,j,n;
    for(;;)
    {
    scanf("%s",c2);
    if(c2[0]=='\n')break;
    printf("%s\n",c2);
    for(i=0,n=0;c2[i]!='\0';i++)
    {
        if(c2[i]=='(') n=i;
        //else if(c2[i]!=')'&&c2[i]!='(') c2[i]='a';
    }
    for(i=n;i>=0;i--)
    {
        if(c2[i]=='(')
           {
               for(j=i+1;c2[j]!='\0';j++)
               {
                 if(c2[j]==')')
                 {
                     c2[j]='a';c2[i]='a';break;
                 }
               }
           }
    }
    for(i=0;c2[i]!='\0';i++)
    {
        if(c2[i]=='(')printf("$");
        else if(c2[i]==')')printf("?");
        else printf(" ");
    }
    printf("\n");
    c2[0]='\n';
    }
}
