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
	char str[31];
	int sum=0;
	cin.getline (str,31);
	for(int i=0;;i++){
		sum++;
		if(*(str+i)==0)break;
	}
		for(int i=0;i<sum;i++){
		if(*(str+i)>='0'&&*(str+i)<='9')cout<<*(str+i);
		else if(i!=0&&*(str+i-1)>='0'&&*(str+i-1)<='9')cout<<endl;
	}
	return 0;
}