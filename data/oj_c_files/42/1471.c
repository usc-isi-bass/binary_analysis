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
	int n, i, k, j = 0, m = 0;
	int a[100000];                        
	cin >> n;
	for (i = 0; i <= n - 1; i ++)        
		cin >> a[i];                     
	cin >> k;                           
	for (i = 0; i <= n -1; i++)          
	{
		if (a[i] != k)               
			m = m + 1;                
	}
	i = 0;                               
	do                                   
	{
		if (a[i] != k)                   
		{
		j = j + 1;                        
		if (j < m)                       
		cout << a[i] << " ";             
		else                              
			cout << a[i] << endl;        
		}
		i++;
	} while (i <= n - 1);                 

	return 0;
}