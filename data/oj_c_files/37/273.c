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
	char sentence[100000];			//sentence ?????
	int n, i, len, character[26];	//n ?????i ?????len ??????character ????????
	cin >> n;
	while (n--)
	{
		for (i = 0; i <= 25; i++)
			character[i] = 0;		//???????????
		cin >> sentence;
		len = strlen(sentence);
		for (i = 0; i <= len - 1; i++)				//????????????????????
			character[(int)(sentence[i] - 'a')]++;
		for (i = 0; i <= len - 1; i++)				//???????????????????
		{
			if (character[(int)(sentence[i] - 'a')] == 1)
			{
				cout << sentence[i] << endl;
				break;								//?????????????????????
			}
		}
		if (i == len)					//??????????? i ????????? len???�no�
			cout << "no" << endl;
	}
	return 0;
}