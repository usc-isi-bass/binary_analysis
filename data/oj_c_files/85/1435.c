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
	int n,i,j,len;
	char zf[21];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",zf);
		len=strlen(zf);
		for(j=0;j<len;j++){
			if(j==0){
				if((zf[j]<'a'||zf[j]>'z')&&zf[j]!='_'){
					if(zf[j]<'A'||zf[j]>'Z'){
						printf("no\n");
						break;
					}
				}
			}else{
				if((zf[j]<'a'||zf[j]>'z')&&zf[j]!='_'){
					if(zf[j]<'A'||zf[j]>'Z'){
						if(zf[j]<'0'||zf[j]>'9'){
							printf("no\n");
							break;
						}
					}
				}
			}
		}
		if(j==len)
			printf("yes\n");
	}
	return 0;
}
