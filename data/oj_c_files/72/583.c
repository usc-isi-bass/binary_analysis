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
{int m,n;
cin>>m>>n;
int i,j;
int h[22][22];
for(i=0;i<22;i++)
{for(j=0;j<22;j++)
h[i][j]=0;
                 }    
for(i=1;i<=m;i++)
{for(j=1;j<=n;j++)
cin>>h[i][j];
                 }    
for(i=1;i<=m;i++)
{for(j=1;j<=n;j++)
{if(h[i][j]>=h[i][j-1]&&h[i][j]>=h[i][j+1]&&h[i][j]>=h[i+1][j]&&h[i][j]>=h[i-1][j])
cout<<i-1<<" "<<j-1<<endl;
                  }
                 }
return 0;

    } 
