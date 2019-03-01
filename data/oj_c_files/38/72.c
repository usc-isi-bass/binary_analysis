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
	int i,j,k,n;
	double data[1000];
	double sum = 0,S = 0,ave = 0;
	double *pointer = NULL;
	cin >> k;
	for( i = 0;i<k;i++)
	{
		cin >> n;
		for(j = 0;j < n;j++)
		{	cin >> data[j];
			sum += data[j];
		}
		ave = sum / n;
		pointer = data;
		for(j = 0;j<n;j++)
		{
			S += ( *pointer-ave) * (*pointer-ave);
			pointer++;
		}
		cout << setprecision(5) << fixed << sqrt(S/n) << endl;
		memset(data,0,sizeof(data));
		pointer = NULL;
		sum = 0;ave = 0;S = 0;
	}
	return 0;
}



