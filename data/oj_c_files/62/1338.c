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

/*
 *???: filter_spaces.cpp
 *??: ???
 *????: 2012-12-09
 *??: 
 */



int main()
{
	char input[MAXL],output[MAXL];
	char *s,*t; //??input,output???
	cin.getline(input,sizeof(input));
	for (s=input,t=output; *s; s++){
		if (*s==' '&&*(s-1)==' ')
			continue;
		*t++=*s;
	}
	*t=0; //????\0
	cout << output << endl;
	return 0;
}

