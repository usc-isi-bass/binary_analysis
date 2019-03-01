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
	int k, i, j, l, m, n;
	int	a[100][100]={0}, sum=0;
		
	scanf("%d",&k);  // k???
	
	for(i=0;i<k;i++){
		scanf("%d%d", &m, &n);  //?????m???n
		for(j=0;j<m;j++)
			for(l=0;l<n;l++)
				scanf("%d", *(a+j)+l );  // ????
		sum=0;
		if(m!=1){
			for(j=0; j<n; j++)
				sum = sum+ *(*a+j) + *(*(a+m-1)+j);  
		}
		else{
			for(j=0;j<n;j++)
				sum = sum + *(*a+j);  
		}
		for(j=1; j<m-1; j++)
			sum = sum + *(*(a+j))+*(*(a+j)+n-1);

		printf("%d\n",sum);
	}

    return 0;
}
