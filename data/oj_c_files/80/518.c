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
	int y1,y2,m1,m2,d1,d2,n1=0,n2=0,n3=0,i,j;
	int mouth1[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};//??
	int mouth2[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
	int *p=mouth1;//????
	int *q=mouth2;
	*p=0;*(p+1)=31;*(p+2)=28;*(p+3)=31;*(p+4)=30;*(p+5)=31;*(p+6)=30;*(p+7)=31;*(p+8)=31;*(p+9)=30;*(p+10)=31;*(p+11)=30;*(p+12)=31;
	*q=0;*(q+1)=31;*(q+2)=29;*(q+3)=31;*(q+4)=30;*(q+5)=31;*(q+6)=30;*(q+7)=31;*(q+8)=31;*(q+9)=30;*(q+10)=31;*(q+11)=30;*(q+12)=31;//??
	cin>>y1>>m1>>d1;
	cin>>y2>>m2>>d2;
	for(i=y1;i<y2;i++){
		if((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0))n1+=366;
		else n1+=365;//???
	}
	if((y2% 4 == 0 && y2 % 100 != 0) || (y2 % 400 == 0))
		for(j=0;j<m2;j++)
			n2+=*(q+j);
	else
		for(j=0;j<m2;j++)
			n2+=*(p+j);
	if((y1% 4 == 0 && y1 % 100 != 0) || (y1 % 400 == 0))
			for(j=0;j<m1;j++)
				n2-=*(q+j);
		else
			for(j=0;j<m1;j++)
				n2-=*(p+j);//????????
	n3=d2-d1;//???
	int sum=n1+n2+n3;//??
	cout<<sum<<endl;//??
	return 0;
}


