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
	char a[30000],b[100],c[100];
	gets(a);
	int lenth,y=1,j,i,m,num,tag=0;
	lenth=strlen(a);
	gets(b);
	m=strlen(b);
	gets(c);
	for(i=0;i<lenth;i+=y){
		y=1;
		num=0;
		if(tag==0){
		for(j=0;j<m;j++){
			if(a[i+j]==b[0+j]){
				num++;
			}
		}
		if(num==m){
			printf("%s",c);
			y=m;
			tag=1;
		}
		else{
			printf("%c",a[i]);
		}
		}
		else
		{
			printf("%c",a[i]);
		}
	}
	return 0;
}

