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

/**
* @file		???????.cpp
* @author	??	1000012792
* @date		2010.12.15
*/

int main()
{
	int l, i;
	char s[110], s1[110];				//s[]??????s1[]?s??????
	gets(s);							//??s[]

	l = strlen(s);						//?s???
	for(i=0;i<l-1;i++)
		s1[i] = s[i] + s[i+1];		//???????i???????????i???i+1??i=l??????????
	s1[i] = s[i] + s[0];
	
	for(i=0;i<l;i++)
		cout << s1[i];					//??s1[]
	return 0;
}