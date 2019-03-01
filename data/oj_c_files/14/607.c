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
 * mark.cpp
 *
 *  Created on: 2011-12-9
 *      Author: admin
 */
struct student{
	int id;
	int chi;
	int math;
};
struct maxer{
	int id;
	int mark;
};
int main(){
	int n,i,j;
	struct student a[100001],temp;
	struct maxer max,top[3];                         //top3????
	cin>>n;
	for (i=1;i<=n;i++){
		cin>>a[i].id>>a[i].chi>>a[i].math;
	}
	for (i=1;i<=3;i++){                              //????
		max.mark=0;
		for (j=i;j<=n;j++){
		if 	(a[j].chi+a[j].math>max.mark){
			max.id=a[j].id;
			max.mark=a[j].chi+a[j].math;             //?????
		}
		}
		top[i-1]=max;                                //????????????????????????
		temp=a[i];
		a[i]=a[max.id];
		a[max.id]=temp;
	}
	for (i=0;i<=2;i++){
		cout<<top[i].id<<' '<<top[i].mark;
		if (i!=2)cout<<endl;
	}
return 0;
}
