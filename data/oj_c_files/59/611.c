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

/*************************
*????EX1_05.cpp
*??????1100019007?
*???2012-11-11
*???????
**************************/ 
char rooms[100][100];
int main(int argc, char *argv[])
{
    int n,m,i,j,d;//???? 
    int count=0;
    cin>>n;//??n
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>rooms[i][j]; 
        }
    }
    cin>>m;//??m 
    for(d=0;d<m-1;d++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(rooms[i][j]=='@')
                {
                    if(i>0)
                    {
                        if(rooms[i-1][j]=='.')rooms[i-1][j]='+';
                    }
                    if(i<n-1)
                    {
                        if(rooms[i+1][j]=='.')rooms[i+1][j]='+';
                    }
                    if(j>0)
                    {
                        if(rooms[i][j-1]=='.')rooms[i][j-1]='+';
                    }
                    if(j<n-1)
                    {
                        if(rooms[i][j+1]=='.')rooms[i][j+1]='+';
                    }//??????
                }
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                if(rooms[i][j]=='+')rooms[i][j]='@';
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(rooms[i][j]=='@')count++;//???? 
        }
    }
    cout<<count<<endl;//???? 
    return 0;
}
