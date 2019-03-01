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
	char a[300]={0};
	int b[52],flag=0;
	int i=0,len;
	scanf("%s",a);
	len=sizeof(a);
	for(i=0;i<52;i++){
		b[i]=0;
	}
	
    
	for(i=0;i<len;i++){
		if(a[i]<='Z'&&a[i]>='A')b[a[i]-65]++;
		if(a[i]<='z'&&a[i]>='a')b[a[i]-71]++;
	}

	for(i=0;i<26;i++){
		if(b[i]!=0){
			printf("%c=%d\n",i+65,b[i]);
			flag=1;
		}
	}
    for(i=26;i<52;i++){
		if(b[i]!=0){
			printf("%c=%d\n",i+71,b[i]);
			flag=1;
		}
	}

	if(flag==0)printf("No");
	return 0;
}

