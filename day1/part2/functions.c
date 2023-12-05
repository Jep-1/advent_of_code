#include "functions.h"

int isOne(char *input_string, int length){
    for(int i=0; i <length; i++){
            if(input_string[i] == 'o' && input_string[i+1] == 'n' && input_string[i+2] == 'e'){
                return 10;
            }
        }
        return -1;
}


int isTwo(char *input_string, int length){
    for(int i=0; i <length; i++){
            if(input_string[i] == 't' && input_string[i+1] == 'w' && input_string[i+2] == 'o'){
                return 20;
            }
        }
        return -1;
}
int isThree(char *input_string, int length){
    for(int i=0; i <length; i++){
            if(input_string[i] == 't' && input_string[i+1] == 'h' && input_string[i+2] == 'r' && input_string[i+3] == 'e' && input_string[i+4] == 'e'){
                return 30;
            }
        }
        return -1;
}
int isFour(char *input_string, int length){
    for(int i=0; i <length; i++){
            if(input_string[i] == 'f' && input_string[i+1] == 'o' && input_string[i+2] == 'u' && input_string[i+3] == 'r'){
                return 40;
            }
        }
        return -1;
}
int isFive(char *input_string, int length){
    for(int i=0; i <length; i++){
            if(input_string[i] == 'f' && input_string[i+1] == 'i' && input_string[i+2] == 'v' && input_string[i+3] == 'e'){
                return 50;
            }
        }
        return -1;
}
int isSix(char *input_string, int length){
    for(int i=0; i <length; i++){
            if(input_string[i] == 's' && input_string[i+1] == 'i' && input_string[i+2] == 'x'){
                return 60;
            }
        }
        return -1;
}
int isSeven(char *input_string, int length){
    for(int i=0; i <length; i++){
            if(input_string[i] == 's' && input_string[i+1] == 'e' && input_string[i+2] == 'v' && input_string[i+3] == 'e' && input_string[i+4] == 'n'){
                return 70;
            }
        }
        return -1;
}
int isEight(char *input_string, int length){
    for(int i=0; i <length; i++){
            if(input_string[i] == 'e' && input_string[i+1] == 'i' && input_string[i+2] == 'g' && input_string[i+3] == 'h' && input_string[i+4] == 't'){
                return 80;
            }
        }
        return -1;
}
int isNine(char *input_string, int length){
    for(int i=0; i <length; i++){
            if(input_string[i] == 'n' && input_string[i+1] == 'i' && input_string[i+2] == 'n' && input_string[i+3] == 'e'){
                return 90;
            }
        }
        return -1;
}