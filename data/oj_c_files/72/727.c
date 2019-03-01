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
 int a[25][25],m,n;
 cin>>m>>n;
 for(int i=0;i<25;i++)
   for(int j=0;j<25;j++)a[i][j]=0;
 for(int i=1;i<=m;i++)
   for(int j=1;j<=n;j++)cin>>a[i][j];
 for(int i=1;i<=m;i++)
   for(int j=1;j<=n;j++)
     {
      if(a[i][j]>=a[i-1][j]&&a[i][j]>=a[i+1][j]&&a[i][j]>=a[i][j-1]&&a[i][j]>=a[i][j+1])cout<<i-1<<" "<<j-1<<endl;      
     }
 cin.get();cin.get();
 return 0;
}