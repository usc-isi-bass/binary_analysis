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
 * ?????.cpp
 *
 *  Created on: 2011-11-23
 *      Author: ???
 */

int m,n,k=0;//??????
int emptyOverone(int apple,int plate);//???????
int AllFull(int apple,int plate){//??????????????
	if(apple<plate) return 0;//????
	if(plate==apple) return 1;
	/*?(apple>plate)????*/ return AllFull(apple-plate,plate)+emptyOverone(apple-plate,plate);
}
int emptyOverone(int apple,int plate){//???????????????
	if(plate==1) return 0;//??
	/*?(apple<plate)????*/ return AllFull(apple,plate-1)+emptyOverone(apple,plate-1);
}

int main(){//???
	int zushu=0;
	cin>>zushu;
	int shuchu=0;
	while(zushu>0){//???????
		cin>>m>>n;
		shuchu+=emptyOverone(m,n)+AllFull(m,n);//??????
		cout<<shuchu<<endl;//??
		zushu--;
	shuchu=0;}
	return 0;
}

