#include <stdio.h>
int main(){
    int num, temp, sum = 0, rem;
    printf(" Enter Number");
    scanf("%d", &num);

    temp = num;
    while(temp != 0){
           rem = temp % 10;
           sum = sum + rem * rem * rem;
           temp = temp / 10;
    }
    if(sum == num){
        printf("Armstrong Number");
    }else{
        printf("Not Armstrong Number");
    }

}