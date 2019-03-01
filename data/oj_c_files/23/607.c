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

char s[105];
int main(){
	cin.getline(s,sizeof(s));
	for(int i = strlen(s) - 1;i >= 0;i --){
		for(int j = i;j >= 0;j --){
			if(s[j] == ' '){
				cout << &s[j+1] << ' ';
				s[j] = '\0';
				i = j - 1;
				break;
			}
		}
	}
	cout << s << endl;
	return 0;
}
