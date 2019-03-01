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
	char a[101];
	cin.getline(a,101);
	int l = strlen(a);
	int flag = 1;
	for(int i = 0; i < l; i++)
	{
		
		if(a[i] != ' ') 
		{
			cout << a[i];
			flag = 0;
			continue;
		}
		else if(flag == 0) 
		{
			cout << a[i];
			flag = 1;
			continue;
		}
			else if(flag == 1) continue;
	}
	return 0;
}