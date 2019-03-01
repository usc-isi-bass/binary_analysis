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

int ans = 0;
void work(int p,int k)
{
	if(p == 1){
		ans ++;
		return ;
	}
	for(int i =k;i <= p;i ++){
		if(p % i == 0){
			work(p / i,i);
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	while(n--){
		ans = 0;
		int t;
		scanf("%d",&t);
		work(t,2);
		//ans = work(t);
		printf("%d\n",ans);
	}
	return 0;
}