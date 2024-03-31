#include <stdio.h>
int main(){
    int num, temp, rem, fact, sum, i;
    scanf("%d", &num);
    sum = 0;
    temp = num;
   
    while(temp != 0){
        rem = temp % 10;
        fact = 1;
        for(i = 1; i <= rem; i++){
            fact = fact * i;
        }
        sum = sum + fact;
        temp = temp/10; 
    }

    if(sum == num){
        printf("strong Number");
    }else{
        printf("Not a strong Number");
    }
}