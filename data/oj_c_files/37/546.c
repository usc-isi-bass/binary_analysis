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
	int t,i,j,len,num,tag;
	char k;
	char str[100000];
	scanf("%d",&t);
	getchar();
	for(i=0;i<t;i++){
		num=1;
		tag=1;
		gets(str);
		len=strlen(str);
		for(j=0;j<len;j++){
			for(k=j+1;k<len;k++){
				if(str[j]==str[k]&&str[j]>='a'&&str[j]<='z'){
					num=num+1;
					str[k]='A';
				}
			}
			if(num==1&&str[j]>='a'&&str[j]<='z'){
				printf("%c\n",str[j]);
				tag=0;
				break;
			}
			else{
				num=1;
			}
		}
		if(tag==1) printf("no\n");
	}
	return 0;
}
