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
	void handinhand(char xpy[],int num ,int left,char boy,char girl);
	char xpy[101]={'\0'},boy,girl;
	int num;
	cin.getline(xpy,100);//?????
	boy=xpy[0];//????
	for (num=0;xpy[num]!=0;num++) ;
	girl=xpy[num-1];//????
	handinhand(xpy,num,num,boy,girl);//????????
	return 0;
}
void handinhand(char xpy[],int num,int left,char boy,char girl)
{
	int i=0,j,lf=left;
	if (left>0)//??????0
	{
		for (i=0;xpy[i]!=girl;i++) ;//???????,?????????
		for (j=i-1;xpy[j]!=boy&&j>-1;j--) ;//????????????????????
		cout<<j<<' '<<i<<endl;//??2???
		lf=left-2;//??????
		xpy[i]=0;//??2???
		xpy[j]=0;//
		handinhand(xpy,num,lf,boy,girl);//?????????
	}
}