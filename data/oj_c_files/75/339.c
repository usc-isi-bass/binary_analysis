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

/*????:?????
 *??:???
 *??:2010/11/26
 *??:1000010449
*/
int main()
{
	int x[5000], y[5000], total, count = 0, max = 0;
	//x,y?????;total???;count?????????;max????
	int i, j;

	cin >> x[0];
	total = 1;
	while (cin.get() != '\n')	//???????
	{
		cin >> x[total];
		total++;
	}

	cin >> y[0];
	total = 1;
	while (cin.get() != '\n')	//???????
	{
		cin >> y[total];
		total++;
	}

	
	for (j = 0; j < total; j++)	//????????????
	{
		count = 0;	//?????????,????0
		for (i = 0; i < total; i++)
		{
			if (x[j] >= x[i] && x[j] < y[i])	//?i????
				count++;
		}
		if (count > max)
			max = count;
	}

	cout << total << " " << max << endl;
	
	return 0;
}




