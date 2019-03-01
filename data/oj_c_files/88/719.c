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
 *???: get_numbers.cpp
 *??: ???
 *????: 2012-12-09
 *??: ?????????
 */



int main()
{
	char str[MAXL+10]; //???
	int nNumbers=0; //????

	cin.getline(str,sizeof(str));
	for (char *p=str;;p++){
		if (*p>='0' && *p<='9'){ //???????????
			cout << *p;
			nNumbers++;
		}
		else if (nNumbers && *(p-1)>='0' && *(p-1)<='9') //???????????
			cout << endl;
		if (!*p) break; //??\0,????
	}
	return 0;
}

