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
	char str[100][20];  //?????????
	char (*p)[20]=NULL;  //???????????
	int n=0,i;
	while(cin>>str[n])
		n++;  //???????
	p=str;  //????????????p
	cout<<*p;  //p?????????????
	for(i=1;i<n;i++)
		cout<<' '<<*(p+i);  //??????
	cout<<endl;
	return 0;
}