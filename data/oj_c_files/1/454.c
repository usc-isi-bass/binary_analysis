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

int f(int a,int min);//???a???????min?????????
int f(int a,int min)
{
if(a < min){
return 0;
}
int result = 1;
for(int i = min;i*i<=a;i++){
if(a % i == 0){
result += f(a/i,i);//???? ??????????a/i?i????????i???????
}
}
return result;
}
int main(){
	int n,k;
	cin>>n;
	while(n>0)
	{
		cin>>k;
		cout<<f(k,2)<<endl;//????
		n--;
	}
}
