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
 *????1049 ????
 *?????
 *??: 2010-12-15
 */


int main (){
    int num,i;//??????
    int m,n=0,t=0;//m???????n?????t????
    int j[20];
    cin>>num;
    while(num>0){
    	cin>>m;
    	if(m==0) cout<<60<<endl;//????????60
    	else{
    		for(i=0;i<m;i++)
    			cin>>j[i];
    		for(i=0;i<m;i++){
    			if(j[0]>60){
    				cout<<60<<endl;
    				break;
    			}
    			n=j[i];
    			t=3*i+j[i];
    			if(t+3>60){//??????????60,????????
    				cout<<n<<endl;//??
    				break;//??
    			}
    			t=t+3;
    			if(i==m-1){
    				n=n+(60-t);//????????
    				cout<<n<<endl;//??
    				break;//??
    			}
    			else {
    				if(t+j[i+1]-j[i]>60){//????????????????
    					n=n+(60-t);
    					cout<<n<<endl;//??
    					break;//??
    				}
    			}
    		}
    	}
    	num--;
    }
	return 0;
}
