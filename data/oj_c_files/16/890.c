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
	char str[10000]={0},*start,*end,t;
	int len;
	cin >> str;
	len = strlen(str);
	start = str;
	end = &str[len-1];
	while(start<end){
		t = *start;
		*start = *end;
		*end = t;
		start++;
		end--;
	}
	cout << str;
	return 0;
}