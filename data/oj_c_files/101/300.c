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
	int a,b,c,A,B,C;
	for(A=1;A<=3;A++)
		for(B=1;B<=3;B++)
			for(C=1;C<=3;C++) //???????1????3??a,b,c????
			{
				a=(B>A)+(C==A);
				b=(A>B)+(A>C);
				c=(C>B)+(B>A);//??3??????
				a+b+c==3;
				if(A+a==3&&B+b==3&&C+c==3)//???????? ???????????????
				{
					if(A>B)
					{
						if(B>C){cout<<"CBA"<<endl;}
						else{cout<<"BCA"<<endl;}
					}
					else if(B>A)
					{
						if(A>C){cout<<"CAB"<<endl;}
						else{cout<<"ACB"<<endl;}
					}
					else if(C>A)
					{
						if(A>B){cout<<"BAC"<<endl;}
						else{cout<<"ABC"<<endl;}
					}        //????? ?? ???? 
				}
			}
			return 0;}