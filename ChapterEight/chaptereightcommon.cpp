#include "chaptereightcommon.h"

void swapp(int *a, int *b){
    int temp;
    temp = *a;
    *a=*b;
    *b = temp;
}

void swapr(int &a, int &b){
    int temp = a;
    a=b;
    b = temp;
}

void swapv(int a, int b){
    int temp = a;
    a = b;
    a = temp;
}
