#include <stdio.h>
int main(){
    
    int i = 0;

    while(i < 5){
        printf("%d\n", i);
        i++;
    }

    do{ //quiz - sınavda çıkar (bununla yaptığımı if ile de yapabilirim)
        printf("%d\n", i);
        i++;

    }while(i < 5);

    //switch case de çok kullanılmaz (do-while gibi)
    //switch casedeki breakin kaldırılması
    //primitive (int,char,float,double - bool yok)
    //array'lerde aynı type olmalı

    int numbers[5] = {1,2,3,4,5,6};


    return 0;
}