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

int f(int x,int y){//x??????y????????
	if((int)pow(x,0.5)<y)return 1;//??x^0.5???y??1
	int d=1;
	for(int i=y;i<=(int)pow(x,0.5);i++)//??i<=x^0.5,??????
		if((x%i)==0)
			d+=f(x/i,i);//??
	return d;
}
int main(){
    int n,m;
    cin>>n;//??
    for(int k=1;k<=n;k++){
    	cin>>m;
    	cout<<f(m,2)<<endl;//????
    }
	return 0;
}