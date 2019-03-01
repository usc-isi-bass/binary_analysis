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
	int a[1000];
	int i=1,n=1;
	scanf("%d",&a[0]);
	while(getchar()!='\n'){
		scanf("%d",&a[i]);
		i++;
		n++;
	}
	int b[1000];
	i=1;
	scanf("%d",&b[0]);
	while(getchar()!='\n'){
		scanf("%d",&b[i]);
		i++;
	}

	int j;
	int max=0;
	for(j=1;j<=1000;j++){
		int sum=0;
		for(i=0;i<n;i++){
			if(a[i]<=j&&b[i]>j){
				sum++;
			}
		}
		if(sum>max){
			max=sum;
		}
	}
	cout<<n<<" "<<max<<endl;
	return 0;
}