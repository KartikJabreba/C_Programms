#include <stdio.h>
#include<stdbool.h>
#include<math.h>
bool isPrime(int num){
    int i;
    for(i=2;i<sqrt(num);i++){
        if(num%i==0) return false;
    }
}
void main(){
    int num;
    scanf("%d", &num);
    if(isPrime(num)){
        printf("num is prime");
    }
    else{
        printf("num is not prime");
    }
}
