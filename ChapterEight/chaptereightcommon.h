#include <iostream>
#ifndef CHAPTEREIGHTCOMMON_H
#define CHAPTEREIGHTCOMMON_H
using namespace std;
struct free_throws{
    string name;
    int made;
    int attempts;
    float percent;
};

#define SQUARE(X) ((X)*(X))
void swapr(int &a,int &b);
void swapp(int *a,int *b);
void swapv(int a,int b);
void set_pc(free_throws &ft);
void display(const free_throws &ft);
free_throws & accumulate(free_throws &target,const free_throws &source);

template <typename T>
void Swap(T& a, T& b){
    T temp;
    temp = a;
    a = b;
    b = temp;
}

#endif // CHAPTEREIGHTCOMMON_H
