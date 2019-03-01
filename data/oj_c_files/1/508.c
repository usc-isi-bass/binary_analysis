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

int fenjie(int x,int y){//x????? y??????????
	int i,s=0;//s??????
	if(x==y)return 1;
	for(i=y;i<x;i++)
		if(x%i==0)s+=fenjie(x/i,i);
	if(i==x)s++;
	return s;
}
int main(){
	int n,i;//n???????
	cin>>n;
	for(;n>0;n--){
		cin>>i;
		cout<<fenjie(i,2)<<endl;
	}
	return 0;
}