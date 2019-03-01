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
	char str[256];
	char sub[256];
	char rep[256];
	scanf("%s%s%s",str,sub,rep);
	char zfc[2][256]={0};
         int a=strlen(str);
	int b=strlen(sub);
         int i;
         for(i=0;i<=(a-b);i++){
		int j;
		for(j=i;j<i+b;j++){
			if(str[j]!=sub[j-i]){
				break;
		         }
		}
		if(j==i+b){
			for(int m=0;m<i;m++){
				zfc[0][m]=str[m];
			}
			for(int n=i+b;n<a;n++){
				zfc[1][n-i-b]=str[n];
			}
			strcat(zfc[0],rep);
			strcat(zfc[0],zfc[1]);
			printf("%s\n",zfc[0]);
			break;
		}
	}
         if(i==(a-b+1)){
              printf("%s\n",str);
         }
	return 0;
}
