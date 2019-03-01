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

/**
????1.cpp
?  ?????
?  ??10.30
?  ??????????????
*/


int main()
{
	int a[16], i;   
	
    
	for(i = 1;;i++) 
	{
	    int j, k, n = 1, cnt = 0;
		cin >> a[0];
		if (a[0] == -1)break;
		for(j = 1;j < 16;j++)
		{
		    cin >> a[j];
			if(a[j] == 0)break;
		    
            n++;
			
		}
		
		for(j = 0;j < n - 1;j++)
		{
		    for(k = 1;k <= n - j - 1;k++)
			{
			    if(a[j] == 2 * a[j + k] || 2 * a[j] == a[j + k])
				    cnt++;
			}
		  
		}
	    cout << cnt << endl;
	}
	

	
    return 0;
}




