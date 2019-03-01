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
	int t,num,x;
	char zf[100020];
	scanf("%d",&t);
	for (int i=0;i<t;i++){
	scanf("%s",zf);
	x=0;
	for (int j=0;j<strlen(zf);j++){
	          num=0;
			  for (int t=0;t<strlen(zf);t++) {
			           if (zf[t]==zf[j]&&(t!=j)){
			           num++;
					   break;
			           }	
			  }
			  if (num==0){
			  printf("%c\n",zf[j]);
			  x=1;
			  break;	
			  }
	}
	if (x==0){
	printf("no\n");
	}
	}
return 0;
}