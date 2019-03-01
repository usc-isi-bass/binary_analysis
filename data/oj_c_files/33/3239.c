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
    int n;
    char str[300];
    cin>>n;
    while(n --)
    {
            cin>>str;
            int len = strlen(str);
            for(int i = 0; i < len; i ++)
            {
                    if(str[i]== 'A') str[i] = 'T';
                    else if(str[i]== 'T') str[i] = 'A';
                    else if(str[i]== 'C') str[i] = 'G';
                    else if(str[i]== 'G') str[i] = 'C';
                    cout<<str[i];
            }           
            cout<<endl;
    }
    return 0;
}

