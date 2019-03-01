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
	char a[600];
	int flag;
	cin >> a;
	int num = strlen(a);
	for(int i = 2; i <= num;i++) //????
	{
		for(int j = 0;j <= num-i+1;j++) //???
		{
			flag = 0;
			for(int k = 0; k < i/2;k++) //??????
			{
				if(a[j+k] != a[j+i-k-1])
				{
					flag = 1;
					break;
				}
			}
		    if(flag == 0)
			{
				for(int l = j; l<=j+i-1;l++)
					cout << a[l];
				cout << "\n";
			}
		}
	}
	return 0;
}
