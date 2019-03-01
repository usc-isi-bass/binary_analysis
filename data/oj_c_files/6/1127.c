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
    int group=0;
    int row=0,col=0;
    int a[100][100];
    int i,j,sum=0;

    cin>>group;
    while(group--)
    {
        cin>>row>>col;
        for(i=0;i<row;i++)//??
            for(j=0;j<col;j++)
                cin>>a[i][j];
        sum=0;
        if(row==1&&col==1)  sum=a[0][0];//????
        else
        {
            for(i=0;i<col;i++)//??????????
                {sum+=a[0][i];  if(row>1)   sum+=a[row-1][i];}
            for(i=1;i<=row-2;i++)//????????????
                {sum+=a[i][0];  if(col>1)   sum+=a[i][col-1];}
        }
        cout<<sum<<endl;

    }
}
