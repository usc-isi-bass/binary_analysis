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

int main(){         //???
	int i;               //??????i
	char str1[254],str2[254];      //??????
	cin.getline(str1,254);
	cin.getline(str2,254);             //??????
	for(i=0;(str1[i]!='\0')&&(str2[i]!='\0');i++){   //for????????
		if((str1[i]-str2[i]==0)||(str1[i]-str2[i]==32)||(str1[i]-str2[i]==-32))
			continue;
		else if(((str1[i]<str2[i])&&(str2[i]<91))||((96<str1[i])&&(str1[i]<str2[i])))
		{cout<<'<'<<endl;  //??????<
		break;}                     //????
		else if(str1[i]+32<str2[i]){cout<<'<'<<endl;
		break;}
		else cout<<'>'<<endl;         //??????>
		break;                //????
		}
	if((str1[i]-str2[i]==0)||(str1[i]-str2[i]==32)
			||(str1[i]-str2[i]==-32))
		cout<<'='<<endl;   //?????=
	return 0;       //?????????????????
}