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
	int i;
	char a[31];
	cin.getline(a,31);//????
	for(i=0;a[i]!='\0';i++)//?????????????????????????????
		if(a[i]>='0'&&a[i]<='9')cout<<a[i];
		else if(a[i-1]>='0'&&a[i-1]<='9')cout<<endl;
	return 0;
}
