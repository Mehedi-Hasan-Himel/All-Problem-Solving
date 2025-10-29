// Take a number from user and check if its a positive or negative number.

#include <stdio.h>

int main(){
    int num;
    scanf("%d" ,&num );
    if(num >= 0){
        printf("%d is Positive Number", num);
    }else{
        printf("%d is Negative Number", num);
    }


    return 0;
}