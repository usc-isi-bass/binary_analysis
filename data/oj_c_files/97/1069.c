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
	int sum,n1,n2,n3,n4,n5,n6;
	cin>>sum;
    n1=(sum-sum%100)/100;
	sum=sum%100;
	n2=(sum-sum%50)/50;
	sum=sum%50;
	n3=(sum-sum%20)/20;
	sum=sum%20;
	n4=(sum-sum%10)/10;
	sum=sum%10;
	n5=(sum-sum%5)/5;
	sum=sum%5;
	n6=sum%5;
	cout<<n1<<endl<<n2<<endl<<n3<<endl<<n4<<endl<<n5<<endl<<n6<<endl;
	return 0;
	

}