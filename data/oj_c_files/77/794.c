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

//***********************************
//*???????                 **
//*??????1100012914         **
//*???.11.18                  **
//***********************************

char queue[100], ch1, ch2;
int i, n, t, s;

void take_hand(int);

int main()
{
	cin >> queue;
	ch1 = queue[0];
	n = strlen(queue);
	for (i = 0; i < n; i++)
	{
		if (queue[i] != ch1)
		{
			ch2 = queue[i];
			break;
		}
	}
	for (s = 0; s < n / 2; s++)
	{
		i = 0;
		take_hand(i);
	}
	cin >> i;
	return 0;
}

void take_hand(int j)
{

	for (t = j + 1; t < n; t++)
	{
		if (queue[t] == ch1 || queue[t] == ch2)
			break;
	}
	if (queue[t] == ch2)
	{
		queue[j] = '*';
		queue[t] = '*';
		cout << j << " " << t << endl;
	}
	else
	{
		j++;
		take_hand(j);
	}
}
