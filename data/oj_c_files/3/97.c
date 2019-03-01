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

int main(int argc, char* argv[])
{
	int a,b,c[1001],i,j,m=1;
	scanf("%d%d",&a,&b);
for(i=0;i<a;i++){
scanf("%d",&c[i]);
}
	for(i=0;i<a;i++){
		if(m==0) break;
for(j=0;j<a&&j!=i;j++){
	if(c[i]+c[j]==b) { printf("yes");
	m=0;
	break;
	}
	}}
	if(m==1) printf("no");
return 0;
}


