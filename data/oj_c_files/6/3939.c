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
 for(i=1;i<=n;i++)
 {
  int row,line,a,b,A[101][101];
  int sum=0;
  cin>>row>>line;
  for(a=1;a<=row;a++)
   for(b=1;b<=line;b++)
     cin>>A[a][b];
   for(a=1;a<=row;a++)
	   sum+=A[a][1];
   for(b=2;b<=line;b++)
	   sum+=A[row][b];
   for(a=row-1;a>=1;a--)
	   sum+=A[a][line];
   for(b=line-1;b>=2;b--)
	   sum+=A[1][b];
   cout<<sum<<endl;
 }


}