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
	int x, y,i,d;
	scanf("%d",&y);
	char h[21];
	for(x=0;x<y;x++){
	scanf("%s",h);
         d=0;
  if((h[0]>='a'&&h[0]<='z')||(h[0]>='A'&&h[0]<='Z')||(h[0]=='_')){
             d++;
}
	for(i=1;i<strlen(h);i++){
		if((h[i]>='a'&&h[i]<='z')||(h[i]>='A'&&h[i]<='Z')||(h[i]=='_')||(h[i]>='0'&&h[i]<='9')){
			d++;
		}
	}
	if(d==strlen(h)){
		printf("yes\n");
	}else{
		printf("no\n");
	}
	}
	return 0;
}

