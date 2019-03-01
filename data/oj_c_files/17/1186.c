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
	int n,i,j,k,len,e;
	char s[102];
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		scanf("%s",&s);
		len=strlen(s);
		printf("%s\n",s);
		for(j=0;j<len;j++){
			if(s[j]!='(' && s[j]!=')'){s[j]=' ';}
		}
		for(i=len-1;i>=0;i--){
			if(s[i]=='('){
				for(e=i+1;e<len;e++){
					if(s[e]==')'){
						s[i]=' ';s[e]=' ';break;}
				}
			}
		}
		for(j=0;j<len;j++){
			if(s[j]=='('){s[j]='$';}
			if(s[j]==')'){s[j]='?';}
		}
        printf("%s\n",s);
	}
	return 0;
}