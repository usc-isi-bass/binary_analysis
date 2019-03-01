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



int mycompare(const void *, const void *);

int main()
{	
	int n, k;
	int a[1008];
	int i, j;
	int tag = 0;

	cin >> n >> k;

	for(i = 0; i < n; i ++)
		cin >> a[i];

	qsort(a, n, 4, mycompare);

	for(i = 0; i < n / 2; i ++)
	{
		int count = n - 1;

		while(count > i)
		{	
			if(a[i] + a[count] == k)
			{
				tag = 1;
				break;
			}
			else if(a[i] + a[count] < k)
				break;
			else
				count --;
		}

		if(tag == 1)
			break;
	}

	if(tag == 1)
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	

}

int mycompare(const void *elem1, const void *elem2)
{
	return *(int *)elem1 - *(int *)elem2;
}