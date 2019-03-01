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
    int i,n,m,flag,a;
	scanf("%d",&n);
	for (i=0; i<n; i++){
		flag=1;
		scanf("%d",&m);
		for (int j=0;j<m; j++){
			scanf("%d",&a);
			if (((a+j*3)>=60)&&(flag)){
				flag=0;
				printf("%d\n",60-3*j);
			}else if (((a+j*3+3>=60))&&(flag)){
				flag=0;
				printf("%d\n",a);
			}
		}
		if (flag) {
			printf("%d\n",60-3*m);
		}
	}
	return 0;
}
