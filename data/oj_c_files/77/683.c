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

int len;
char ren[100];
void search(char ren[100],int k);
int main()
{
	cin >> ren;
	len = strlen(ren);
	search(ren,0);
	return 0;
}
void search(char ren[100],int k)
{
	int i;
	if (k == len - 1) 
	{
		cout << 0 << " " << len - 1;
		return;
	}
	if (ren[k] == ren[len - 1])
	{
		for (i = k - 1; i >= 0; i --)
			if (ren[i] == ren[0])
			{
				cout << i << " " << k << endl;
				ren[i] = 0;
				ren[k] = 0;
				break;
			}
			search(ren,k + 1);
	}
	else
		search(ren,k + 1);
}
