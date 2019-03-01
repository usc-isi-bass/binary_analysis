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
	int i,j=0;
	char str[101],c[101]="\0";
	cin.getline(str,101);
	for(i=0;i<=strlen(str);i++)
		if (!(str[i]==' '&& str[i+1]==' ')){
			c[j]=str[i];
			j++;
		}
	cout<<c;
	return 0;
}