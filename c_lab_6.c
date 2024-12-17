#include <stdio.h>
// notion üni vize soruları (array quiz)
// satranç oyunu (matrix)

void myAppend(int array[], int size, int element);
void PrettyPrint(int array[], int size);
void Square(int num1, int num2);

int main(){

    int myArray[10];
    int myMatrıx[3][4];

    int myMatrıs[3][3]= {{1,2,3},{4,5,6},{7,8,9}};

    myArray[5] = 5; //5. indexe 5'i koyduk

    for(int i = 0; i < 10; i++){
        printf("%d\n", myArray[i]);
    }

    for(int a = 0; a < 3; a++){
        printf("%d\n", myMatrıx[a][0]);
    }


    for(int b = 0; b < 3; b++){
        for(int c = 0; c < 3; c++){
            if(c == 2){
                printf("%d", myMatrıs[b][c]);
            }else{
                printf("%d, ", myMatrıs[b][c]);
            }
            
        }printf("\n");
    }



    int example[10] = {}; //empty array
    for(int i = 0; i<10; i++){
        printf("%d\n", example[i]); //bütün elementlerim sıfır
    }

    for(int i = 1; i<15; i++){
        myAppend(example,10,i);
        PrettyPrint(example,10);
    }

    Square(1,100);


    return 0;
}

void myAppend(int array[], int size, int element){

    for(int i = 0; i < size; i++){
        if(array[i] == 0){
            array[i] = element;
            break;
        }
    }

    int sizeof array[] = size;

    if(element>0){
        array[0] = element;

    }else{

    }

}

void PrettyPrint(int array[], int size){
    
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }printf("\n");

}
//eğer karekökten çıkabiliyorsa yazsın
void Square(int num1, int num2){

    for(int i = num1; i < num2; i++){ //benim doğrum
        for(int j = num1; j < num2; j++){
             if(i == j*j){
                printf("%d\n", i);
            }else{
                continue;
            }
        }
    }

    for(int i = num1; i < num2; i++){ //yanlış
        if(i*i <= num2){
            printf("%d", i*i);
        }
    }

    for(int i = num1; i < num2; i++){ //doğru
        if(i*i >= num1 && i*i <= num2){
            printf("%d", i*i);
        }
    }

    for(int i = num1; i*i < num2; i++){ //daha doğru
        if(i*i >= num1){
            printf("%d", i*i);
        }
    }

    //optimizasyon yaptık kodumuza

}