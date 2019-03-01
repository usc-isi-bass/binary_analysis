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

int main(){
	int i;
	char c[31]={0};
	cin.getline(c,31,'\n');
	for(i=0;i<31;i++)
	{if (c[i]>='0'&&c[i]<='9') cout<<c[i];
	else if (c[i-1]>='0'&&c[i-1]<='9') cout<<endl;
	}
	return 0;
}