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
	int a,b,c,d,e,f,k;
	int sum=0;
	while(1){
		scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
		if(a==0&&b==0&&c==0&&d==0&&e==0&&f==0){
			break;
		}
		k=a;
		if(b<59){
			sum+=(60-c);
			b++;
			sum+=(60-b)*60;
			a++;
		}else{
			sum+=(60-c);
			b=0;
			a++;
		}
		sum=sum+e*60+f;
		d=d+12;
		sum=sum+(d-a)*3600;
		printf("%d\n",sum);
		sum=0;
	}

	
	return 0;
}

