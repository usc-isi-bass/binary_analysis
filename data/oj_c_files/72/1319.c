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
    int height[21][21];
    int m,n;
    cin >> m >> n;
    int i,j,k;
    int sum=0;
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            cin >> height[i][j];
            sum += height[i][j];
        }
    }
    
    for (i=0;i<m;i++)
    {
        for (j=0;j<n;j++)
        {
            if (i==0&&j!=0&&j!=n-1)
            {
                if (height[i][j]>=height[i+1][j] && height[i][j]>=height[i][j+1] && height[i][j]>=height[i][j-1])
                {
                    cout << i << " " << j << endl;
                }
            }
            else if(i==m-1&&j!=0&&j!=n-1)
            {
                 if(height[i][j]>=height[i-1][j] && height[i][j]>=height[i][j+1] && height[i][j]>=height[i][j-1])
                 {
                     cout << i << " " << j << endl;
                 }
            } 
            else if(j==0&&i!=0&&i!=m-1)
            {
                 if(height[i][j]>=height[i-1][j] && height[i][j]>=height[i][j+1] && height[i][j]>=height[i+1][j])
                 {
                     cout << i << " " << j << endl;
                 }
            }
            else if(j==n-1&&i!=0&&i!=m-1)
            {
                 if(height[i][j]>=height[i-1][j] && height[i][j]>=height[i+1][j] && height[i][j]>=height[i][j-1])
                 {
                     cout << i << " " << j << endl;
                 }
            }
            else if(j==n-1&&i==0)
            {
                 
                 if( height[i][j]>=height[i+1][j] && height[i][j]>=height[i][j-1])
                 {
                     cout << i << " " << j << endl;
                 }
            }
            else if(j==n-1&&i==m-1)
            {
                 
                 if( height[i][j]>=height[i-1][j] && height[i][j]>=height[i][j-1])
                 {
                     cout << i << " " << j << endl;
                 }
            }
            else if(j==0&&i==0)
            {
                 
                 if( height[i][j]>=height[i+1][j] && height[i][j]>=height[i][j+1])
                 {
                     cout << i << " " << j << endl;
                 }
            }
            else if(j==0&&i==m-1)
            {
                 
                 if( height[i][j]>=height[i-1][j] && height[i][j]>=height[i][j+1])
                 {
                     cout << i << " " << j << endl;
                 }
            }
            else
            {
                 if (height[i][j]>=height[i-1][j] &&height[i][j]>=height[i+1][j] && height[i][j]>=height[i][j+1] && height[i][j]>=height[i][j-1])
                 {
                     cout << i << " " << j << endl;
                 }
            }
        }
    }
   
    return 0;
} 