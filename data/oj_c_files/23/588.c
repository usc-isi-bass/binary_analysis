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
    char words[100][100],gt;
    int m;
    for(int i=0;i<100;i++)
    {
        cin>>words[i];
        gt=getchar();
        if(gt=='\n')
        {
            m=i;
            break;
        }
    }
    for(int i=m;i>0;i--)cout<<words[i]<<' ';
    cout<<words[0];
    return 0;
}
