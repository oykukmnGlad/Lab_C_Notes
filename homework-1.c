/*
double =  float türünden daha yüksek bir hassasiyet ve genişlik sağlar,
genellikle 64 bit yer kaplar ve yaklaşık 15-16 basamak hassasiyet sunar.
*/

#include <stdio.h>
#include <stdbool.h>

int main(){

    printf("hello user!\n");

    char nick[10];

    printf("tell me your nick: ");
    scanf("%s", &nick);

    printf("okkey, hello %s!\n", nick);

    

    char lecture[] = "Intro to Programming";
    printf("%s\n", lecture);
    
    char lecturer[] = "Ali";
    printf("%s\n", lecturer);

    int number_of_students = 40;
    printf("%d\n", number_of_students);

    float average_age = 19.5;
    printf("%.1f\n", average_age);

    double average_quiz_notes = 0.2;
    printf("%.1lf\n", average_quiz_notes);

    bool can_they_pass = false;
    printf("%d\n", can_they_pass);

    {char can_they_pass[] = "geçebilirler!";
    printf("%s\n", can_they_pass);}

    // typelarını yazdırmadım!!!

    

    int number1;
    printf("give me the first number: ");
    scanf("%d", &number1);

    int number2;
    printf("give me the second number: ");
    scanf("%d", &number2);

    int sum;
    sum = number1 + number2;
    printf("total is: %d\n", sum);

    bool a = true;
    bool b = true;

    bool total_of_two_bool = a + b;
    printf("total bool: %d\n", total_of_two_bool);

    


    int a = 10;
    int b = 2;
    double c = 5.5; // float c = 5.5; ???
    char d[] = "sting bir şey";

    int mul = a * b;
    printf("mul: %d\n", mul);

    float float_div = a / c;
    printf("float div: %f\n", float_div);

    int int_div = a / b;
    printf("integer div: %d\n", int_div);

    

    bool x = true;
    bool y = true;
    bool z = false;

    if(x && y){
        printf("true\n");
    }

    if(x && z == false){
        printf("false\n");
    }

    if(y || z){
        printf("true\n");
    }

    if(!x || z == false){
        printf("false\n");
    }

    



    for(int i = 0; i <= 100; i+=2){
        printf("%d\n", i);
    }


    for(int k = 0; k <= 100; k++){
        if(k % 2 != 0){
            printf("%d\n", k);
        }
    }

    for(int j = 0; j <= 100; j++){
        if(j % 2 != 0){
            continue;
        }
    printf("%d\n", j);   
    }

    for(int l = 0; l <= 100; l++){
        if(l % 2 != 0){
            break;
        }
    printf("%d\n", l);
    }

    


    int num = 0;
    while(num <= 100){
        printf("%d\n", num);
        num += 2;
    }
   
    int num = 0;
    while(true){
        if(num % 2 == 0){
            printf("%d\n", num);
            /// num += 1 (kodun burda veya aşağıda olması aynı şey mi?)
        }num += 1;
        if(num == 101){
            break;
        }
    } 

    int num = 0;
    printf("number: %d\n", num);
    do{
        if(num <= 100){
            if(num % 2 != 0){
                printf("number: %d\n", num);
            }   num += 1;
        }
    }while(num <= 100);

    



    for(int i = 1; i < 10; i++){
        if(i >= 5){
            continue;
        }printf("%d\n", i);
    }

    for(int j = 1; j < 4; j++){
        for(int k = 1; k < 4; k++){
            for(int l = 1; l < 4; l++){
                printf("%d\n", j, "%d\n", k, "%d\n", l);
            }
        }

    }
    
    char x = 'x';
    char y = '=';
    

    for(int i = 1; i < 6; i++){
        for(int j = 1; j < 6; j++){
            int sum = i * j;
            printf("%d %c %d %c %d\t" , j, x, i, y, sum);
        }printf("\n");
    }   

    


    int how_much_money;
    printf("how much money do you have? ");
    scanf("%d", &how_much_money);

    int how_many_house;
    printf("how many house? ");
    scanf("%d", &how_many_house);

    char car[3];
    printf("you have a car!, yes/no? ");
    scanf("%s", &car);

    int money = 100000;
    int house = 5;
    /*
    if(how_much_money > money && how_many_house > money && car == "yes" || car == "Yes"){
        printf("you don't have to work all day long :)\n");
    }
    else if(how_much_money > 50000 && car == "yes" || "Yes"){
        printf("you have to work one day in a week :,)\n");
    }
    else{
        printf("you are so poor, you have to work to live :(\n");
    }

    
    */
    if(how_much_money > money && how_many_house > house){
        if(car == "yes" || car == "Yes"){
            printf("you don't have to work all day long :)\n");
        }
        else{
            printf("you should buy a car bro!\n");
        }
    }
    else if(how_much_money > money && car == "yes" || car == "Yes"){
        printf("you have to work one day in a week :,)\n");
    }
    else{
        printf("you are so poor, you have to work to live :(\n");
    }

    /////

    int horsePower;
    printf("enter a number which you want your's car horsepower: ");
    scanf("%d", &horsePower);

    if(horsePower <= 60){
        printf("there is no car like this!\n");
    }
    else if(60 < horsePower && horsePower <= 75){
        printf("200.000\n");
    }
    else if(75 < horsePower && horsePower <= 90){
        printf("350.000\n");
    }
    else if(90 < horsePower && horsePower <= 110){
        printf("500.000\n");
    }
    else if(110 < horsePower && horsePower <= 150){
        printf("700.000\n");
    }
    else if(150 < horsePower && horsePower <= 200){
        printf("1.200.000\n");
    }
    else{
        printf("2.000.000\n");
    }

    return 0;
}



