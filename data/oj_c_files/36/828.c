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

void main() 
{
	int n,i,j,k,l,m,len;
	char a[200],b[200]={0},c[200]={0};
	gets(a);
	len=strlen(a);
	for(k=0;k<len;k++){
		if(a[k]==' ')
			break;
	}
	for(i=0;i<k;i++){
		for(j=(k+1);j<len;j++){
			if(a[j]==a[i]){
				b[i]=1;
                                    a[j]=95;
                                     break;
			}
		}
	}
	l=0;
	for(i=0;i<k;i++){
		if(b[i]==0){
			
			break;
		}
	}
	if(i==k){
		l=1;
	}
		
	if((l==1)&&(k*2==(len-1))){
		printf("YES");
	}else{
		printf("NO");
	}
}