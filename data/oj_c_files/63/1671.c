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
{int n,m,p,q;
cin>>n>>m;
int a[100][100],b[100][100];
int i,j,sum;
for(i=0;i<n;i++)
for(j=0;j<m;j++)
{cin>>a[i][j];            } 
cin>>p>>q; 
for(i=0;i<p;i++)
for(j=0;j<q;j++)
{cin>>b[i][j];            }  
int c[100][100];
for(i=0;i<n;i++)
for(j=0;j<q;j++)
{c[i][j]=0;int k;
for(k=0;k<m;k++)
c[i][j]+=a[i][k]*b[k][j]; 
cout<<c[i][j];
if(j==q-1&&i!=n-1)
cout<<endl;
else if(j==q-1&&i==n-1)
     break;
else if(j!=q-1)
cout<<' ';
 }  

                  
 
 return 0;
}
