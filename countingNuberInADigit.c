#include <stdio.h>
int main(){
    int num, temp, count;
    scanf("%d", &num);
    
    temp = num;

    count = 0;
    while(temp != 0){
        temp = temp/10;
        count++;
    }

    printf("Counting Number = %d\n", count);
}
