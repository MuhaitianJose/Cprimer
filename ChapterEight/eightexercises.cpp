#include "eightexercises.h"
#include <iostream>
#include <cstring>

using namespace std;

void printStr(char *str, int flag){
    static int count = 0;
    count++;
    if(!flag){
        cout << str << endl;
    }else {
        for(int i=0;i<count;i++){
            cout << str << endl;
        }
    }
}

void setCandyBar(CandyBar &candyBar, const char *name, const double w, const int h){
    strcpy(candyBar.name,name);
    candyBar.weight = w;
    candyBar.heat = h;
}

void disp(const CandyBar &bar){
    cout << "name: " << bar.name << endl
         << "weight: " << bar.weight << endl
         << "heat: " << bar.heat << endl;
}

void changeUpper(string &s){
    for(int i=0;i<s.size();i++){
        s[i] = toupper(s[i]);
    }
}

void set(stringy &ai, const char *str){
    int len = strlen(str);
    ai.str = new char[len+1];
    strcpy(ai.str,str);
}
void show(const string &str, const int ct){
    for(int i=0;i<ct;i++){
        cout << str << endl;
    }
}

void show(const stringy &str, const int ct){
    for(int i=0;i<ct;i++){
        cout << str.str << endl;
    }
}
template <> char *maxn(char *a[], int len) {
    int max = -1;
    char *p = NULL;
    for(int i=0;i<len;i++){
        if((int)strlen(a[i])>max){
            max = strlen(a[i]);
            p = a[i];
        }
    }
    return p;
}
