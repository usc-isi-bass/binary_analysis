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
    int a,n,c[100],i,j = 0,sum = 0,q;
	cin >> a;
	while (1)
	{
		sum = sum + 100;
		j++;
		if(sum > a)
		{
			j--;
			sum = sum - 100;
			break;
		}
	}
	cout << j<<endl;
	j = 0;
while (1)
	{
		sum = sum + 50;
		j++;
		if(sum > a)
		{
			j--;
			sum = sum - 50;
			break;
		}
	}
cout << j<<endl;
	j = 0;
	while (1)
	{
		sum = sum + 20;
		j++;
		if(sum > a)
		{
			j--;
			sum = sum - 20;
			break;
		}
	}
cout << j<<endl;
	j = 0;
	while (1)
	{
		sum = sum + 10;
		j++;
		if(sum > a)
		{
			j--;
			sum = sum - 10;
			break;
		}
	}
cout << j<<endl;
	j = 0;
	while (1)
	{
		sum = sum + 5;
		j++;
		if(sum > a)
		{
			j--;
			sum = sum - 5;
			break;
		}
	}
cout << j<<endl;
	j = 0;
	while (1)
	{
		sum = sum + 1;
		j++;
		if(sum > a)
		{
			j--;
			sum = sum - 1;
			break;
		}
	}
cout << j<<endl;
    return 0;
}

