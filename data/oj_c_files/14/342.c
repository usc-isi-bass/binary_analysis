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
 * jiegou_1.cpp
 *
 *  Created on: 2011-1-2
 *      Author: Iris
 *      ????????
 * ????STUDENT_NUM????????�????�???? ?????????ID???????????
 * ???????????????????????????????
 */


int main(){
	int n,i;
	cin>>n;//??????
	struct student{
		int stuNo;
		int yuwen;
		int shuxue;
		int zongfen;
	} stu[n];//?????????????????????????t?????
	struct tri{
		int stuNo;
		int zongfen;
	} qian[3]={0,0,0,0,0,0};//??????????????????????
	for(i=0;i<n;i++){
		cin>>stu[i].stuNo;
		cin>>stu[i].yuwen;
		cin>>stu[i].shuxue;//????????????
		stu[i].zongfen=stu[i].yuwen+stu[i].shuxue;//?????????
	}
	for(i=0;i<n;i++){
		if(stu[i].zongfen>qian[0].zongfen){
			qian[2]=qian[1];
			qian[1]=qian[0];
			qian[0].stuNo=stu[i].stuNo;
			qian[0].zongfen=stu[i].zongfen;
			continue;
		}
		if(stu[i].zongfen>qian[1].zongfen){
			qian[2]=qian[1];
			qian[1].stuNo=stu[i].stuNo;
			qian[1].zongfen=stu[i].zongfen;
			continue;
		}
		if(stu[i].zongfen>qian[2].zongfen){
			qian[2].stuNo=stu[i].stuNo;
			qian[2].zongfen=stu[i].zongfen;
		}
	}//?????
	for(i=0;i<3;i++)
		cout<<qian[i].stuNo<<' '<<qian[i].zongfen<<endl;//????????????
	return 0;
}
