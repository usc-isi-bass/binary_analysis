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
    char str[300];
    char sub[300];
    char rep[300];
    int i,j,lenstr,lensub,judge,state=0;
    fgets(str,300,stdin);
    fgets(sub,300,stdin);
    fgets(rep,300,stdin);
    lenstr=strlen(str)-1;
    lensub=strlen(sub)-1;
    for(i=0;i<=lenstr-lensub;i++)
    {
        judge=0;
        for(j=0;j<lensub;j++)
        {
            judge=judge+(str[i+j]-sub[j])*(str[i+j]-sub[j]);

        }
        if(judge==0)
            {state=1;
            break;}
    }
    if(state==1)
    {   for(j=0;j<=i-1;j++)
            printf("%c",str[j]);
        for(j=0;rep[j]!='\n';j++)
            printf("%c",rep[j]);
        for(j=i+lensub;j<=lenstr-1;j++)
            printf("%c",str[j]);
    }
    else
    {
        for(j=0;j<lenstr;j++)
            printf("%c",str[j]);
    }
    return 0;
}
