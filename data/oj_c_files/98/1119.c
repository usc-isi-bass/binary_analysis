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
    int n, count=0;
    char word[30];
    cin>>n;
    cin>>word;
    cout<<word;
    count=(int)strlen(word);
    n--;
    while (n--)
    {
        cin>>word;
        if (count+strlen(word)<80)
        {
            cout<<" "<<word;
            count=count+(int)strlen(word)+1;
            continue;
        }
        if (count+strlen(word)>=80)
        {
            cout<<endl<<word;
            count=(int)strlen(word);
        }
    }
    
    return 0;
}