 #include<stdio.h>
 int main(){
      char c, k=1,qian;
      int numchar = 0, numstr = 0, numline = 0;
      while((c = getchar()) != EOF){
           if(c > 127){
                numchar++;
                numstr++;
                k=1;
                qian=c;
           }
           if(c >= 65 && c <= 122 ){
                numchar++;
                k=1;
                qian=c;
           }
           if(c=='\n'){
                numline++;
                if(qian >= 65 && qian<= 122 ){
                     numstr++;
                }
           }
           if(c==' '&&k!=' '){
                k=' ';
                numstr++;
           }
           
      }
      printf("%d\n%d\n%d", numstr, numchar, numline);

 }
