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
	int count[128]={0};
	int i,order,c=0;
	char s[301];
	scanf("%s",s);
	for(i=0;s[i];i++){
		if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')){
		order=(int)s[i];
		count[order]++;
		}
	}
	for(i=0;i<128;i++){
		if(count[i]){
			printf("%c=%d\n",i,count[i]);
			c++;
		}
	}
	if(c==0) printf("No\n");
	return 0;
}