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

int main(int argc,char*argv[])
{
	int n,i,m=0,t=0;
	char word[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",word);
		t+=strlen(word);
		m++;
		if(m==1){
			printf("%s",word);
		}else{
			if((t+m-1)<=80){
				printf(" ");
				printf("%s",word);
			}else{
				printf("\n");
				printf("%s",word);
				m=1;
				t=strlen(word);
			}
		}
	}
	return 0;
}