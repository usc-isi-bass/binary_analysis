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

int paidui(int i,char a[110],int l)//????,i??????,l???????
{
	int j;
	if(a[i]==a[0]&&i<l)//??a[i]????????
	{
		j=paidui(i+1,a,l);//????paidui(i+1,a,l)
		cout<<i<<" "<<j<<endl;//??i j
		return paidui(j+1,a,l);//??paidui(j+1,a,l)
	}
	else if(a[i]!=a[0]&&i<l) //??a[i]?????????
			return i;//??i
}
int main()
{
	int l;
	char a[110];
	cin.getline(a,110);//??????
	l=strlen(a);
	paidui(0,a,l);
	return 0;
}