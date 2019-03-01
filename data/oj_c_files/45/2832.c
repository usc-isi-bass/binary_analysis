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
	int n,i,j,k,t,len;
	char s[50];
	char w[50];
	scanf("%s%s",s,w);
	k=0;
	int ans;
	len=strlen(s);
	while(1){
		ans=1;
		for(i=0;i<len;i++){
			if (s[i]!=w[i+k]){
				ans=0;
			}
		}
		if(ans==1){
			break;
		}
		k++;
	}
	printf("%d",k);
	
	
	return 0;


}