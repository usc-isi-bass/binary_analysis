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

//**********************************************
//????????? 
//?????? 1300012917
//???2013.10.24
//**********************************************
int main()
{
	int a[10001] = {0}, p, m, i, j, sm;//??a?????????a[??]=0?a[??]=1 
	cin >> m;
	sm = sqrt(m); 
	//?2?m????????????? 
	for (i = 2; i <= sm; i++)
	  if (a[i] == 0) 
	    for (j = 2; i * j < m; j++)
	      a[i * j] = 1;
	      
	//?3?m/2??m???????????????????? 
	for (i = 3; i <= m / 2; i++)
	  if ((a[i] == 0) && (a[m-i] == 0)) 
	    cout << i << ' ' << m - i << endl;
	    
    return(0);
}