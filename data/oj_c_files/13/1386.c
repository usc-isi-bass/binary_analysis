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
	int i,n,t[20000],a,s[100];
	scanf("%d",&n);
	for(i=0;i<100;i++){
		s[i]=0;
	}
	for(i=0;i<n;i++){
		scanf("%d",&t[i]);
		if(s[t[i]]==0){
			s[t[i]]=1;
		}else if(s[t[i]]==1){
			t[i]=101;
		}
		
	}
	
	for(i=0;i<n;i++){
		if(t[i]!=101){
			a=i;
			printf("%d",t[i]);
			break;
		}
	}

	for(i=a+1;i<n;i++){
		if(t[i]!=101){
			printf(" %d",t[i]);
		}

	}
	return 0;
}