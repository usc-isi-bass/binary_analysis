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

int yu7wuguan(int num);
int main(){
	int i,num;
	int result=0;
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		if(yu7wuguan(i)){
           result+=i*i;
		}
          }
		printf("%d",result);
			 return 0;
}
	int yu7wuguan(int num){
		if(num%7==0||num/10==7||num%10==7){
			return 0;
		}
		return 1;

	}