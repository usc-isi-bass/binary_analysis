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

int matrix[100][100],row,col;
void display(int step)
{
    int x,y,i;
    if (step>row+col-1) return;
    if (step<col)
    {
        y=step-1;
        for (i=y;i>=0&&y-i<row;i--)
            cout<<matrix[y-i][i]<<endl;
    }
    else
    {
        x=step-col;
        for (i=x;i<row&&col-1+x-i>=0;i++)
            cout<<matrix[i][col-1+x-i]<<endl;
    }
    display(step+1);
}
int main()
{
    int i,j;
    cin>>row>>col;
    for (i=0;i<row;i++)
        for (j=0;j<col;j++)
            cin>>*(*(matrix+i)+j);
    display(1);
}
