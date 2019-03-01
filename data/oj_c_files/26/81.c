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
	char a[100];									//???????????
	int len,i;										//????????????
	cin.getline(a,100);
	len=strlen(a);
	cout<<a[0];
	for(i=1;i<len;i++)
	{
		if(!(a[i]==' '&&a[i-1]==' '))				//?????????????????????
		cout.put(a[i]);
	}
	return 0;
}