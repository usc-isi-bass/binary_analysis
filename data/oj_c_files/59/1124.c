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

/* Name        : ????
 * Version     : 1.0
 * Date        : 2013-01-11
 * New         : 
 * Description : 
 * State       : Design
 */
int main()
{
    int N=0,D=0,Sum=0;
    char Room[100][101]={0};
    cin>>N;
    for (int i=0;i<N;i++)
        for (int j=0;j<N;j++) cin>>Room[i][j];
    cin>>D;
    for (int d=1;d<D;d++)
    {
        for (int i=0;i<N;i++)
            for (int j=0;j<N;j++)
                if (Room[i][j]=='@')
                {
                    if (j>0  &&Room[i][j-1]=='.') Room[i][j-1]='&';
                    if (j<N-1&&Room[i][j+1]=='.') Room[i][j+1]='&';
                    if (i>0  &&Room[i-1][j]=='.') Room[i-1][j]='&';
                    if (i<N-1&&Room[i+1][j]=='.') Room[i+1][j]='&';
                }
        for (int i=0;i<N;i++)
            for (int j=0;j<N;j++)
                if (Room[i][j]=='&') Room[i][j]='@';
    }
    for (int i=0;i<N;i++)
        for (int j=0;j<N;j++)
            if (Room[i][j]=='@'||Room[i][j]=='&') Sum++;
    cout<<Sum;
    return 0;
}
