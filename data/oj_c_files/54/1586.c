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

int n,k,m;
int judge(int i,int r){
	if (i==n-1) return r;
	if (r%(n-1)) return 0;
	return judge(i+1,(r/(n-1))*n+k);
}
int main(){
  cin>>n>>k;
  for (m=1;!judge(0,m*n+k);m++);
  cout<<judge(0,m*n+k);
}