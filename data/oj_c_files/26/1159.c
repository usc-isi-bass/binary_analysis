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
	char sen[110] , sen2[110];;
	int len , cnt = 0;
	cin.getline(sen,110);
	len = strlen(sen);
	for(int i = 0 ; i < len ; i++)
		if(sen[i] != ' ' || (sen[i] == ' ' && sen[i+1] != ' '))
		{
			sen2[cnt] = sen[i];
			cnt++;
		}
	for(int k = 0 ; k < cnt ; k++)
		cout << sen2[k];
	return 0;
}
