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

int find(int x , int y)
{
	if (x == y)       //???????? 
		return x ;
	else if (x > y)
	{
		while (x > y)   //????t???????2t,2t+1??????2????????? 
			x = x / 2 ;   //??x<=y???????? 
		return find(x , y) ;	
	}
	else
	{
		while (y > x)  //y??x 
			y = y / 2 ;
		return find(x , y) ;	
	}
}
int main()
{
	int m , n ;
	cin >> m >> n ;
	cout << find(m , n) ;
	return 0 ;	
}
