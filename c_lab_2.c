#include <stdio.h>


int main (){
 
    
    //int number1 = 10;
    //int number2 = 2;
    

    //int number1 = 10, number2 = 2;
    
    
    int number1 = 10, number2 = 2;


    int sum = number1 + number2;
    int modulo = number1 % number2;

    printf("Summation : %d, and Modulo: %d\n", sum, modulo);
    printf("Adress int: %d \n", &sum);
    printf("Adress hex: %x \n", &sum);

    

    
    int number1, number2 ;
    
    //printf("Number 1 : %d \n", number1);
    //printf("Number 2 : %d\n", number2);

    printf("Please give me number1: ");
    scanf("%d" ,&number1);
    printf("Please give me number2: ");
    scanf("%d" ,&number2);

    int sum = number1 + number2;
    int mod = number1 % number2;

    printf("Summation : %d, and Modulo : %d\n", sum, mod);
    
    
    
    // CHAPTER 3
    
    int a = 5;
    printf("%d\n", a);
    int b = a++;
    printf("a: %d, b: %d\n", a, b);
    int c = ++a;
    printf("a: %d\n", a);
    printf("b: %d\n", b);
    printf("c: %d\n", c);

    //int a = 5;
    //printf("a: %d\n", a);
    //int b = a++;
    //printf("b: %d\n", b);
    //int c = ++a;
    //printf("c: %d\n", c);
    


   for(int myVar = 0; myVar <= 10; myVar++){
        printf("myVar is: %d\n", myVar);
        printf("myVar is: %d\n", myVar);
    }
    // one statement var ise süslü parantez kullanmadan yazabilirim (yukarda tek satır printf olunca mesela)
    // ilk myVar'ı for loop'un içinde kabul eder diğerini etmez


    int age = 20;
    printf("Please give me the age: ");
    scanf("%d", &age);

    if (age >= 18){
        printf("You are an adult.\n");
    }
    else if (age < 16){
        printf("You cannot get moto DL.\n");
    }
    else {
        printf("You are a minor.\n");
    }
    
    int myVar = 0;
    while(myVar < 10) {
        if(myVar % 2 == 1){
        printf("myVar : %d\n", myVar);
        }else{
            break;
        }
        myVar++;
    }
    printf("myVar : %d\n", myVar);

    
    return 0;
}





