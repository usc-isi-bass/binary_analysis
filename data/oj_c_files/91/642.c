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

/************************************************
**authour:	???				*
**number:	1000012905			*
**descripition:	?????			*
************************************************/
int main()
{
	//?????  
	char	words[101];
	cin.getline(words, 101);
	//???????  
	char	*p = words;

	//????????????????  
	while(*(p + 1) != '\0')
	{
		cout << (char)(*p + *(p + 1));
		p ++;
	}
	cout << (char)(*p + words[0]) << endl;	//????????  

	return 0;
}
