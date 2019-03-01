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

const long maxn=25;

long n;
long a[maxn+10];

long ans;

void dfs(long h,long maxH,long now){
    long i;
    if(h==n+1){
	if(now>ans)ans=now;
	return;
    }
    dfs(h+1,maxH,now);
    if(a[h]<=maxH)dfs(h+1,a[h],now+1);
}

main(){
    long i;    
    scanf("%ld",&n);
    for(i=1;i<=n;i++){
	scanf("%ld",a+i);
    }
    dfs(1,1<<30,0);
    printf("%ld\n",ans);
    //getchar();getchar();
    return 0;
}
