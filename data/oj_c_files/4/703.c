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
int row,col,i,j;
int array[101][101];
cin>>row>>col;
for(i=1;i<=row;i++)
  for(j=1;j<=col;j++)
     cin>>*(*(array+i)+j);
     
for(i=1;i<=row+col-1;i++)
   for(j=0;j<=i;j++)
      if(i-j>0&&i-j<=col&&j+1<=row)
	  cout<<*(*(array+j+1)+i-j)<<endl;
return 0;

} 