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

//********************************
//*???????????? **
//*????? 1300012839 **
//*???2013.10.27**
//********************************
int main()
{
	int n,a,b,i,j,k,c[100],d[100],e[100],result;                          //ab??????????c?d????e??j???????
	cin >> n;
	for(i = 0;i <= n-1; i++)
	{
		cin >> a >> b;
		c[i] = a;
		d[i] = b;                                                         //???????c?d??
	}
	for(j = 0;j <= n-1;j++)                                              
		{
			e[j] = 0;
			for( k = j;k <= n-1;k++)                                      //???????j????????
		    {
				if(c[k] >= 90 && c[k] <= 140 && d[k] >= 60 && d[k] <= 90) //????     
					e[j] = e[j] + 1;                                      //????????1
				else break;                                               //?????????????
			}
	    }
	for(j = 0;j < n-1;j++)
		{
			result = e[j]>e[j+1]?e[j]:e[j+1];
			e[j+1] = result;                                             //????n???1.??????????e?????????
	    }
	if(n!=1)cout << result << endl;                                      
	else cout << e[0] << endl;                                            //????????e?0?
	return 0;
}
