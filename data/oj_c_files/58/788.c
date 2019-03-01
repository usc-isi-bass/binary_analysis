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
	int n, len, i;
	char ch[100];
	cin >> n;
	getchar();
	for (; n > 0; n--)
	{
		cin.getline(ch, 100);
		len = strlen(ch);
		i = 0;
		if (ch[0] >= '0' && ch[0] <= '9')
		{	
			cout << 0 << endl;
			continue;
		}
		while ((ch[i] <= 'z' && ch[i] >= 'a' || ch[i] <= 'Z' && ch[i] >= 'A' || ch[i] >= '0' && ch[i] <= '9' || ch[i] == '_')&& i < len)
			i++;
		cout << (i == len) << endl;
	}	
	return 0;
}