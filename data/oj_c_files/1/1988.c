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

int dfs(int k, int b) {
  int ret=(k==1),i;
  for (i=b;i<=k;i++)
	  if (k%i==0)
		  ret+=dfs(k/i,i);
  return ret;
}
int main() {
	int n, k;
	cin>>n;
	for (int i=1;i<=n;i++) {

		cin>>k;
		cout<<dfs(k,2)<<endl;
	}
	return 0;
}

