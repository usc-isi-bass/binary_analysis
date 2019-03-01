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

/*??
 ????row?col??????array????array[0][0]?????????????????????????
 ????
 ????????????????row?col?
 ???row??????col???????????????
 ??????row?col??0<row<100, 0<col<100?
 ????
 ????????????????????
 ????
 3 4
 1 2  4  7
 3 5  8 10
 6 9 11 12
 ????
 1
 2
 3
 4
 5
 6
 7
 8
 9
 10
 11
 12
 */
int main()
{
    int row=0,col=0;
    cin>>row>>col;
    int a[100][100];
    memset(a,'0',sizeof(a));
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    int (*p)[100]=a;
    for(int i=0;i<row+col-1;i++)
    {
        if(i<col)
        {
            for(int j=0;j<=row;j++)
            {
                if(i-j<col&&j<row&&j>=0&&i-j>=0)
                {cout<<*(*(p+j)+i-j)<<endl;}
            }
        }
        else
        {
            for(int j=1;j<row;j++)
            {
                if(i-j<col&&j<row&&i-j>=0&&j>=0)
                {cout<<*(*(p+j)+i-j)<<endl;}
            }
        }
    }
    return 0;
}