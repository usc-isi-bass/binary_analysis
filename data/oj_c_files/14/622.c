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





struct person
{
	char num[6];
	int Chinese;
	int math;
	int total;
}stu[100000];

int main()
{
	int n, i, max, j, k, temp = 0,tnum = 0;
	cin >> n;
	for (i = 0; i < n; i++)
	{
		cin >> stu[i].num;
		cin >> stu[i].Chinese;
		cin >> stu[i].math;
		stu[i].total = stu[i].math + stu[i].Chinese;

	}
	for (j = 0; j < 3; j++)
	{
		max = 0;
		for (i = 0; i < n; i++)
		{
			if (stu[i].total > max)
			{
				max = stu[i].total;
				k = i;
			}	
		}
		cout << stu[k].num << " " << stu[k].total << endl;
		stu[k].total = 0;
	}
	return 0;
}