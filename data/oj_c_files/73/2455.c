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
hw.cpp
????yang?
???????
???10.28
*/
int main()
{
	int a[6][6],s[6]={1,1,1,1,1,1},n[6]={1,1,1,1,1,1},h=0,l=0;//????????????s[]??n[]????h??l
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			cin>>a[i][j];
		}
	}//????
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			if(a[i][j]>a[i][s[i]])
			{s[i]=j;}
			if(a[n[j]][j]>a[i][j])
			{n[j]=i;}
		}
	}//?????????????
	for(int i=1;i<=5;i++)
	{
		if(s[n[i]]==i)//????
		{h=n[i];l=i;
		break;}
	}//????
	if(h*l==0) cout<<"not found"<<endl;//???????not found
	else cout<<h<<" "<<l<<" "<<a[h][l]<<endl;//?????????
	return 0;
}