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


int main(int argc, char* argv[])
{
	int i,j,k,count,n;
	scanf("%d\n",&n);
	char s[100000];
	for(i=0;i<n;i++){
		gets(s);
		int len=strlen(s);
		int sum=0;
		for(j=0;j<len;j++){
			int count=0;
			for(k=0;k<len;k++){
				if(s[j]!=s[k]){
					count++;
				}	
			}
			if(count==len-1){
				sum++;
			}
		}
		if(sum==0){
			printf("no\n");
		}
		else{
			for(j=0;j<len;j++){
				count=0;
				for(k=0;k<len;k++){
					if(s[j]!=s[k]){
						count++;
					}
				}
				if(count==len-1){
					printf("%c\n",s[j]);
					break;
				}
			}
		}
	}

	return 0;
}

