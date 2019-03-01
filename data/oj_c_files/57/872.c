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
	int n;
	scanf("%d",&n);
	int i,k,b;
	for(i=0;i<n;i++){
		char shuzu[40];
		scanf("%s",shuzu);
		b=strlen(shuzu);
		for(k=0;k<b;k++){
			if((shuzu[k]=='e'&&shuzu[k+1]=='r'&&shuzu[k+2]=='\0')||(shuzu[k]=='l'&&shuzu[k+1]=='y'&&shuzu[k+2]=='\0')||(shuzu[k]=='i'&&shuzu[k+1]=='n'&&shuzu[k+2]=='g'&&shuzu[k+3]=='\0')){
				shuzu[k]='\0';
			}
		}
		printf("%s\n",shuzu);
	}
	
	return 0;
}