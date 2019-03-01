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

//  ???????


int main()
{
    char str[50];
    cin.getline(str,50);
    for (int i=1;i<50;i++)
    {
        if (str[i]==' ')
        {
            while (str[i+1]==' ')
            {
                for (int j=i+1;j<50;j++)
                    str[j]=str[j+1];
            }
        }
    }
    cout<<str;
    return 0;
}