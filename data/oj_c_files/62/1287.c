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
	char a[1000][20];//????
	char (*p)[20]=a;//??????????a
	int count=0;//?????
	char temp='\0';
	while(temp!='\n')//?????????
	{
		cin >> *(p+count);
		temp=cin.get();//???????
		count++;
	}
	for(p=a;p<(a+count-1);p++)//??
		cout << *p << " ";
	cout << *p << endl;
	return 0;
}
