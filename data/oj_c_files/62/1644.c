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
	char a[201],b[201];      //????????????
	gets(a);                 //?????
	int flag=0;              //??????????????????
	char *pa=a,*pb=b;        //????????????????
	while(*pa!='\0')         //??????????????
	{
		if(*pa==' ')         //????????????????????????????????????
		{
			if(flag==0)
			{
				*pb=*pa;
				pb++;
				flag=1;
			}
		}
		else                 //???????????????
		{
			flag=0;
			*pb=*pa;
			pb++;
		}
		pa++;
	}
	*pb=*pa;                 //?????
	cout<<b<<endl;           //????
	return 0;
}
			