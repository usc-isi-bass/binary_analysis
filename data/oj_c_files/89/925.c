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

//****************************************
//*??:  ????        ** 
//*??: ???      		    **
//*???2011  12 09              **
//****************************************
int main()
{
	int a, b;           //a,b?????????? 
	int c[2][10001] = {0};   //?????????????????????????? 
	int n;
	int k = 0;
	int *p;             //???? 
	int flag = 0 ;         //??????????????? 
	cin >> n;
	while(1)
	{
		cin >> a >> b; 
		if(a == 0 && b == 0)    break;    //?????? 
		else
		{
			c[0][a]++;      
			c[1][b]++;	        //?? 
		}
	}	
	for(p = c[0]; p < c[0] + n; p++ , k++)         //k????????????????? 
	{ 
		if(*p == 0 && *(p + 10001) == n - 1)	           //?????? 
		{
			cout << k << endl;
			flag = 1;     //?????1 
		}
	}
	if(flag == 0)
	cout << "NOT FOUND" << endl;
}