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
	int a[1001] = {0}, x[1000], y[1000];
    int i = 0, j = 0, k, u, l,counter, max = 0;
    char ch;

	do
	{
	    cin >> x[i];
		i++;
	}while((ch = cin.get()) == ',');
	do
	{
	    cin >> y[j];
		j++;
	}while((ch = cin.get()) == ',');
    for(k = 0; k < i; k++)
	{    
		for(u = x[k]; u < y[k]; u++)
		    a[u]++;
	}
	for(l = 0; l < 1001; l++)
	{
	    if(a[l] > max)
			max = a[l];
	}
	cout << i << " " << max << endl;
	    return 0;
}
