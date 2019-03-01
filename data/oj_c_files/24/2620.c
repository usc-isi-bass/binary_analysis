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
	char word[201][30]={0};
	int i,j,n,a[201]={0},flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",word+i);
		a[i]=strlen(*(word+i));
	}
	for(i=0;i<n;i++){
		flag=0;
		for(j=0;j<n;j++){
			if(*(a+i)<*(a+j)){
				flag=1;
				break;
			}
		}
		if(flag==1) continue;
		else if(flag==0){
			printf("%s\n",*(word+i));
			break;
		}
	}
	for(i=0;i<n;i++){
		flag=0;
		for(j=0;j<n;j++){
			if(*(a+i)>*(a+j)){
				flag=1;
				break;
			}
		}
		if(flag==1) continue;
		else if(flag==0){
			printf("%s\n",*(word+i));
			break;
		}
	}
}