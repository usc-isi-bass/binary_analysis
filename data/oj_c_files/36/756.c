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
	char a[100],b[100];
	int i,atag[100],btag[100],alen,blen;
	scanf("%s",a);
	scanf("%s",b);
	alen=strlen(a);
	blen=strlen(b);
	for(i=0;i<100;i++){
		atag[i]=0;
		btag[i]=0;
	}
	if(alen==blen){
		for(i=0;i<alen;i++){
			atag[a[i]-'A']++;
		}
		for(i=0;i<blen;i++){
			btag[b[i]-'A']++;
		}
		for(i=0;i<100;i++){
			if(atag[i]==btag[i]){
				continue;
			}
			else break;
		}
		if(i==100){
			printf("YES");
		}
		else printf("NO");
	}
	else printf("NO");
	return 0;
}