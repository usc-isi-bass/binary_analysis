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




int mycmp(const void* a,const void* b){
	return *((int*) b)-*((int*) a);
}

int match(int* tianji,int* king,int n){
	if(n==0)return 0;
	if(tianji[n-1]>king[n-1])return match(tianji,king,n-1)+200;//??
	else if(tianji[n-1]<king[n-1])return match(tianji,king+1,n-1)-200;//??
	else{//tianji[n-1]==king[n-1]
		if(tianji[0]>king[0])return match(tianji+1,king+1,n-1)+200;//??
		else{       
			if(tianji[n-1]==king[0])return 0;
			else return match(tianji,king+1,n-1)-200;//??
		}
	}
}


int main(){
	int tianji[MAX];
	int king[MAX];
	int n;
	int i;

	while(cin>>n){
		if(n==0)break;
		for(i=0;i<n;i++)cin>>tianji[i];
		for(i=0;i<n;i++)cin>>king[i];
		qsort(tianji,n,sizeof(int),mycmp);
		qsort(king,n,sizeof(int),mycmp);
		cout<<match(tianji,king,n)<<endl;
	}
	return 0;
}
