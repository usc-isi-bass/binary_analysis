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
?? 
??????????????????????????????????
????????80?????????????????????????????????????????????????????
 
???? 
?????????????????????????n??????????????????????????????????????40?????
 
???? 
??????????????????80???????????????????????????? 
*/


int main(){
	char word[40], *letterp;
	int letter= 0, words= 0, i= 0, wordlen= 0, linehead= 1, first= 1;
	
	cin>>words;

	for(i= 0; i< words; i++){
		if(letter== 0)
			linehead= 1;
		else
			linehead= 0;
//		cout<<" linehead= "<<linehead<<' ';
		wordlen= 0;
		cin>>word;
		letterp=word;
		for(letterp= word; *letterp!= '\0'; letterp++){
			wordlen++;
		}
//		cout<<"word= "<<word<<", its length is: "<<wordlen<<endl;
		letter+= wordlen;
		if(linehead== 0)
			letter++;
		if(letter> 80){
			cout<<endl<<word;
			letter= wordlen;
		}
		else{
			if(first== 1)
				cout<<word;
			else		
				cout<<' '<<word;
		}
		if(first== 1)
			first= 0;

	}

	return 0;
}