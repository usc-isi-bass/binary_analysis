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
	int n, i, j, k;
	int *p1,*p2;
	int flag=0;
	int person[10000] = {0},count[10000] = {0};
	cin >> n;
	cin >> i >> j;
	p1 = &person[j];
	p2 = &count[i];
	while(i!=0||j!=0)
	{
		(*p1)++;
		count[i]++;
		cin >> i >> j;
		p1 = &person[j];
	    p2 = &count[i];

	}
		
	for(k=0;k<n;k++)
		if(person[k]==n-1&&count[k]==0)
		{
			cout << k << endl;
			flag = 1;
		}
	if(flag==0)
		cout << "NOT FOUND" << endl;

	return 0;
}
	