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

void main()
{
	int n,i,j,max=0;
	scanf("%d",&n);
	int num[1000];
	int sum[26];
	for(i=0;i<26;i++){
		sum[i]=0;
	}
	char a[1000][27];
	for(i=0;i<n;i++){
		scanf("%d %s",&num[i],a[i]);
	}
	for(i=0;i<n;i++){
		for(j=0;a[i][j]!='\0';j++){
			sum[a[i][j]-'A']=sum[a[i][j]-'A']+1;
		}
	}
	for(i=1;i<26;i++){
		if(sum[i]>sum[max]){
			max=i;
		}
	}

	printf("%c\n",max+'A');
	printf("%d\n",sum[max]);
	for(i=0;i<n;i++){
		for(j=0;a[i][j]!='\0';j++){
			if(a[i][j]==max+'A'){
				printf("%d\n",num[i]);
				break;
			}
		}
	}
}

		
		
		
		
		
		
		
		
		
		
		
		
	



