#include <stdio.h>
// python'a çevir

int factorialFor(int number);
int factorialWhile(int number);
int factorialRecursive(int number); //loop yok, içerde değişken tanımlanmaz , //base case

int main(){

    int factorial_5 = factorialFor(5);
    printf("faktorial %d\n", factorial_5);
    int factorial_6 = factorialWhile(6);
    printf("faktorial %d\n", factorial_6);
    int factorial_7 = factorialRecursive(7);
    printf("factorial %d\n", factorial_7);
   
    int fibonacci = fibonacciFor(7);
    printf("fibonacci %d\n", fibonacci);
    int fibonacci_o = fibonacciWhile(7);
    printf("fibonacci %d\n", fibonacci_o);
    int fibonacci_r = fibonacciRecursive(7);
    printf("fibonacci %d\n", fibonacci_r);
    
    return 0;

}

int factorialFor(int number){
    
    if(number < 0){
        return 0;
    }
    if(number == 0){
        return 1;
    }
    int result = 1;
    for (int i = 1; i <= number; i++){
        result = result * i;

    }
    return result;
}

int factorialWhile(int number){

    int result = 1;
    while(number > 0){
        result *= number;
        number --;
        if(number == 1){
            break;
        }
    }
    return result;
}

int factorialRecursive(int number){
    //Base Case
    if(number == 1 || number == 0){
        return 1;
    }
    return number * factorialRecursive(number - 1);
    
}

int fibonacciFor(int number){

   int first_num = 1;
   int second_num = 1;
   int result = 0;
   if(number == 1 || number == 2){
        return 1;
    }
    for(int i = 3; i <= number; i++){
        result = first_num + second_num;
        first_num = second_num;
        second_num = result;
    }
    return result;

}

int fibonacciWhile(int number){ 

    int a = 1, b = 1, result = 0;
    if(number == 1 || number == 2){
        return 1;
    }

    while(number >= 3){
        result = a + b;
        a = b;
        b = result;
        number--;

    } return result;

}

// bilgisayar sonsuz döngüyü anlayamıyor 

int fibonacciRecursive(int number){

    //Base Case
    if(number == 1 || number == 2){
        return 1;
    }
    return fibonacciRecursive(number - 1) + fibonacciRecursive(number - 2);
    
}


