#include "chaptersevencontentcode.h"
#include <iostream>
#include <array>

using namespace std;
/**
 * @brief ChapterSevenContentCode::ChapterSevenContentCode
 * 本章内容包括：
 * 函数基本知识。函数原型。按值传递函数参数。设计处理数组的函数。
 * 使用const指针参数。设计处理文本字符串的函数。设计处理结构的函数。
 * 设计处理string对象的函数。调用自身的函数（递归）。指向函数的指针。
 */
ChapterSevenContentCode::ChapterSevenContentCode()
{

}

void ChapterSevenContentCode::callingSimple(){
    cout << "I'm but asimple function." << endl;
}

int ChapterSevenContentCode::sum_arr(int arr[],int size){
    int total=0;
    for(int i=0;i<size;i++){
        total+=arr[i];
    }
    return total;
}
/**
 * @brief ChapterSevenContentCode::show_array
 * @param arr
 * @param size 可以读取的长度。
 * 该声明表明，指针arr指向的是常量数据。这意味着不能使用ar修改该数据，
 * 也就是说，可以使用像ar[0]这样的值，但不能修改。
 */
void ChapterSevenContentCode::show_array(const int arr[],int size){
    for(int i=0;i<size;i++){
        cout << "Property #" << (i+1) << ": $" << arr[i] << endl;
    }
}
/**
 * @brief ChapterSevenContentCode::sum_arr_by_pointer
 * 通过开始指针与结束指针，操作数组里面的数据。
 * @param begin 开始指针位置
 * @param end 结束指针的位置
 * @return 返回数组区间之和
 */
int ChapterSevenContentCode::sum_arr_by_pointer(const int* begin,const int* end){
    const int* pt;
    int total = 0;

    for(pt = begin;pt!=end;pt++){
        total+=*pt;
    }
    return total;
}
/**
 * @brief ChapterSevenContentCode::const_and_pointer
 * const只能防止修改pt指向的值（这里为39），而不能防止修改pt的值。
 * 也就是说，可以将一个新地址赋给pt
 * 关键字const的位置与以前不同。这种声明格式使得finger只能指向sloth，
 * 但允许使用finger来修改sloth的值。中间的声明不允许使用ps来修改sloth的值，
 * 但允许将ps指向另一个位置。简而言之，finger和*ps都是const，而*finger和ps不是
 */
void ChapterSevenContentCode::const_and_pointer(){
    int age=39;

    //    int* pd = &age;
    const int* pt = &age;
    int sage = 80;
    pt = &sage;
    //*pt = 42; 此时不能操作
    //第二种使用const的方式使得无法修改指针的值
    int sloth = 3;
    const int* ps = &sloth;
    int* const finger = &sloth;
    //finger = &age;

    //stick 与 *stick都是const
    double trouble = 2.0E30;
    const double* const stick = &trouble;

}

void ChapterSevenContentCode:: array_2d(){
    int muhaitian[4] = {1,2,3,4};
    int arr[2][2] = {{1,2},{3,4}};
    cout <<"(muhaitian+1)="<< (muhaitian+1) <<endl;
    cout <<"*(muhaitian+1)="<< *(muhaitian+1) <<endl;
    cout <<"(arr+1)="<< (arr+1) <<endl; //数组第二行含有4个int
    cout <<"*(arr+1)="<< *(arr+1) <<endl; //解除引用进入四个int值数组
    cout <<"*(arr+1)+1="<< (*(arr+1)+1) <<endl;//解除引用加一相当于arr[1][1]的地址
    cout <<"*(*(arr+1)+1)="<< *(*(arr+1)+1) <<endl; //然后解除引用指向对应的值。

}

unsigned int ChapterSevenContentCode:: c_in_str(const char* str,char ch){
    unsigned int count = 0;

    while (*str) {
        if(*str==ch){
            count++;
        }
        str++;
    }
    return count;
}

char* ChapterSevenContentCode::buildstr(char ch,int Size){
    char* pstr = new char[Size+1];
    pstr[Size] = '\0';
    while (Size-->0) {
        pstr[Size] = ch;
    }
    return pstr;
}
travel_time ChapterSevenContentCode::travel_time_sum(travel_time t1,travel_time t2){
    travel_time total;
    total.hours = t1.hours+t2.hours+(t1.mins+t2.mins)/60;
    total.mins = (t1.mins+t2.mins)%60;
    return total;
}

void ChapterSevenContentCode::show_time(travel_time time){
    cout << time.hours << " hours, " << time.mins << " minutes." << endl;
}

void ChapterSevenContentCode::display(const string str[],int size){
    for(int i=0;i<size;i++){
        cout << i+1 << ": " << str[i] << endl;
    }
}
/**
 * @brief ChapterSevenContentCode::fill
 * @param pa
 * 数组指针不能像pa[i]这样使用，否则编译不过，只能像pa->at(i) 与 (*pa)[i]这样使用。
 */
void ChapterSevenContentCode::fill(array<string,SEASON_SIZE>* pa){
    for(int i=0;i<SEASON_SIZE;i++){
        cout << "SEASON["<< i<<"]="<< pa->at(i) <<endl;
    }
}

void ChapterSevenContentCode::count_down(int n){
    cout << "Counting down ..." << n << endl;
    if(n>0){
        count_down(n-1);
    }

    cout << n << ": Kaboom!" << endl;
}


