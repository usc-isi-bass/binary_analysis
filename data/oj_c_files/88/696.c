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
 *function: ????
 *created on: 2012-12-17
 *author: ???
 */
int main()
{
	char a[30];
	int len,i;
	gets(a);         // ????????a???
	len=strlen(a);     
	if(*a>='0'&&*a<='9')
		cout << *a;    // ?????????????
	for(i=1;i<len;i++)
	{
		if(*(a+i)>='0'&&*(a+i)<='9')
			cout << *(a+i);   // ?????????
		else if((*(a+i)<'0'||*(a+i)>'9')&&(*(a+i-1)>='0'&&*(a+i-1)<='9'))
			cout << endl;  // ????????????????????
		else
			continue;  // ??????
	}
	return 0;
}
