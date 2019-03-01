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

struct student
{
	int ID;
	int chinese;
	int math;
	int total;
}st[4],temp;
int main()
{
	int n,cnt=3;
	cin>>n;
	for(int i=0;i<3;i++)
	{
	  cin>>st[i].ID>>st[i].chinese>>st[i].math;
	  st[i].total=st[i].chinese+st[i].math;
	}
	do{
		cin>>st[3].ID>>st[3].chinese>>st[3].math;
	    st[3].total=st[3].chinese+st[3].math;
		cnt++;
		 for(int i=1;i<4;i++)
		 {
			 for(int j=0;j<4-i;j++)
			 {
			 if(st[j+1].total>st[j].total)
			 { 
				 temp=st[j];
				 st[j]=st[j+1];
				 st[j+1]=temp;
			 }
			 }
		 }}while(cnt<n);
    for(int i=0;i<3;i++)
	{
		cout<<st[i].ID<<" "<<st[i].total<<endl;
	}
	return 0;
}
