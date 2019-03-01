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
    int t;
    int m,n;
    int a[100][100]={0};
    int sum;
    cin>>t;
    int i,j,k;
    for(i=0;i<t;i++)
    {
                    cin>>m;
                    cin>>n;
                    sum=0;
                    for(j=0;j<m;j++)
                    for(k=0;k<n;k++)
                    a[j][k]=0; 
                    for(j=0;j<m;j++)
                    for(k=0;k<n;k++)
                    cin>>a[j][k]; 
                    for(j=0;j<n;j++)
                    {
                                    sum=sum+a[0][j];
                                    sum=sum+a[m-1][j];           
                    }
                    for(k=1;k<m-1;k++)
                    {
                                      sum=sum+a[k][0];
                                      sum=sum+a[k][n-1];
                    }
                    cout<<sum<<endl;
    }
return 0;
}
