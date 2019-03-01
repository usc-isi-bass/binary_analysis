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

int main(){
	int i,j,k,num,a[200],b[200],m=0,n=0;
	scanf("%d",&num);
	for(i=0;i<num;i++){
		scanf("%d %d",&a[i],&b[i]);
		if(a[i]==b[i]){
			m++;
			n++;
		}else if((a[i]==0&&b[i]==1)||(a[i]==1&&b[i]==2)||(a[i]==2&&b[i]==0))
			m++;
		else if((b[i]==0&&a[i]==1)||(b[i]==1&&a[i]==2)||(b[i]==2&&a[i]==0))
			n++;
	}
	if(m>n)
		printf("A");
	else if(m<n)
		printf("B");
	else
		printf("Tie");
	

	return 0;
}