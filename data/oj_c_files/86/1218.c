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
int num,m,i,time[21],count[21];
cin>>num;
while(cin>>m)
{
	if(m==0)                                   //????m?1
		cout<<60<<endl;
	else if(m==1)
	{
	cin>>time[1];
	if(time[1]<=57)
		cout<<57<<endl;
	else if(time[1]>60)
		cout<<60<<endl;
	else 
		cout<<time[1]<<endl;
	}
	else
	{
     for(i=1;i<=m;i++)
     {
		 cin>>count[i];
		 time[i]=count[i]+3*i;
	 }
     if(time[m]<60)
	 {
	 cout<<60-3*m<<endl;
	 
	 }
	 else
	 {
	 i=1;
	 while(i<=m)
	 {
	 if(time[i]>=60)
	 {   
	 if(60-time[i-1]>count[i]-count[i-1])
		 cout<<count[i]<<endl;
	 else
		 cout<<60-time[i-1]+count[i-1]<<endl;
	 break;
	 }
	 else
		 i++;
		 
	 }
	 }
	 
	    
	}
}	 
return 0;
	 
}

     