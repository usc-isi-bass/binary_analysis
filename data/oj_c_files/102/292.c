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

int main()
{
	int n,i,a=0,b=0,j;
	char s[20];
	double m[1000],w[1000],t=1.50,z;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %lf",s,&t);
		if(s[0]=='m'){
			m[a]=t;
			a++;
		}else if(s[0]=='f'){
			w[b]=t;
			b++;
		}
	}



	for(i=1;i<a;i++){
		for(j=0;j<a;j++){
			if(m[j]<m[j+1]){
				z=m[j];
				m[j]=m[j+1];
				m[j+1]=z;
			}
		}
	}

	for(i=1;i<b;i++){
		for(j=0;j<b;j++){
			if(w[j]<w[j+1]){
				z=w[j];
				w[j]=w[j+1];
				w[j+1]=z;
			}
		}
	}


	for(i=a-1;i>=0;i--){
		printf("%.2lf ",m[i]);
	}


	for(i=0;i<b;i++){
		if(i<b-1){
			printf("%.2lf ",w[i]);
		}else if(i==b-1){
			printf("%.2lf",w[i]);	
		}
	}

	return 0;
}
