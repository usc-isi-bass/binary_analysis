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
	char m[600],z[256],t[256];
	scanf("%s%s%s",m,z,t);
	int len1=strlen(m);
	int len2=strlen(z);
	int i,j,c=1,flag=0; 
	for(i=0;i<len1;i++){
		int k=0;
		if(m[i]==z[k]){
            j=i;
			for(k=1;k<len2;k++){
				if(m[i+1]==z[k]){
					i++;
					c++;
				}
				else{
					break;

				}
			}
		}
		if(c==len2){
			break;
		}
	}
	if(c==len2){
		for(i=0;i<j;i++){
			printf("%c",m[i]);
		}
		printf("%s",t);
		for(i=j+len2;i<len1;i++){
			printf("%c",m[i]);
		}
	}
    else{
		printf("%s\n",m);
	}
	return 0;
}
				



