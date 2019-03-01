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
	int n,k,p=0;
	scanf("%d%d",&n,&k);
	int a[n];
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(int j=0;j<n;j++){
		for(int s=j+1;s<n;s++)
		if(a[s]==k-a[j])p=1;
		}
	if(p==1)printf("yes");
	else printf("no");
	return 0;
}
 