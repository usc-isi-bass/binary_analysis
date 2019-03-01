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
	char *p,a[201],b;
	int i,j,k,len;
	cin.getline(a,201);
	len=strlen(a);                   //????????????
	p=a;                             //p????????
	for(i=0;i<len;i++)
	{
		if(*p!=' ')
		{
			cout<<*p;
			p++;
			j=0;            //???????????????j ??0
		}
		else 
		{
			if(j==0)
				cout<<' ';
				p++;
				j=1;    //??????????????????j??1
		}
	}
	cout<<endl;       //?????
	return 0;
}