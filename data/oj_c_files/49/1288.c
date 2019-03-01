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


int main() {
    char a[600];
    cin>>a;
    int l,i,j,start,num;
    char box1[600],box2[600];
    for(l=2;l<=strlen(a);l++)
    {
    	for(start=0;start<=strlen(a)-l;start++)
    	{
    		memset(box1,600,'\0');
    		    		memset(box2,600,'\0');
    		num=0;
    		for(i=start;i<start+l;i++)
    		{
    			box1[num++]=a[i];
    		}
    		for(i=0;i<l;i++)
    		{
    			box2[i]=box1[l-1-i];
    		}
    		for(i=0;i<l;i++)
    		{
    			if(box1[i]!=box2[i])
    				break;
                if(i==l-1)
                {
                	for(j=0;j<l;j++)
                	{
                		cout<<box1[j];
                	}
                	cout<<endl;
                }
    		}

    		memset(box1,600,'\0');
    		memset(box2,600,'\0');
    	}
    }
	return 0;
}