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
	char str[11],substr[4];
	int i,num=0,j,h;
	while(scanf("%s%s",str,substr)!=EOF){
		int max=(int)str[0],len=strlen(str);
		for(i=1;i<len;i++){
			if(max<str[i]){
				max=(int)str[i];
				num=i;
			}
		}
		for(j=0;j<=num;j++){
			printf("%c",str[j]);
		}
		printf("%s",substr);
		for(h=num+1;h<len;h++){
			printf("%c",str[h]);
		}
		printf("\n");
	}
	return 0;
}