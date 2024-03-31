#include <stdio.h>
int main(){
    int num1, temp, rem, sum;
    scanf("%d", &num1);
    sum = 0;
    temp = num1;
    while(temp!=0){
        rem = temp%10;
        sum = sum + rem;
        temp = temp/10;
    }
    printf("sum = %d", sum);
    return 0;
}
