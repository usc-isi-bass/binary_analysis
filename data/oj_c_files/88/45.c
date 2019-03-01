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
	char a[40];int i;
	cin.getline(a,31,'\n');
	for(i=0;i<strlen(a);i++)
		if(a[i]>='0'&&a[i]<='9')
			cout<<a[i];
		else cout<<endl;
	return 0;
}
