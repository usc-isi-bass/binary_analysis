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
	char c[100][10000],*pc[100];
	int t,i,j,k,len,num,n[26],*pn;
	pn=n;
	scanf("%d",&t);
	for(i=0;i<t;i++){
		pc[i]=c[i];
		scanf("%s",pc[i]);
	}
	for(i=0;i<t;i++){
		k=0;
		for(j=0;j<26;j++){
			*(pn+j)=0;
		}
		len=strlen(pc[i]);
		for(j=0;j<len;j++){
			num=*(pc[i]+j)-97;
			*(pn+num)+=1;
		}
		for(j=0;j<len;j++){
			num=*(pc[i]+j)-97;
			if(n[num]==1){
				printf("%c\n",*(pc[i]+j));
				k=1;
				break;
			}
		}
		if(k==0){
			printf("no\n");
		}
	}
	return 0;
}