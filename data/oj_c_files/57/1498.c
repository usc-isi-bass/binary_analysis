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
    char word[50][50],t1,t2;
    int n,i,l;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s",word[i]);
    for(i=0;i<n;i++)
    {
        l=strlen(word[i]);
        if(word[i][l-1]=='r'&&word[i][l-2]=='e')
        {    
            word[i][l-1]='\0';
            word[i][l-2]='\0';
        }
        else if(word[i][l-1]=='y'&&word[i][l-2]=='l')
        {    
            word[i][l-1]='\0';
            word[i][l-2]='\0';
        }
        else if(word[i][l-1]=='g'&&word[i][l-2]=='n'&&word[i][l-3]=='i')
        {
            word[i][l-1]='\0';
            word[i][l-2]='\0';
            word[i][l-3]='\0';
        }
        printf("%s\n",word[i]);
    }
    return(0);
}
