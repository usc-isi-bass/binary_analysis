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
	char str[101];
	gets(str);
	int len=strlen(str),i;
	for(i=0;i<len;i++)
	{
		if(str[i]==' '&&str[i+1]==' ')
			continue;
		else
			cout<<str[i];
	}
	cout<<endl;
	return 0;
}
