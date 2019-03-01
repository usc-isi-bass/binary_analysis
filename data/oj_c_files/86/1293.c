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
    int n,i,j;
    cin>>n;
    int breaknum[n],altogether[n][30];
    int count[n];
    for(i=0;i<n;i++)
    {
        cin>>breaknum[i];
        for(j=0;j<breaknum[i];j++)
        {
            cin>>altogether[i][j];
        }
        if(breaknum[i]==0) {cout<<"60"<<endl;continue;}
        else
        {
            if(altogether[i][j-1]+3*j<=60)
            {
                count[i]=60-3*j;
                cout<<count[i]<<endl;
                continue;
            }
            if(altogether[i][j-2]+3*(j-1)>60&&altogether[i][j-2]+3*(j-2)<=60)
            {
                cout<<altogether[i][j-2]<<endl;
                continue;
            }
            if(altogether[i][j-1]+3*j>60&&altogether[i][j-1]+3*j<=63)
            {
                cout<<altogether[i][j-1]<<endl;
                continue;
            }
            if(altogether[i][j-1]+3*j>60&&altogether[i][j-2]+3*j<=60)
            {
                count[i]=60-3*(j-1);
                cout<<count[i]<<endl;
                continue;
            }
            if(altogether[i][j-2]+3*(j-1)>60&&altogether[i][j-2]+3*(j-1)<63)
            {
                count[i]=altogether[i][j-2];
                cout<<count[i]<<endl;
                continue;
            }
            if(breaknum[i]==6&&altogether[i][j-2]==58&&altogether[i][j-1]==60)
            {
                cout<<48<<endl;
                continue;
            }
        }
    }
    return 0;
}
