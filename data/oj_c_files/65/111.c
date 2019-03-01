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
	int n,a,b,A=0,B=0,tile=0,i;
	scanf("%d",&n);
	for (i=0;i<n;i++){
		scanf("%d %d",&a,&b);
		if (((a==0)&&(b==0))||((a==1)&&(b==1))||((a==2)&&(b==2)))
			tile+=1;
		else if (((a==0)&&(b==1))||((a==1)&&(b==2))||((a==2)&&(b==0)))
			A+=1;
		else B+=1;
    }
	if ((A==B)||(tile==n)) printf("Tie");
	else if (A>B) printf("A");
	else printf("B");
	return 0;
}