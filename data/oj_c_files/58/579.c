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

int main ()
{
	int n,i,j;
	char str[81];
	cin >> n;
	cin.get();
	for (i =1;i<= n;i++)
	{
		cin.getline(str,81);
		if ((((str[0] >='A')&&(str[0] <='Z'))||((str[0] >='a')&&(str[0] <='z'))||(str[0] =='_'))==1)
		{
			for (j = 1;str[j] !='\0';j++)
			{
				if ((((str[j] >='A')&&(str[j] <='Z'))||((str[j] >='a')&&(str[j] <='z'))||(str[j] =='_')||((str[j] <='9')&&(str[j]>='0')))==0)
				{
					cout << "0" <<endl;
					break;
				}
			}
			if (str[j] == '\0')
				cout << "1" << endl;
		}
		else
		cout << "0" << endl;
	}
	return 0;
}

