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


int fun(int m,int n){
    //m????n????

	//??????????????????????;
	if (m>sqrt(n)) return 0;
    //????????????
	if (n%m==0) return fun(m+1,n)+fun(m,n/m)+1;
	else return fun(m+1,n);
    //????????????????????????????????????????+1?
	//??????????+1
}
//????????????
main(){
	int i,x,y;
	cin>>x;
	for (i=1;i<=x;i++){
	cin>>y;
	cout<<fun(2,y)+1<<endl;//??a=a???
	}
	return 0;
}