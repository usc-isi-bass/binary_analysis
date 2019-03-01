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
	char s[1000];
	cin.getline(s,1000);
	int len = strlen(s);
	int i , n = 1;
	for(i = 1; i < len;i++)
	{
		if(s[i] == s[i-1] || s[i] - s[i-1] == 'A'-'a' ||s[i] - s[i-1] =='a'-'A')
			n++;
		else
		{
			cout <<"(" <<(char)toupper(s[i-1])<<","<<n<<")";
			n=1;
		}
	}
	cout <<"(" <<(char)toupper(s[len - 1])<<","<<n<<")";
	return 0;
}