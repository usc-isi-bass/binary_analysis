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

//??(6-4) ?????????? ??? 20121208

int row,col,Mat[111][111];

void Out(int i,int j)   //????????
{
    cout<<*(*(Mat+i)+j)<<endl;
    if(i==row-1||j==0) return;  //?????
    else Out(i+1,j-1);
}

int main()
{
    cin>>row>>col;

    //??
    for(int i=0;i<row;i++)
    for(int j=0;j<col;j++)
        cin>>*(*(Mat+i)+j);

    for(int i=0;i<col;i++)
        Out(0,i);

    for(int i=1;i<row;i++)
        Out(i,col-1);
}
