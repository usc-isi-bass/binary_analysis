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

/*
?????13
?????? 1100012895
???2011-11-2
**/


int main()
{
	char num[100]; // ???????????
	int result[100]; // ????????
	
	// ???????
	memset(num,'0',100);
	memset(result,0,100);
	
	int yushu = 0, len, i = 0, j = 0; // yushu??????????,len???????,i?j?????
	
	cin.getline(num,100);
	len = strlen(num);
	
	// ?????????,?????,?????????
	if (len == 1)
	{
		cout << 0 << endl;
		cout << num[0] << endl;
	}
	
	else
	{
		
		yushu = num[0] - '0';
		
		for (i = 0; i <= len - 2; i++)
		{
			result[i] = (yushu * 10 + num[i + 1] - '0') / 13;
			yushu = (yushu * 10 + num[i + 1] - '0') % 13;
		}
		
		if ((result[0] == 0) && len > 2)
			j = 1;
		
		for (j; j < i; j++)
			cout << result[j];
		cout << endl;
		cout << yushu << endl;
	}
	
	return 0;
}