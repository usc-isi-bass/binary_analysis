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
	

	int num[26]={0};
	char zfc[LEN];
	int len,i,flag;
	scanf("%s",zfc);
     len=strlen(zfc);
	for(i=0;i<len;i++){
		if(zfc[i]>='a'&&zfc[i]<='z'){
			num[zfc[i]-'a']++;
		}
	}
    flag=1;
	for(i=0;i<26;i++){
		if(num[i]!=0){
			printf("%c=%d\n",'a'+i,num[i]);
			flag=0;
		}
	}
	if(flag){
		printf("No");
	}
    
	return 0;

}
