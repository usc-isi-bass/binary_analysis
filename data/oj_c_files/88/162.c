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
	char p[31];
	cin.getline(p,31);
	int i;
	for (i=0;1;i++){
		if ((p[i]>='0')&&(p[i]<='9'))
			cout<<*(p+i);
		else if (p[i]=='\0')
			break;
		else
			cout<<endl;
	}
	return 0;
}
