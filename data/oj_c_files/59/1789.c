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
    int n,m,s=0;
    cin>> n;
    char a[n][n];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
      {
        cin>> a[i][j];
        if(a[i][j]=='@')
        s=s+1;
      }
    }
    cin>> m;
    for(int k=2;k<=m;k++)
    {
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {
          if(a[i][j]=='@')
          {
            if((j>0)&&(a[i][j-1]=='.'))
            a[i][j-1]=1;
            if((j<n-1)&&(a[i][j+1]=='.'))
            a[i][j+1]=1;
            if((i>0)&&(a[i-1][j]=='.'))
            a[i-1][j]=1;
            if((i<n-1)&&(a[i+1][j]=='.'))
            a[i+1][j]=1;//?????????????1???? 
          }
        }
      }
      for(int i=0;i<n;i++)
      {
        for(int j=0;j<n;j++)
        {
          if(a[i][j]==1)
          {
            s=s+1;
            a[i][j]='@';//???1????? 
          }
        }
      }
    }
    cout<< s <<endl;    
    return 0;
}
