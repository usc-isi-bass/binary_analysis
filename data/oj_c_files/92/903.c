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

int e[1000],f[1000];
int main() {
	int n, i, p, w, d, m;
	while(scanf("%d",&n)!=EOF) {
		if(n==0)break;
		m=-n;
		for(i=0;i<n;i++)scanf("%d",e+i);
		for(i=0;i<n;i++)scanf("%d",f+i);
		sort(e, e+n); sort(f, f+n);
		for(p=0;p<n;p++) {
			w=d=0;
			for(i=p;i<n;i++) {
				if(e[i]==f[i-p]) d=1;
				else if(e[i]>f[i-p]) w++;
				else goto cnt;
			}
			if(w-p>m) m=w-p;
			if(!d) break;
cnt:;
		}
		printf("%d\n", m*200);
	}
}
