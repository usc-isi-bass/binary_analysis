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

int m=2;
int manners(int a){//????????????
	int count=1,t=0;
	t=sqrt((double) a);
	for(int i=m;i<=t;i++){//?????????
		if(a%i==0){
			m=i;//?????????????????????
			count=count+manners(a/i);//?????????????????
		}
	}
	return count;//?????
}
int main(){
	int n, b;
	int i=1;
	cin>>n;
	while(i<=n){
		cin>>b;
		cout<<manners(b)<<endl;
		m=2;//?????
		i++;
	}
   return 0;
}