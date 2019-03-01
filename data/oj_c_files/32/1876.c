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

//* * * * * * * * * * * * * * * * * * * * * * * * 
//*?????????                           *
//*?????????                           *
//*?????                                   *
//*???2010.11.17                             *
//* * * * * * * * * * * * * * * * * * * * * * * * 


int main()
{
	int n, i = 0, j = 0, k;	//	????n??????????????i,j,k;
	char seline1[101], seline2[101];	//	???????
	unsigned int an1[101], an2[101];	//	???????
	int len1, len2;	//	len1,len2?????????

	cin >> n;	//	??n;
	// cin.ignore();	//	???????
	for (k = 1; k <= n; k++)
	{
		for (j = 0; j < 101; j++)
		{
			seline1[j] = 0;
			seline2[j] = 0;
		}
        cin.ignore();
		cin.getline(seline1, 101);
		cin.getline(seline2, 101);	//	???????
        
		//cout << endl;
		len1 = strlen(seline1);
		len2 = strlen(seline2);	//	?????????

		memset(an1, 0, sizeof(an1));
		memset(an2, 0, sizeof(an2));	//	?????

		j = 0;
		for (i = len1 - 1; i >= 0; i--)
			an1[j++] = seline1[i] - '0';	//	????????????????
		j = 0;
		for (i = len2 - 1; i >= 0; i--)
			an2[j++] = seline2[i] - '0';	//	???
		for (i = 0; i <= len1 - 1; i++)
		{
			if (an1[i] >= an2[i])
				an1[i] -= an2[i];	//	?????????????????????
			else
			{
				an1[i] = an1[i] -an2[i] + 10;	//	???????????
				an2[i + 1]++;
			}
		}
		i = 100;
		while (an1[i] == 0)
			i--;	//	???????0???
		for (; i >= 0; i--)
			cout << an1[i];	//	???????
		cout << endl;	//	?????
	}

	return 0;
}
