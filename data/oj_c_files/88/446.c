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
	char a[31];
	cin.getline(a,31);
	for(int i=0;i<strlen(a);i++)
		if (a[i]<='9'&& a[i]>='0')
			if (a[i+1]>'9'||a[i+1]<'0')
				cout<<a[i]<<endl;
			else cout<<a[i];
	return 0;
}
