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

/*???????
???10/31*/
int main()
{
	int a[20000],i,j,k,n,count = 0;
	cin >> n;											//??????????
	for(i = 0; i < n; i++)                               
	{
		cin >> a[i];                                     //??????
	}
	for(i = 1, k = 1; i < n; i++)
	{
		for(j = 0; j < i; j++)
		{
			if(a[j]==a[i])break;
		}
		if(j == i)
		{
			a[k] = a[i];
			k++;
            count++;                                    //????????
		}
			
	}
	cout << a[0];	
	for(k = 1; k <= count; k++)
		cout << " " << a[k];
	return 0;
}