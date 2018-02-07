#include <iostream>
using namespace std;

#ifndef EIGHTEXERCISES_H
#define EIGHTEXERCISES_H

struct CandyBar{
    char name[30];
    double weight;
    int heat;
};
struct stringy{
    char *str;
    int ct;
};

struct debts{
    char name[50];
    double amount;
};

void printStr(char *str,int flag=0);
void setCandyBar(CandyBar &candyBar,const char *name = "Millennium Munch",const double w=2.85,const int h=350);
void disp(const CandyBar &bar);
void changeUpper(string &s);
void set(stringy &ai,const char * str);
void show(const string &str,const int ct = 1);
void show(const stringy &str,const int ct = 1);

template <typename T>
T maxn(T *array,int len){
    T max = -1;
    for(int i=0;i<len;i++){
        max = max < array[i]?array[i]:max;
    }
    return max;
}
template <> char *maxn(char *a[], int len);


template <typename T>
T max5(T *array){
    T max = -1;
    for(int i=0;i<5;i++){
        max = max < array[i]?array[i]:max;
    }
    return max;
}

template <typename T>
T SumArray(T a[],int len){
    T sum = 0;
    for(int i=0;i<len;i++){
        sum+=a[i];
    }

    return sum;
}
template <typename T>
T SumArray(T *a[],int len){
    T sum = 0;
    for(int i=0;i<len;i++){
        sum +=*a[i];
    }
    return sum;
}

#endif // EIGHTEXERCISES_H
