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
//*???n-gram????   **
//*?????? 1300012713 **
//*???2013.12.11  **
//********************************
int main()
{
	int n, num = 1, max = 1, ge = 1,flag = 1; //???????n,????num,??????max,??????ge
	char str[505], a[500][5], d[500][5];//???str,??gram??????d
	cin >> n >> str; //??
	int c = strlen(str);//??c???????
	for(int i = 0; i <= c-n; i++)
	{
		for(int j = 0; j < n; j++)
			a[i][j] = *(str+i+j); //?????????
		a[i][n] = '\0'; //?????
	}
	for(int k = 0; k <= c-n; k++)
	{
		if(strcmp(a[k], "0000") == 0) //????? ??
		{
			continue;
		}
		for(int l = 1; l < c-n-k+1; l++) //
		{
			if(strcmp(a[k],a[k+l]) == 0) //??????
			{
				num++; 
				strcpy(a[k+l], "0000");
			}
		}
		if(num > max) //?????????
		{
			ge = 1;
			max = num;
			strcpy(d[ge],a[k]);
			flag = 0;

		}
		if(num == max && flag == 1) //???????????
		{
			ge++;
			strcpy(d[ge],a[k]);
		}
		flag = 1; //???????
		num = 1;
	}
	if(max == 1) //?????????1???? NO
	{
		cout << "NO" << endl;
		return 0;
	}
	cout << max << endl; //??
	for(int p = 1; p <= ge; p++)
		cout << *(d+p) << endl;
	return 0;
}