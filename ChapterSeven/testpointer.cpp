#include <iostream>
#include "testpointer.h"
using namespace std;
double pam(int lns){

    return 0.03 * lns + 0.0004 * lns *lns;
}
double betsy(int lns){
    return 0.05 * lns;
}

const double* f1(const double *arr, int n){
    return arr;
}

const double* f2(const double arr[], int n){
    return arr+1;
}

const double* f3(const double arr[], int n){
    return arr+2;
}
void muhaitian(int arr[],int size,int value){
    for(int i=0;i<size;i++){
        arr[i] = value;
    }
}
void muhaitian_(int* begin,int* end,int value){
    while (begin!=end) {
        *begin=value;
        begin++;
    }
}

double findMaxValue(const double arr[],int size){
    double max = arr[0];
    if(size<1){
        cout << "Invalid array size of " << size << endl;
        cout << "Returning a value of 0" << endl;
       return 0;
    }
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}

