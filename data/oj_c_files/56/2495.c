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

int main()                                        //???
{                                                 //?????
	int a,b[5],i;                                 //????a,i???,??b[5]???
	cin>>a;                                       //????a
	b[0]=a%10;                                    //??b[0]??a????
	b[1]=((a-b[0])%100)/10;                       //??b[1]??a??????
	b[2]=((a-b[0]-10*b[1])%1000)/100;             //??b[2]??a??????
	b[3]=((a-b[0]-10*b[1]-100*b[2])%10000)/1000;  //??b[3]??a??????
	b[4]=((a-b[0]-10*b[1]-100*b[2]-b[3]*1000)%100000)/10000;       //??b[4]??a??????
	for(i=0;i<5;i++)                              //i???
	{
		if(b[i]!=0)                               //?????
	cout<<b[i];                                   //?i?????????b[i]
	}
	return 0;                                      //?????????????????
}                                                  //?????


