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
	char s1[35],s2[35];
	int n,i,l;
	scanf("%d",&n);
	gets(s1);
	while(n--){
		gets(s1);
		l=strlen(s1);
		if(s1[l-1]=='r'){
			for(i=0;i<l-2;i++){
				s2[i]=s1[i];
				if(i<l-3){
					printf("%c",s2[i]);
				}
				else
					printf("%c\n",s2[i]);
			}
		}
		else if(s1[l-1]=='y'){
			for(i=0;i<l-2;i++){
				s2[i]=s1[i];
					if(i<l-3){
					printf("%c",s2[i]);
				}
				else
					printf("%c\n",s2[i]);
			}
		}
		else if(s1[l-1]=='g'){
			for(i=0;i<l-3;i++){
				s2[i]=s1[i];
					if(i<l-4){
					printf("%c",s2[i]);
				}
				else
					printf("%c\n",s2[i]);
			}
		}

		


	}

	return 0;	
}