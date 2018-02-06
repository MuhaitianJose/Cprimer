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

void set_pc(free_throws &ft){
    if(ft.attempts!=0){
        ft.percent = 100.0f*float(ft.made)/float(ft.attempts);
    }else {
        ft.attempts = 0;
    }
}

void display(const free_throws &ft){
    cout << "Name: " << ft.name ;
    cout << " Made: " << ft.made ;
    cout << " Attempts: " << ft.attempts ;
    cout << " Percent: " << ft.percent << endl;

}

free_throws & accumulate(free_throws &target,const free_throws &source){
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target;
}





