#include <stdio.h>

/*int sum(int num1, int num2){
   return num1 + num2;
}
int multi(int num1, int num2){
    return num1 * num2;
}

int main(){

    /*int num1 = sum(2, 3);
    int num2 = multi(4, 5);

    printf("sum is %d",sum);
    printf("multi is %d",multi);*/

//void result(char str[]);

int main() {

   char str[] = "abcdef";

   /*for( int i = 0; i <= 5; i++){
    printf("%c",str[i]);
   }*/

   int j = 0;
   while(j<=5){
      printf("%c \n", str[j]);
      j++;
   }
    return 0;
}
