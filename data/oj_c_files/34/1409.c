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
 * jiaogucaixing.cpp
 * ??????
 * ????: 2012-11-25
 * ?????????
 */
int  print(int x)//?????????
{
	if(x==1){cout<<"End"<<endl;return 0;}
	if(x%2==0)cout<<x<<"/2="<<x/2<<endl;
	if(x%2==1)cout<<x<<"*3+1="<<x*3+1<<endl;
	return 0;
}
int number(int x){//??????????
	if(x==1) {print(x);return 0;}
	if(x%2==0){print(x);return number (x/2);}
	else {print(x);return number(x*3+1);}
}
int main(){
	int x;//????
	cin>>x;//??x??
	number(x);//????
	return 0;//????
}
