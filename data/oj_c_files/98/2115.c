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

int WordLen(char *a)
{
    int i;
    for (i=0;a[i];i++);
    return i;
}
main()
{
    int i,num,space=80;
    char word[41];
    cin>>num;
    for (i=0;i<num;i++)
    {
        cin>>word;
        if (space==80)
        {
            cout<<word;
            space-=WordLen(word);
        }
        else if (space>=WordLen(word)+1)
        {
            cout<<' '<<word;
            space-=WordLen(word)+1;
        }
        else 
        {
            cout<<endl<<word;
            space=80-WordLen(word);
        }
    }
    
}
        
