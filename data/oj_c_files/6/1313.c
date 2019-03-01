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

int map[100][100];
int m,n;
void count()
{
    int i,j;
    int sum=0;
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i+j==j||i+j==i||i+j==i+n-1||i+j==j+m-1)
            {
                sum=sum+map[i][j];
            }
        }
    }
    cout<<sum<<endl;
}
int main()
{
    int sum;int k=0;
    cin>>sum;
    int i,j;
    for(k=0;k<sum;k++)
    {
        cin>>m>>n;
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>map[i][j];
            }
        }
        count();
    }
}