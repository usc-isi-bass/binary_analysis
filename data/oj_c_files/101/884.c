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

//**********************************
//****       ??????      *****
//****        1200012718       *****
//**         ??????         **
//**********************************
int main()
{
	int x[3]={0,0,0};            //x1x2x3????abc????????012
	for (int a=0;a<3;a++)
		for (int b=0;b<3;b++)
			for (int c=0;c<3;c++)    //abc????0~2??
			{
				int o=(b>a);
				int p=(c==a);
				int q=(a>b);
				int r=(a>c);
				int s=(c>b);
				int t=(b>a);      //opqrst??6???????
				if (o+p+q+r+s+t==3&&a+o+p==2&&b+q+r==2&&c+s+t==2)//?? ????????????????????????????2???a???????????0??????2???2???????
				{
					x[0]=a;
					x[1]=b;
					x[2]=c;             //?abc??
				}
			}
	for (int i=0;i<3;i++)          //????????abc
		for (int j=0;j<3;j++)
		{
			if (x[j]==i)          //x[j]=???????char a=65+j?????abc
			{
				char a=65+j;
				cout<<a;
			}
		}

		return 0;
}