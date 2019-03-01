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
   char a[110];
   int i=0,j,k,l,t1,t2;
   for(;;)
   {
        a[i]=getchar();
        if(a[i]=='\n') break;
        i++;
    }
    l=i-1;
    for(i=0;i<=l;i++)
    {
        if(a[i]!=a[0])
        {
            a[i]=0;
            for(j=i;j>=0;j--)
            {
                if(a[j]==a[0])
                {a[j]=0;
                cout<<j<<" ";
                break;}
            }
            cout<<i<<endl;
        }
    }
        return 0;
}