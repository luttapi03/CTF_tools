#include <stdio.h>

void decimalTobinary(int n);


int main(){

    int decimalNum = 0;

    printf("Enter the decimal number: \n");
    scanf(" %d", &decimalNum);
    
    if(decimalNum < 0){
        printf("You can't convert Negative numbers to binary\n");
    }
    else{
        decimalTobinary(decimalNum);
    }

    printf("Program run successfully.\n");


    return 0;
}

void decimalTobinary(int n){

    int binaryNum[32];
    int i = 0;

    if(n == 0){
        printf("Binary: 0\n");
        return;
    }

    while(n > 0){
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }

    printf("Binary representation: \n");
    
    for(int j = i - 1; j >= 0; j--){
        printf("%d", binaryNum[j]);
    }
    printf("\n");

}
