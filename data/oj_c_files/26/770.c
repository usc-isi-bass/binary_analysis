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
	char x[100][10];
	int i=0;
	while(cin>>x[i])
	{
		if(cin.get()=='\n')break;
		i++;
	}
	for(int j=0;j<i;j++)
		cout<<x[j]<<' ';
	cout<<x[i]<<endl;
	return 0;
}