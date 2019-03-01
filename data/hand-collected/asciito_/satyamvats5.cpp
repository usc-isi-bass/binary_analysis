
#define max 100
int atoi1(char C[max])
 {
  int i=0,sign; long n=0;
   sign= (C[i]=='-')? -1 : 1 ;
 if(C[i]=='+'||C[i]=='-')
     i++;
  while(C[i]!='\0')
  {
          n=n*10+(C[i]-'0');
      i++;
  }
 
 return n*sign;

}