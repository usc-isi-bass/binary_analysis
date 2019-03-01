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
	char suoyou[53][35];
	int i;
	for(i=0;i<n;i++){
		scanf("%s",&suoyou[i]);
		if(suoyou[i][strlen(suoyou[i])-1]=='r')
			suoyou[i][strlen(suoyou[i])-2]='\0';
		else if(suoyou[i][strlen(suoyou[i])-1]=='y')
			suoyou[i][strlen(suoyou[i])-2]='\0';
		else if(suoyou[i][strlen(suoyou[i])-1]=='g')
			suoyou[i][strlen(suoyou[i])-3]='\0';
		printf("%s\n",suoyou[i]);
	}
	return 0;
}