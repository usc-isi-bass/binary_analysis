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

/*
 * ?????????C????????
 * ??? ???
 * ????: 2010-11-26
 * ????????C????????
 */



int main(){
	char str[81];	//???
	int n, i=0;
	cin >> n;
	cin.getline(str, 81);	//?????'\n'
	while(i<n){
		cin.getline(str, 81);
		if(str[0]=='_' || (str[0]>='A'&&str[0]<='Z')	//????????
			|| (str[0]>='a'&&str[0]<='z')){
			int len = strlen(str), j;
			for(j=1; j<len; j++){						//??????????
				if(str[j]!='_' && (str[j]<'A'||str[j]>'Z')
						&& (str[j]<'a'||str[j]>'z') && (str[j]<'0'||str[j]>'9'))
					break;
			}
			if(j==len) {cout << 1 << endl; i++; continue;}	//??????????????1
		}
		cout << 0 << endl;		//????0
		i++;
	}
	return 0;
}
