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

int n,t,cnt;
void f(int left,int last){
	if(left<last) {if(left==1) cnt++;return;}
	for (int i=last;i<=left;i++) if(left%i==0) f(left/i,i);
}
int main(){
	scanf("%d",&t);
	while (t--){
		scanf("%d",&n);
		cnt=0;f(n,2);
		printf("%d\n",cnt);
	}
	return 0;
}
