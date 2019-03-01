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

int f(int x,int y){
	if(x==0)return 1;
	else if((x!=0)&&(y==0))return 0;
	else if((x!=0)&&(y!=0)&&(x>=y))return f(x-y,y)+f(x,y-1);
	else return f(x,y-1);
}
int main(){
	int n,k,i,m;
	cin>>n;
	for(i=1;i<=n;i++){
		cin>>k;
		cin>>m;
		cout<<f(k,m)<<endl;
      }
	return 0;
}
