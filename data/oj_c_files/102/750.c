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
	int i,j;
	float g[40],m[40],f[40],r[40];
	float temp;
	int summ=0;
	int sumf=0;
	char sex[40][10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%f",sex[i],&g[i]);
	}
	for(i=0;i<n;i++){
		if(sex[i][0]=='m'){
			m[summ]=g[i];
			summ=summ+1;
		}
		else{
			f[sumf]=g[i];
			sumf=sumf+1;
		}
	}

	for(i=0;i<summ;i++){
		for(j=0;j<summ;j++){
			if(m[i]<m[j]){
				temp=m[i];
				m[i]=m[j];
				m[j]=temp;
			}
		}
	}
    for(i=0;i<sumf;i++){
		for(j=0;j<sumf;j++){
			if(f[i]>f[j]){
				temp=f[i];
				f[i]=f[j];
				f[j]=temp;
			}
		}
	}
	for(i=0;i<summ;i++)		
	printf("%.2f ",m[i]);
	for(i=0;i<sumf;i++)	{
		if(i!=sumf-1)
	printf("%.2f ",f[i]);
		else
printf("%.2f",f[i]);
	}

	return 0;
}