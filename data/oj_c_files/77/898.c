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

//????  ???
int l,js = 0;
char a,b;

void search(char c[])
{
	int i,j;
	for (i = 0; i <= l - 1; i++)
		if (c[i] == b) break;                  //???????????
	for (j = i - 1; j >= 0; j--)
		if (c[j] == a)                         //?????????
		{
			c[i] = 'Z'; c[j] = 'Z';                 //???????????????
			cout << j << ' ' << i << endl;        //????
			js += 2;
			if (js == l)                            //?????????
				return;
			else
				search (c);                         //????
		}
}

	
int main()
{
	int i;
	char s[201];
	cin >> s;          //?????
	l = strlen (s);	     //????
	a = s[0];              //a?????????b????????
	for (i = 1; i <= l - 1; i++)
		if (s[i] != a)
		{
			b = s[i];
			break;
		}
	search (s);         //??????????
	return 0;
	
}