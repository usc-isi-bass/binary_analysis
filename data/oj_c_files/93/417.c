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

int main()                                    //?????
{                      
	int i;                                    //??????i
	cin >>i;                                  //????i
	if(i%3==0)                                //??i?????
	{
		if(i%5==0)                            //??i??5??
		{
			if(i%7==0)                        //??i??7??
			{
				cout <<"3 5 7"<<endl;         //??“3 5 7”
			}
			else cout<<"3 5"<<endl;           //????“3 5”
		}
		else                                  //??i???5??
			if(i%7==0)                        //??i??7??
				cout <<"3 7"<<endl;           //??“3 7”
			else cout<<"3"<<endl;             //????“3”
	}
	else                                      //??i???3??
		if(i%5==0)                            //??i??5??
		{
			if(i%7==0)                        //??i??7??
			{
				cout <<"5 7"<<endl;           //??“5 7”
			}
		    else cout<< "5"<<endl;            //????“5”
		} 
		else                                  //??i???5??
			if(i%7==0)                        //??i??7??
				cout<<"7"<<endl;              //??“7”
			else cout<<"n"<<endl;             //????“n”
	return 0;                                 //????????????????????  
}