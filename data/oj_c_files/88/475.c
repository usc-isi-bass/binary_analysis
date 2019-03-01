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

void num(char*p){
	if(*p==0)return;
	if((*p>='0')&&(*p<='9'))
	{
		for(;(*p>='0')&&(*p<='9')&&(*p!=0);p++)
			cout<<*p;
		cout<<endl;
		num(p);
	}
	else num(p+1);
}
int main (){
	char c[31];
	cin.getline(c,31);
	num(c);
}