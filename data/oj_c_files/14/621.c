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


int main(){
	struct student{		//????student
		int StudentNumber;	//??
		int ChineseGrades;	//????
		int MathGrades;	    //????
		int Total;			//???
	};
	struct student Stu[100000],sTemp;	//??????Stu?sTemp
	int n,i,j;	//n??????i?j?????
	cin>>n;	//??????
	for (i=0;i<=n-1;i++){	//????????????????????????
		cin>>Stu[i].StudentNumber>>Stu[i].ChineseGrades>>Stu[i].MathGrades;
		Stu[i].Total=Stu[i].ChineseGrades+Stu[i].MathGrades;
	}
	for (i=0;i<=2;i++){	//?????????????????????
		for (j=n-1;j>=i+1;j--){
			if (Stu[j].Total>Stu[j-1].Total){
				sTemp=Stu[j];
				Stu[j]=Stu[j-1];
				Stu[j-1]=sTemp;
			}
		}
	}
	cout<<Stu[0].StudentNumber<<" "<<Stu[0].Total;	//?????
	for (i=1;i<=2;i++){
		cout<<endl;
		cout<<Stu[i].StudentNumber<<" "<<Stu[i].Total;
	}
	return 0;
}
