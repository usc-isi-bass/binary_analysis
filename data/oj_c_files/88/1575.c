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

//???????
//???2010.12.13
//??????
//???1000012856

int main()
{
	char str[31], *p;				//str??????*p??
	gets(str);						//????????str
	int l = strlen(str);			//l??????
	p = str;						//*p?str???
	if(*p >= '0' && *p <= '9')		//??str????????????
		cout << *p;
	p = str +1;						//p??str?????
	while(p < str + l)
	{
		if(*p >= '0' && *p <= '9')	//????????????
			cout << *p;
		//???????????????????????????????????????
		else if(*(p - 1) >= '0' && *(p - 1) <= '9' && !(*p >= '0' && *p <= '9'))
			cout << endl;
		//????????????????
		p++;
	}
	cout << endl;

	return 0;
}