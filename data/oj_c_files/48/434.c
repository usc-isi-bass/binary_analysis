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
{int i,j,k;
int s[9][9][5];
int m,n;
cin>>m>>n; 
for(i=0;i<9;i++)
for(j=0;j<9;j++)
for(k=0;k<5;k++)    
{s[i][j][k]=0;}    
s[4][4][0]=m;
for(k=1;k<n+1;k++)
for(i=0;i<9;i++)
for(j=0;j<9;j++)
{if(i==0&&j==0)
s[i][j][k]=s[i+1][j][k-1]+s[i][j+1][k-1]+2*s[i][j][k-1]+s[i+1][j+1][k-1];
if(i==0&&j==8)
s[i][j][k]=s[i+1][j][k-1]+s[i][j-1][k-1]+2*s[i][j][k-1]+s[i+1][j-1][k-1];
if(i==8&&j==0)
s[i][j][k]=s[i-1][j][k-1]+s[i][j+1][k-1]+2*s[i][j][k-1]+s[i-1][j+1][k-1];
if(i==8&&j==8)
s[i][j][k]=s[i-1][j][k-1]+s[i][j-1][k-1]+2*s[i][j][k-1]+s[i-1][j-1][k-1];
if(i==0&&j!=0&&j!=8)
s[i][j][k]=s[i+1][j][k-1]+s[i][j+1][k-1]+s[i][j-1][k-1]+2*s[i][j][k-1]+s[i+1][j-1][k-1]+s[i+1][j+1][k-1];
if(i==8&&j!=0&&j!=8)
s[i][j][k]=s[i-1][j][k-1]+s[i][j+1][k-1]+s[i][j-1][k-1]+2*s[i][j][k-1]+s[i-1][j-1][k-1]+s[i-1][j+1][k-1];
if(j==8&&i!=0&&i!=8)
s[i][j][k]=s[i-1][j][k-1]+s[i+1][j][k-1]+s[i][j-1][k-1]+2*s[i][j][k-1]+s[i+1][j-1][k-1]+s[i-1][j-1][k-1];
if(j==0&&i!=0&&i!=8)
s[i][j][k]=s[i-1][j][k-1]+s[i+1][j][k-1]+s[i][j+1][k-1]+2*s[i][j][k-1]+s[i+1][j+1][k-1]+s[i-1][j+1][k-1];
if(i!=0&&j!=0&&i!=8&&j!=8)
s[i][j][k]=s[i-1][j][k-1]+s[i+1][j][k-1]+s[i][j-1][k-1]+s[i][j+1][k-1]+2*s[i][j][k-1]+s[i+1][j-1][k-1]+s[i+1][j+1][k-1]+s[i-1][j-1][k-1]+s[i-1][j+1][k-1];
}

for(i=0;i<9;i++)
{for(j=0;j<8;j++)
{cout<<s[i][j][n]<<" ";}
cout<<s[i][8][n]<<endl;}
return 0;                
    } 
