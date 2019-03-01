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

main(){
	int n,i,money;
	scanf("%d",&n);
	money=n;

	for(i=0;money>0;i++){
		money-=100;
	}
	if(money<0){
		money+=100;
		i--;
	}
	printf("%d\n",i);

	for(i=0;money>0;i++){
		money-=50;
	}
	if(money<0){
		money+=50;
		i--;
	}
	printf("%d\n",i);

	for(i=0;money>0;i++){
		money-=20;
	}
	if(money<0){
		money+=20;
		i--;
	}
	printf("%d\n",i);

	for(i=0;money>0;i++){
		money-=10;
	}
	if(money<0){
		money+=10;
		i--;
	}
	printf("%d\n",i);

	for(i=0;money>0;i++){
		money-=5;
	}
	if(money<0){
		money+=5;
		i--;
	}
	printf("%d\n",i);
	printf("%d\n",money);
	return 0;
}