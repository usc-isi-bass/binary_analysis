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

void function(int num){
	cout<<num%10;
	if ((num/10)!= 0) 
		function (num/10);
}
int main(){
	int num;
	cin>>num;
	function (num);
return 0;
}
