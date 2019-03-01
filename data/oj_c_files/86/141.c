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
    int a[100][100]={0};
    int m;
    cin>>m;
    for (int i=1;i<=m;i++)
    {
        int n;
        cin>>n;
        if (n==0)
            cout<<60<<endl;
        else
            for (int j=1;j<=n;j++)
                cin>>a[i][j];
    }


    for (int i=1;i<=m;i++)
    {
        for (int j=1;j<99;j++)
        {

            if ((a[i][j]+3*j)<=60)
            {

                if (a[i][j+1]!=0&&(a[i][j+1]+3*(j+1))>60)
                {
                    if (a[i][j+1]<=(60-3*j))
                        cout<<a[i][j+1]<<endl;
                    if (a[i][j+1]>(60-3*j))
                        cout<<60-3*j<<endl;
                }
                if (a[i][j]!=0&&a[i][j+1]==0)
                {
                    cout<<60-3*j<<endl;
                }



            }


        }


    }
    return 0;
}
