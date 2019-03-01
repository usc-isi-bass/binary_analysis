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
    int hang,lie,a[100][100]={0};
    cin>>hang>>lie;
    int i,j,k;
    for(i=0;i<hang;i++)
    {
        for(j=0;j<lie;j++)
            cin>>*(*(a+i)+j);
    }
    for(k=0;k<(hang+lie-1);k++)
    {
        if(k<lie)
        {
            for(i=0;i<hang&&(k-i)>-1;i++)
            cout<<*(*(a+i)+k-i)<<endl;
        }
        else
        {
            for(i=(k-lie+1);i<hang&&(k-i)>-1;i++)
            cout<<*(*(a+i)+k-i)<<endl;
        }
    }
    return 0;
}

    
