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


int main() {
	char a[31];
	cin.getline(a,31);
	int i=-1,len=strlen(a);
	while(i<len){
		i++;
		if(a[i]>'9'||a[i]<'0')continue;//??????????
		while(a[i]<='9'&&a[i]>='0'){   //????????????????????
			cout<<a[i];i++;
		}
		cout<<endl;
	}
         cout<<endl;
	return 0;
}