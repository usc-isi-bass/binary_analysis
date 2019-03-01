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
	char mubiao[N];
	char zichuan[N];
	char replace[N];
	int i;
	int j=0;
	int flag;
	scanf("%s",mubiao);
    scanf("%s",zichuan);
	scanf("%s",replace);
	int a=strlen(mubiao);
	int b=strlen(zichuan);
	for(i=0;i<a;i++){
		if(mubiao[i]==zichuan[j]){
			j++;
		}else {
			j=0;
		}
		if(j==b){
		    flag=1;
			break;
		}
	}
	if(flag==1){
	for(j=b-1;j>=0;j--){
		mubiao[i]=replace[j];
		
		
		i--;
	}
	}
	printf("%s\n",mubiao);
	return 0;
}
