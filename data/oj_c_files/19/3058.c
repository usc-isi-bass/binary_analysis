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
	char buf[1000];
	char key[100];
	char temp[100];
	char rep[100];
	int i,j,n,w;
	cin.getline(buf,1000,'\n');
	cin>>key>>rep;
	i=0;
	w=0;
	while(1)
	{
		for(j=0;buf[i]!=' '&&buf[i]!=0;j++,i++)
			temp[j]=buf[i];
		temp[j]=0;
		n=strcmp(temp,key);
		if(w!=0)
				cout<<' ';
		if(n==0)
		{
			
			cout<<rep;
		}
		else
			cout<<temp;
		w++;
		if(buf[i]==0)
			break;
		i++;
	}
	cout<<endl;
	return 0;
}
