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
 * 1000012850_32.5.cpp
 *  ?????C????????
 *  Created on: 2010-11-24
 *      Author: william
 */
int main()           //???
{
	int n, i, j;  //??????
	char a[101][256]; //??????a[][]
    cin>>n;        //??n
	for(i=0;i<=n;i++)
    {
	 cin.getline(a[i],256);
    }                         //for??????n????
     for(i=1;i<=n;i++)       //for???????i????????????
     {
    	 int k;
    	 k=strlen(a[i]);     //k?a[i]???
    	 if((a[i][0]>='A'&&a[i][0]<='Z')||(a[i][0]>='a'&&a[i][0]<='z')||a[i][0]=='_')  //?????????????
    	 {
             int m=0;
    		 for(j=1;j<k;j++)  //for????????2???????????
    		 {
    			 if((a[i][j]>='A'&&a[i][j]<='Z')||(a[i][j]>='a'&&a[i][j]<='z')||a[i][j]=='_'||(a[i][j]>='0'&&a[i][j]<='9'))
    			     m++;
    				 else
    			 {
    				 cout<<'0'<<endl;
    				 break;      //???  ???0 ?????
    				 }
       		 }
    		 if(m==k-1)
    			 cout<<'1'<<endl;  //???????? ???1
    	 }
    	 else cout<<'0'<<endl;  //??????? ???0
     }
  return 0;  //??
}  //??


