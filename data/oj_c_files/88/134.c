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
	char s[300];
	cin.getline(s,300);
	for(i=0;i<strlen(s);i++){
		if(s[i]>='0'&&s[i]<='9'){
			do{
				cout<<s[i];
				i++;
			}while(s[i]>='0'&&s[i]<='9');
			cout<<endl;
		}
	}
	return 0;
}