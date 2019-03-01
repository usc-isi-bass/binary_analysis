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


int prime(int k){
	if(k==2)return 1;
	int indct=1;
	int i;
	for(i=2;i<k;i++){
		if(k%i==0){
			indct=0;
			break;
		}
	}
	return indct;
}

int main()
{
	int n;
	scanf("%d",&n);
	if(n==1||n==2||n==3||n==4)printf("\nempty");
	int indct[10000]={0,0,1};
	int i;
	for(i=2;i<=n;i++){
		if(prime(i)==1)indct[i]=1;
	}
	int found=0;
	for(i=2;i<=n-2;i++){
		if(indct[i]==1&&indct[i+2]==1){
			printf("\n%d %d",i,i+2);
			found=1;
		}
	}
	//if(found==0)printf("\nempty");
	return 0;
}
