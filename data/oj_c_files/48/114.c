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

int a[9][9][2];
int temp;
void run()
{
    for(int i=0;i<9;i++)  for(int j=0;j<9;j++)
    if(a[i][j][0])  {for(int p=i-1;p<=i+1;p++)  for(int q=j-1;q<=j+1;q++)  a[p][q][1]+=a[i][j][0];}
    for(int i=0;i<9;i++)  for(int j=0;j<9;j++)  {a[i][j][0]+=a[i][j][1];a[i][j][1]=0;}
}
int main()
{
    int m,n;
    cin>>m>>n;
    for(int i=0;i<9;i++)  for(int j=0;j<9;j++)  a[i][j][0]=a[i][j][1]=0;
    a[4][4][0]=m;
    for(int s=1;s<=n;s++)  run();
    for(int i=0;i<9;i++)
    {
    cout<<a[i][0][0];
    for(int j=1;j<9;j++)  cout<<" "<<a[i][j][0];
    cout<<endl;
    }
} 