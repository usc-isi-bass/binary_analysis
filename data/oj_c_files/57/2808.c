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
	int n,len;
	int i=0;
	char wod[ROW][LEN];

	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",wod[i]);
	}
	for(i=0;i<n;i++){
		len=strlen(wod[i]);		
		if(wod[i][len-1]=='r'){
			wod[i][len-2]='\0';
		}else if(wod[i][len-1]=='y'){
			wod[i][len-2]='\0';
		}else if(wod[i][len-1]=='g'){
			wod[i][len-3]='\0';
		}
	}
	for(i=0;i<n;i++){
		printf("%s\n",wod[i]);
	}
	return 0;
}