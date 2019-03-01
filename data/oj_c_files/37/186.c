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
	char a[100001];
	int l, count[26], i, j, n, flag;
	cin >> n;
	for(i = 0;i < n;i++)
	{
		flag = 0;
		memset(count,0,sizeof(count));
		cin >> a;
		for(j = 0;j < strlen(a);j++)
		{
			count[a[j] - 'a']++;
		}
		for(j = 0;j < strlen(a);j++)
			if(count[a[j] - 'a'] == 1)
			{
				flag = 1;
				cout << a[j] << endl;
				break;
			}
		if(flag == 0)
			cout << "no" << endl;
	}
	return 0;
}
