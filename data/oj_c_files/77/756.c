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

// ????
// ??? 1100012820
// 20111115
//******************
char line[100];
int i = 0;
void match(int af)
{
	for(;line[i] != '\0'; i++)
	{
		if (line[i] == line[0])
		{
			int boy = i;
			match(++i);
			cout << boy << " " << i << endl;
		}
		else
		{
			return;
		}
		
	}
	return;
}
int main()
{
	cin >> line;
	match(0);
	return 0;
}