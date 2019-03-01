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

//?????????
//??????
int reverse(int num);
int main()
{
	int a[6],i;
	for(i=0;i<6;i++) cin>>a[i];
	for(i=0;i<6;i++){                         
		if(a[i]<0){                 //???????????????
			a[i]=0-a[i];
			cout<<"-";}
		reverse(a[i]);}             //?????
	return 0;
}

int reverse(int num)
{
	int a;
	if(num==0) cout<<num<<endl;                     //0??????0
	else{  
		a=num%10;                              //????0??
		while(a==0){num=num/10;
		a=num%10;}
		while(num!=0){                         //????????
			a=num%10;
			num=num/10;
			cout<<a;}
		cout<<endl;
}
return 0;
}