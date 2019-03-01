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
    int n,i;
    cin>>n;
    char word[n][81],c;
    for(i=0;i<n;i++)
    {
        cin>>word[i];
    }
    int sum=strlen(word[0]);
    cout<<word[0];
    for(i=1;i<n;i++)
    {
        if(sum+strlen(word[i])+1<=80)
        {
            if(sum!=-1) cout<<' ';
            cout<<word[i];
            sum=sum+strlen(word[i])+1;
        }
        else
        {
            cout<<endl;
            sum=-1;
            i--;
        }
    }
    return 0;
}