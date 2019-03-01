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
	int a,b,c=0,d=0,n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d %d",&a,&b);
if((a-b)==0) continue;
else if((a-b)==-1)
c++;
else if((a-b)==2)
c++;
else d++;
	}
	if(c>d) printf("A");
	else if(c==d) printf("Tie");
	else printf("B");
	return 0;
}
	
