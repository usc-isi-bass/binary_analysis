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

/*******************************
/* ?  ?: ????
/* ?  ?: ??? 1200012861
/* ?  ?: 2012?12?24?
*******************************/


int main()
{
	char str[260], subStr[260], replace[260], str2[260];
	char *start = str, *node = NULL, *rep = replace;
	int len, i = 0;
	cin >> str >> subStr >> replace;
	node = strstr(str, subStr); //??subStr???str???,??node?str???????,????
	if (node == NULL) //????
		cout << str; //?????
	else
	{
		while (start != node)
			str2[i++] = *start++; //????????????
		while (*rep != '\0')
			str2[i++] = *rep++; //?????????
		node += strlen(subStr); //node???????????
		while (*node != '\0') 
			str2[i++] = *node++; //????????????
		str2[i] = '\0'; //?????????
		cout << str2;
	}
	cout << endl;
	start = NULL; //????
	node = NULL;
	rep = NULL;
	return 0;
}
