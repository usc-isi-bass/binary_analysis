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
	int n; cin >> n;
	int t = 2;
	char initial[40];
	cin >> initial;
	cout << initial;
	int count = strlen(initial);
	int mark = 1;
	while (t <= n)
	{
		char word[41];
		cin >> word;
		int lenth = strlen(word);
		count+= lenth;
		if (count + t - mark> 80)
		{
			/*for (int i = 0; i < lenth; i++)
			{
				temp[i] = word[i];
			}
			temp[lenth] = '\0';*/
			cout << endl;
			cout << word;
			count = lenth;
			mark = t;
		}
		else
			cout << " " << word;
		t++;
	}
	cout << endl;
	return 0;
}