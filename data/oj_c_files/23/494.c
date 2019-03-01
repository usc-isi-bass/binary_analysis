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
    int count=0,i,j,b[1000]={0};
    char a[1000][130],c;
    c=getchar();
    while(c>96&&c<123||c>64&&c<91)
    {
              while(c>96&&c<123||c>64&&c<91)
              {
                            a[count][b[count]]=c;
                            b[count]++;
                            c=getchar();
              }
              while(c==' ') c=getchar();
              count++;
    }     //??????,??????a 
    for (i=count-1;i>0;i--)
    {
        for (j=0;j<b[i];j++)
        {
            cout<<a[i][j];
        }
        cout<<' ';
    }
    for (j=0;j<b[0];j++) cout<<a[0][j]; //???? 
    return 0;
}
