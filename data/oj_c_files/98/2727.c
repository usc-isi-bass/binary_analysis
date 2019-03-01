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


char word[45];
int length=0;

int main()
{
    int n,i=0;
    scanf("%d",&n);
    while((i++)<n)
    {
        scanf("%s",word);
        int len=strlen(word);
        if(length+len+1<=80)
        {
            length+=len;
            if(i!=1)
            length++,
            cout<<" "<<word;
            else
            cout<<word;
        }
        else
        {
            cout<<endl<<word;
            length=len;
        }
    }
    return 0;

}

