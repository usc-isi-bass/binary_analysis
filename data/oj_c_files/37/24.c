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

//****************************************************** 
//* ? ? ?   ?????????????              *
//* ? ?      ?? ? ?                              *
//* ? ? ? ??2010 ? 11 ? 17 ?                   * 
//* ? ?      ?1000010185                            *
//****************************************************** 
int main()
{
	int n, l;
	char a[100001];
	cin >> n;
	for (int i = 0; i < n; i ++)
	{
		int flag[26] = {0}, count[26] = {0}, min = 100001; //??????????
		cin >> a;
		l = strlen(a);
		for (int j = 0; j < l; j ++)
		{
			count[a[j] - 'a'] ++; //??????????
			if (flag[a[j] - 'a'] == 0) //??????????????
				flag[a[j] - 'a'] = j;
		}
		for (int j = 0; j < 26; j ++)
			if (count[j] == 1 && flag[j] < min) //??????????????????????
				min = flag[j];
		if (min == 100001) //??min??????count[j]????1
			cout << "no";
		else
			cout << a[min];
		cout << endl;
	}
	return 0;
}
