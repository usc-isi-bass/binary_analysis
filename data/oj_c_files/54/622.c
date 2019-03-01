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

// ?????.cpp : ??????????????
//

int main()
{ int n, i ,k ;//????n ?????? k;
 cin >> n >>k ;
 int app[50];
 for (int j=1;;j++)
{	 app[n-1]=n*j+k;
 if(app[n-1]%(n - 1) ==0)
  for ( i=n-2;i> 0;i--)
  {   app[i]=app[i+1]/(n - 1)*n+k ;
  
	  if(app[i]%(n - 1)!=0)
	    break;
  }
 if(i == 0)
 {
	 app[0] = app[1] / (n - 1) * n + k;
	 cout << app[0] << endl;
	 break;
 }
 }

	return 0;
}

