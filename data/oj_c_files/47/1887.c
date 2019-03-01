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

void shuchu(){
	int a;
	char b;
	cin>>a;
	cin.get(b);
	if(b!='\n'){
		shuchu();
		cout<<b<<a;//?????? 
	    }
	    if(b=='\n')cout<<a;
	}
int main(){
	int m;
	cin>>m;
	shuchu();

	return 0;
	}