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
    int i, len;
    char str[200];
    cin.getline(str,200);
    len=strlen(str);
    cout<<str[0];
    for(i=1;i<=len-1;i++)
    {
        if(str[i]!=' ' && str[i-1]==' ')
            cout<<" "<<str[i];
        else if(str[i]!=' ' && str[i-1]!=' ')
            cout<<str[i];                 
    }
    int x;cin>>x;
    return 0;
    
    
    
    
    }
