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
	int x,y,i;//???????i??????
	cin>>x>>y;//??????x,y
	for(i=0;;i++){//??????????
		if(x==y){cout<<x<<endl;break;}//?x,y?????????????
		if(x>y){x=x/2;continue;}//????????????2???????????
		if(x<y) y=y/2;
	}
	return 0;//????
}


