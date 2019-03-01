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
    int row,col;
    cin>>row>>col;
    int data[row][col];
    int (*p)[col]=data;
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>*(*(p+i)+j);
        }
    }
    int m,n;
    for(i=0;i<col;i++)
    {
        for(m=0,n=i-m;(m<row&&n>=0);m++,n--)
        cout<<*(*(p+m)+n)<<endl;
    }
    for(i=1;i<row;i++)
    {
        for(m=i,n=col-1;(m<row&&n>=0);m++,n--)
        cout<<*(*(p+m)+n)<<endl;
    }
    return 0;
}