// Take a number from user and check if its a even number or odd number.

#include <stdio.h>

int main(){
    int num;
    scanf("%d", &num);

    if(num%2 == 0){
        printf("%d is Even Number\n", num);
    }else{
        printf("%d is Odd Number\n", num);
    }

    return 0;
}