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

//**********************************************
//**???????******************************
//**?????? 1000012741*********************
//**???2010?11?26?************************
//**********************************************
void pal(char str[503], int m, int i)  //??pal?????????????????????
{
	int j = i, p = i + 1;  //????????????j?p
	while (str[j] == str[p] && j >= 0 && str[p] != '\0')  //????????????
	{
		j--; 
		p++;
		if (p != (i + 1) && ((p - j - 1) == m))  //?????????????
		{
			for (int k = j + 1; k < p; k++)  //????
				cout << str[k];
			cout << endl;
		}
	}
}
int main()
{
	char str[503]; 
	int i, j, k, p, m, l;  //m?????????l?????????
	cin >> str;  //?????
	l = strlen(str);  //????
	for (m = 2; m <= l; m = m + 2)  //??????????
	{
		for (i = 0; str[i + 1] != '\0'; i++)
			pal(str, m, i);	
	}
	for (m = 3; m <= l; m = m + 2)  //??????????
	{
		for (i = 0; str[i] != '\0'; i++)  //??????????
		{
			j = i - 1;
			p = i + 1;
			while (str[j] == str[p] && j >= 0 && str[p] != '\0')
			{
				j--;
				p++;
			}
			if (p != (i + 1) && ((p - j - 1) == m))  //?????????????
			{
				for (k = j + 1; k < p; k++)
					cout << str[k];  //????
				cout << endl;
			}
		}
	}
	return 0;
}
//**********************************************