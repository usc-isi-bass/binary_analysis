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

// 3???????.cpp : Defines the entry point for the console application.
// ???????????????
int main()
{
	int A,B,C;                             //????A?B?C????A?B?C?????1??????
	int words[4];                          //???? words[4]???A?B?C??????
	char a[4];                             //?????a[4]
	for(A=1;A<=3;A++)                      //for????
	{
		for(B=1;B<=3;B++)
		{
			if(A==B)
				continue;
			C=6-A-B;
			words[1]=(B>A)+(A==C);                           //words[1]?A????
			words[2]=(A>B)+(A>C);                            //words[2]?B????
			words[3]=(C>B)+(B>A);                            //words[3]?C????
			if(!((A>B&&words[1]<=words[2])||(A>C&&words[1]<=words[3])||(B>C&&words[2]<=words[3])||(B>A&&words[2]<=words[1])||(C>B&&words[3]<=words[2])||(C>A&&words[3]<=words[1]))==0)
				//????????????????????
				a[A]='A';
			a[B]='B';
			a[C]='C';
			if((words[1]+A==3)&&(words[2]+B==3)&&(words[3]+C==3))            //?????????????3
			for(int i=1;i<=3;i++)                                        //????for??????
				cout<<a[i];
		}
	}
	return 0;

}