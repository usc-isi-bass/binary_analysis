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
    int i=0,j=0,k,t=0,pan=0;
    char a[201][100],b[100];
    cin.getline(b,100,'\n');
    while(b[j]!='\0')
    {
        while (b[j]!=' ')
        {
            a[i][t]=b[j];
            j++;
            t++;
            if(b[j]=='\0')
            {
                pan=1;
                break;
            }
        }
        if(pan==1)
            break;
        i++;
        j++;
        t=0;
    }
    for(k=i;k>0;k--)
    {
        j=0;
        while (a[k][j]!='\0')
        {
            cout<<a[k][j];
            j++;
        }
        cout<<' ';
    }
    j=0;
    while(a[0][j]!='\0')
    {
        cout<<a[0][j];
        j++;
    }
}