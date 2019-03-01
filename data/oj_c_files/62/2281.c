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
    char str[50];
	cin>>str;
	cout<<str;
	for(;cin.get()!='\n';)
	{
		cin>>str;
		cout<<" "<<str;
		memset(str,'\0',sizeof(str));
	}
	cout<<endl;
	return 0;
}
