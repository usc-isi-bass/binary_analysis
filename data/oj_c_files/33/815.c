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
	char zfc[256];
	char zfcsc[256];
	int  n;
	char a='A',t='T',g='G',c='C';
//	char x,y;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",&zfc);
		for(int j=0;j<256;j++){
			if(zfc[j]==a){
				zfcsc[j]=t;
			}
			else if(zfc[j]==t){
				zfcsc[j]=a;
			}
			else if(zfc[j]==g){
				zfcsc[j]=c;
			}
			else if(zfc[j]==c){
				zfcsc[j]=g;
			}
			else  if(zfc[j]=='\0'){
				zfcsc[j]='\0';
			}
		}
		printf("%s\n",zfcsc);
	}
	return 0;
}
