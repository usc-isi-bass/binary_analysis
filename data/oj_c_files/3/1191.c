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

int main() {
	int n,k,i,j,a[1000],b[1000],f=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		b[i]=k-a[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
		if(a[i]==b[j]&&i!=j&&f==0){
			f=1;
			break;
		}
		}
		if(f==1)
		break;
	}
	if(f==1)
	printf("yes");
	else printf("no");
	return 0;
}
	
	