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
	int n;
	scanf("%d",&n);
	int i;
	for(i=0;i<n;i++){
		int year,month[2],dijitian=0;
		scanf("%d%d%d",&year,&month[0],&month[1]);
		int ex;
		if(month[0]>month[1]){ex=month[1];month[1]=month[0];month[0]=ex;}
		for(int k=month[0];k>=month[0]&&k<month[1];k++){
			if(k==1||k==3||k==5||k==7||k==8||k==10||k==12)dijitian+=31;
			if(k==4||k==6||k==9||k==11)dijitian+=30;
			if(k==2){if(year%4==0&&year%100!=0||year%400==0)dijitian+=29;else dijitian+=28;}
		}
		if(dijitian%7==0)printf("YES\n");
		else printf("NO\n");
	
	}
	return 0;
}	

