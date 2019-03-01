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
	int n,i,j=0,k=0,a,b,p=0,q=0;
	double sz[50],f[50],m[50],e;
	char s[10];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s%lf",s,&(sz[i]));
		if(s[0]=='f'){
			f[j]=sz[i];
			j++;
			p++;

		}
		else if(s[0]=='m'){
			m[k]=sz[i];
			k++;
			q++;
		}
	}
		for(a=1;a<=q;a++){
			for(k=0;k<q-a;k++){
				if(m[k]>m[k+1]){
				e=m[k];
				m[k]=m[k+1];
				m[k+1]=e;
			}
			}
		}
		for(b=1;b<=p;b++){
			for(j=0;j<p-b;j++){
				if(f[j]<f[j+1]){
					e=f[j];
					f[j]=f[j+1];
					f[j+1]=e;
				}
			}
		}
		for(k=0;k<q;k++){
			printf("%.2lf ",m[k]);
		}
		for(j=0;j<p;j++){
			if(j<p-1)
			printf("%.2lf ",f[j]);
			else printf("%.2lf",f[j]);
		}
		return 0;
	}
