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
	char sentence[256], sub_sen[256], replacement[256];
	cin.getline(sentence, 256);
	cin.getline(sub_sen, 256);
	cin.getline(replacement, 256);
	char *p;
	p = strstr(sentence, sub_sen);
	if(!p)
		cout << sentence << endl;
	int i;
	int length = strlen(sub_sen);
	if(p)
	{
		for(i = 0; i < p - sentence; i++)
			cout << sentence[i];
		cout << replacement;
		cout << p + length << endl;
	}
	return 0;
}



