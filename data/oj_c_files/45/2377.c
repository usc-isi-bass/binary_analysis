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
	char zfc1[51],zfc2[51];
	int k1,k2,i,j,e,c;
	c=0;
	scanf("%s%s",zfc1,zfc2);
	k1=strlen(zfc1);
	k2=strlen(zfc2);
	for(i=c;i<k2;i++){
		e=0;
		for(j=0;j<k1;j++){
			if(j==0){c=i;}
			if(zfc2[i]==zfc1[j]){
				e++;
				i++;
			}else{break;}
		}if(e==k1){printf("%d",i-k1);break;}
	}
	return 0;
}