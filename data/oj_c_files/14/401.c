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
 * structure_1.cpp
 *
 *  Created on: 2010-12-29
 *      Author: ???
 *        ??? ????????
 */



int main(){
	int n,i,j;
	cin>>n;
	struct student{                  //?????????????????????
		int id;
		int cp;
		int mp;
		int tp;
	} stu[n],temp;
	for(i=0;i<n;i++){                //??????
		cin>>stu[i].id>>stu[i].cp>>stu[i].mp;
		stu[i].tp=stu[i].cp+stu[i].mp;
	}
	for(i=0;i<3;i++)               //?????????
		for(j=n-1;j>i;j--)
			if(stu[j].tp>stu[j-1].tp){
				temp=stu[j];
				stu[j]=stu[j-1];
				stu[j-1]=temp;
			}
	for(i=0;i<3;i++)                 //???????
		cout<<stu[i].id<<' '<<stu[i].tp<<endl;
	return 0;
}
