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

/************************/
/*    ???????    */
/*    ??? pyyaoer    */
/*   ??  2011.12.4    */
/************************/
int main()
{
	char c[1000];
	char *p=NULL;                  //?????
	p=c;
	gets(c);
	for (;*p!='\0';p++)            //???????????
	{
		if (*p==' ')               //?????????????
		{
			cout<<" ";
			for (;*p==' ';p++){}   //???????
			p--;
		}
		else cout<<*p;             //??????????
	}
	cout<<endl;
	return 0;
}