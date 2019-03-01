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
	int n,e,j=0,i,k,s,x=0;
	int a[500],b[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		s=a[i]%2;
		switch(s){
		case 0:
			break;
		case 1:
			b[j]=a[i];
			j++;
			x++;
			break;
		}
	}
	for(k=1;k<=x;k++){
		for(j=0;j<x-k;j++){
			if(b[j]>b[j+1]){
				e=b[j];
				b[j]=b[j+1];
				b[j+1]=e;
			}
		}
	}
	for(j=0;j<x-1;j++){
		printf("%d,",b[j]);
	}
	printf("%d",b[x-1]);
	return 0;
}