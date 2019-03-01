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

int fenj(int x, int y) {
  int a=(x==1),i;
  for (i=y;i<=x;i++)//???2?????????
	  if(x%i==0)a=a+fenj(x/i,i);//?????????
  return a;
}
int main(){
	int k;
	cin>>k;
	int a[k];
	for(int i=0;i<k;i++)cin>>a[i];
	for(int i=0;i<k;i++)cout<<fenj(a[i],2)<<endl;
	return 0;
}