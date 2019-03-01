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
    int n,l,i;
    char a[33];
    cin>>n;
    while(n--)
    {
        cin>>a;
        l=strlen(a);
        if((a[l-1]=='r')||(a[l-1]=='y'))
        {
            for(i=0;i<l-2;i++)
                cout<<a[i];
        }
        if(a[l-1]=='g')
        {
           for(i=0;i<l-3;i++)
               cout<<a[i];
        }
        cout<<endl;
    }
    return 0;
}
