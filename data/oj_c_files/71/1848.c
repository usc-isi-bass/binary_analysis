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

//�???�????????????????????????????????????????????????????????????????????????????????????7?????????????????????????????????????????28????7???????4??????????????????????????????????????29??????????????????????
 
//???? 
//?????????n?n?200?? 
//??n??????????????????????????????????
 
//???? 
//???n???????????????????? 
//???????????????YES? 
//?????NO?
 
//???? 
//5
//1994 10 9
//1935 12 1
//1957 1 9
//1917 9 12
//1948 1 4
void main()
{
	int a,b,c,d,e,f,i,j,k,sum=0,x,n,ex;
	scanf("%d",&n);
	for(x=1;x<=n;x++){
	sum=0;
	scanf("%d%d%d",&a,&b,&e);
	d=a;
	c=f=1;
	if(b>e){
		ex=b;
		b=e;
		e=ex;
	}
	for(i=a;i<=d;i++)
	{
		if((i%4==0&&i%100!=0)||(i%400==0)) 
			sum=sum+366;
		else
			sum=sum+365;
	}
	for(j=1;j<=b-1;j++)
	{
		if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
			sum=sum-31;
		else if(j==4||j==6||j==9||j==11)
				sum=sum-30;
			else if((a%4==0&&a%100!=0)||(a%400==0))
					sum=sum-29;
				else
					sum=sum-28;
	}
	for(j=e+1;j<=12;j++)
	{
		if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
			sum=sum-31;
		else if(j==4||j==6||j==9||j==11)
				sum=sum-30;
			else if((d%4==0&&d%100!=0)||(d%400==0))
					sum=sum-29;
				else
					sum=sum-28;
	}
	j=e;
	if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
			sum=sum+f-31;
		else if(j==4||j==6||j==9||j==11)
				sum=sum+f-30;
			else if((j%4==0&&j%100!=0)||(j%400==0))
					sum=sum+f-29;
				else
					sum=sum+f-28;
	sum=sum-c;
	//printf("%d",sum);
	if(x==1)
		if(sum%7==0)
			printf("YES");
		else
			printf("NO");
	else
		if(sum%7==0)
			printf("\nYES");
		else
			printf("\nNO");
	}
}	
