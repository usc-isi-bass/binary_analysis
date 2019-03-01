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

int main (){
	int n;
	int i,j;
	char a[32];
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%s",&a);
	    int num=strlen(a);
		if(((a[num-2]=='e')&&(a[num-1]=='r'))||((a[num-2]=='l')&&(a[num-1]=='y'))){
			for(j=0;j<num-2;j++){
				printf("%c",a[j]);
			}
			printf("\n");
		}else if((a[num-3]=='i')&&(a[num-2]=='n')&&(a[num-1]=='g')){
			for(j=0;j<num-3;j++){
				printf("%c",a[j]);
			}
			printf("\n");
		}else{
			printf("%s\n",a);
		}
	}
    return 0;
}
