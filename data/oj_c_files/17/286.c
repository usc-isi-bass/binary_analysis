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
	char s[101];
	char kuohao[101]={0};
	int i,j,len;
	char ch;
	while(scanf("%s",s)>0){
		for(i=0; ;i++){
			if(s[i]=='(') kuohao[i]=1;
			else if(s[i]==')'){
				for(j=i;j>=0;j--){
					if(kuohao[j]==1){
						kuohao[j]=0;
						break;
					}
				}
				if(j<0) kuohao[i]=3;
			}
			else if(s[i]=='\0') break;
		}
	printf("%s\n",s);
	len=strlen(s);
	for(i=0;i<len;i++){
		if(kuohao[i]==0) printf(" ");
		else if(kuohao[i]==1) printf("$");
		else if(kuohao[i]==3) printf("?");
	} 
	printf("\n");
	for(i=0;i<len;i++) kuohao[i]=0;
	}
	return 0;
}
