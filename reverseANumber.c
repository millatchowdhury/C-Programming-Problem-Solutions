#include <stdio.h>
int main(){
    int num1, temp, rem, sum=0;
    printf("Enter A Number");
    scanf("%d", &num1);

    temp = num1;
    while(temp!=0){
        rem = temp % 10;
        sum = sum * 10 + rem;
        temp = temp / 10;
    }
    printf("Reverse Numer is = %d\n", sum);
    
    
}