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
	char s[101];
	cin.getline(s,101);
	int l=strlen(s);
	for(int i=0;i<l;i++){
		if(s[i]!=' '){
			cout<<s[i];
			if(i<l-1&&s[i+1]==' ')
				cout<<' ';
		}
	}
	return 0;
}
