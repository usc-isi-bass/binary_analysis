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
	int a[1001],n,i,j,k,vis[1001];
	char c;
	n = 1;
	scanf("%d",&a[n]);
	while (scanf("%c",&c),c ==','){
		n ++;
		scanf("%d",&a[n]);
	}
	for (i = 0;i <= 1000;i++) vis[i] =0;
	for (i = 1;i <= n;i++){
		scanf("%d",&k);scanf("%c",&c);
		for (j = a[i];j <k;j++) vis[j]++;
		}
	k = 0;
	for(i = 0;i<= 1000;i++)
		 if (vis[k] < vis[i]) k = i;
	cout<<n<<' '<<vis[k]<<endl;
	return 0;
}