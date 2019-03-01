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
	char zfc[50][33];
	scanf("%d",&n);
	for(int z=0;z<n;z++){
		scanf("%s",zfc[z]);
		if(zfc[z][strlen(zfc[z])-1]=='g'){
              zfc[z][strlen(zfc[z])-3]='\0';
		}else{
			zfc[z][strlen(zfc[z])-2]='\0';
		}	
	}
	for(int x=0;x<n;x++){
		printf("%s\n",zfc[x]);
	}
	

return 0;
}
