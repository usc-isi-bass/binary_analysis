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
	int pingjun[100];
	int pingyi[100];
	int jiangjin[100];
	int lunwen;
	char xingming[100][21];
	char ganbu;
	char xibu;
	int jiangjinzongshu=0;
	for(int i=0;i<n;i++){
		jiangjin[i]=0;
		scanf("%s %d %d %c %c %d\n",xingming[i],&pingjun[i],&pingyi[i],&ganbu,&xibu,&lunwen);
		if(pingjun[i]>80&&lunwen>=1){
			jiangjin[i]+=8000;
		}
		if(pingjun[i]>85&&pingyi[i]>80){
			jiangjin[i]+=4000;
		}
		if(pingjun[i]>90){
			jiangjin[i]+=2000;
		}
		if(pingjun[i]>85&&xibu=='Y'){
			jiangjin[i]+=1000;
		}
		if(pingyi[i]>80&&ganbu=='Y'){
			jiangjin[i]+=850;
		}
		jiangjinzongshu+=jiangjin[i];
	}
	int m=0;
	for(int r=0;r<n;r++){
		if(jiangjin[r]>jiangjin[m]){
			m=r;
		}
	}
	printf("%s\n%d\n%d\n",xingming[m],jiangjin[m],jiangjinzongshu);
    return 0;
}