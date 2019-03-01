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
	int n;
	cin>>n;
	cin.get();
	while(n--){
		char str[100];
		cin.getline(str,100);
		int k=strlen(str),flag=0;
		if(str[0]>='0'&&str[0]<='9')//??????????????
			cout <<"no"<<endl;
		else{
			for(int i=0;i<k;i++){
				if(str[i]>='a'&&str[i]<='z')
					flag++;
				else if(str[i]>='A'&&str[i]<='Z')
					flag++;
				else if(str[i]>='0'&&str[i]<='9')
					flag++;
				else if(str[i]=='_')
					flag++;
				else 
					break;
			}
			if (flag==k)
				cout<<"yes"<<endl;
			else
				cout << "no" <<endl;
		}
	}
	return 0;
}
