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
	int i,j,n,k=1;
	cin>>n;//?????n
	int p[50];
	memset(p,0,200);//????
	p[0]=1;
	for(i=0;i<n;i++){
		for(j=0;j<50;j++){
		p[j]=p[j]*2;
	   }//?????
		for(j=0;j<50;j++){
			if(p[j]>=10){
				p[j]=p[j]%10;
				p[j+1]=p[j+1]+1;
			}//?????2????????1
		}
	}
	for(i=49;i>=0;i--){
		if(p[i]==0 && k==1){
			continue;
		}//??????0
		if(p[i]!=0)k=0;
		cout<<p[i];
	}//??????p
	return 0;
}//?????
