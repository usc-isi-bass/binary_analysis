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


int main(int argc, char* argv[])
{   int a,b,c;

	int t=0;
	int aa[12]={31,0,31,30,31,30,31,31,30,31,30,31};
	scanf("%d%d%d",&a,&b,&c);
	for(int i =0;i<b-1;i++){
		t=t+aa[i];
	}
	if(b>2){
		if((a%4==0)&&((a%100)!=0)||(a%400==0))
		{
			t=t+29;
		}else{
			t=t+28;
		}
	}
	t=t+c;
    printf("%d",t);

	return 0;
}
