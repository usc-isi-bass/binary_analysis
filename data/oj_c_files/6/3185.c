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
    int k,num=0;
    cin>>k;
    int row,col;
    for(num=0;num<k;num++)
    {
        cin>>row>>col;
        int data[row][col];
        int (*p)[col]=data;
        int i,j,sum=0;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                cin>>*(*(p+i)+j);
            }
        }
        for(i=1;i<row-1;i++)
        {
            sum=sum+*(*(p+i))+*(*(p+i)+col-1);
        }
        for(i=1;i<col-1;i++)
        {
            sum=sum+*(*p+i)+*(*(p+row-1)+i);
        }
        sum+=*(*p)+*(*p+col-1)+*(*(p+row-1))+*(*(p+row-1)+col-1);
        cout<<sum<<endl;
    }
    return 0;
}
