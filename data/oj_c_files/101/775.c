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

/*
 * ???020.cpp
 * Created on: 2012-10-14
 * Author: ???
 * ??????
 */
int main(){
	int A,B,C;              //??A B C???
	for(A=1;A<=3;A++){      //??A???
		for(B=1;B<=3;B++){  //??B???
			if (A!=B){      //?A B C????
				C = 6-A-B;     //??C???
				if ((B>A)+(C==A)+A==3 && (A>B)+(A>C)+B==3 && (C>B)+(B>A)+C==3){        //??????
					char m[3]={'A','B','C'},x;                                       //?????????X
					int a[3]={A,B,C},i,j,t;                                          //???????i j t
					for (j=0;j<2;j++)                                                //???2???
						for(i=0;i<2-j;i++)                                           //????2-j???
						if (a[i]>a[i+1])	{                                        //??????????
							t=a[i];a[i]=a[i+1];a[i+1]=t;                             //?????????????
							x=m[i];m[i]=m[i+1];m[i+1]=x;}                            //?????????
							cout<<m[0]<<m[1]<<m[2];                                  //?????
				}
			  }
			}
		  }

return 0;
}
