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

//********************************
//*???????              **
//*?????? 1300012965      **
//*???2013.11.1              **
//********************************
int main ()
{
	char a[101][101] = {{0}};
	int n, count, m;//count?????????m???
	count = 0;
	cin >> n;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
		cin >> a[i][j];
	cin >> m;
	for(int h = 1; h <= m-1; h++)//?m?????m-1?
	{
		int b[101][101] = {{0}};//b?????????????
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= n; j++)
				if (a[i][j] == '@'&&b[i][j] == 0)//??b?0???????????????
				{
					if(a[i-1][j] == '.')
						{a[i-1][j] = '@';
					    b[i-1][j] = 1;} //???????1
				    if(a[i+1][j] == '.')
						{a[i+1][j] = '@';
					    b[i+1][j] = 1;}
				    if(a[i][j-1] == '.')
						{a[i][j-1] = '@';
					    b[i][j-1] = 1;}
				    if(a[i][j+1] == '.')
						{a[i][j+1] = '@';
					    b[i][j+1] = 1;}
				 }
	}
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			if (a[i][j] == '@')
				count++;//????
	cout << count << endl;
	return 0;
}