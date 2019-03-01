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
	int t;
	scanf("%d",&t);
	int i,j,k,len;
	char zfc[100000];
	for(i=0;i<t;i++){
		int NUM=0,num;
		//printf("hehe");
		scanf("%s",&zfc);
		len=strlen(zfc);		
		for(j=0;j<len;j++){
			num=0;
			for(k=0;k<len;k++){
				if(j==k) continue;
				else{
					if(zfc[j]!=zfc[k]) num++;
				}
				//printf("%d",num);
			}
			//printf("aha");
			if(num==len-1) {
				printf("%c\n",zfc[j]);
				//printf("hong");
				break;
			}
			else {NUM++;//printf("he");
		}
		}
		if(NUM==len) printf("no");
	}
	scanf("%d",&t);
	return 0;
}