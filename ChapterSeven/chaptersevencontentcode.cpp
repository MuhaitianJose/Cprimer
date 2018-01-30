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

    //    第一个mk是个数组名，里面保存的是int指针。
    //    第二个a是个指针名，它指向一个包含5个数据的int数组。

    int a=1,b=2,c=3;

    int* mk[3] = {&a,&b,&c};//指针数组
    //    int (*mu)[3] = &{a,b,c}; //数组指针

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

void ChapterSevenContentCode::ruler(){
    const int Len = 66;
    const int Divs = 6;
    char ruler[Len];
    for(int i=1;i<Len-2;i++){
        ruler[i]=' ';
    }
    int max = Len-2;
    int min = 0;
    ruler[Len-1]='\0';
    ruler[min]=ruler[max]= '|';
    cout << ruler << endl;
    for(int i=1;i<=Divs;i++){
        subdivide(ruler,min,max,i);
        cout << ruler << endl;
    }
}
void ChapterSevenContentCode:: subdivide(char arr[],int min,int max,int level){
    if(1==level){
        return;
    }
    int mid = (min+max)/2;
    arr[mid] = '|';
    subdivide(arr,min,mid,level-1);
    subdivide(arr,mid,max,level-1);

}
void ChapterSevenContentCode::testPointer(double (*pf)(int)){
    pf(56);
}

void ChapterSevenContentCode::estimate(int lines,double (*pf)(int)){
    cout << lines << " lines will take ";
    cout << pf(lines) << " hour(s)" << endl;
}

void ChapterSevenContentCode::testArfupt(){
    double av[3] = {1112.3,1542.6,2227.9};
    //单个指针函数返回double变量的指针
    const double* (*p1)(const double*,int) = f1;
    auto p2 = f2;
    cout << "Using pointers to function:" << endl;
    cout << " Address   Value" << endl;
    cout << (*p1)(av,3) << " : " << *(*p1)(av,3) << endl;
    cout << p1(av,3) << " : " << *p1(av,3) << endl;
    cout << p2(av,3) << " : " << *p2(av,3) << endl;
    //使用指针数组
    const double* (*pa[3]) (const double*,int) = {f1,f2,f3};
     const double* (*(*pd)[3])(const double *,int) = &pa;
    auto pb = pa;
    cout << endl << "Using an array of pointers to functions:" << endl;
    for(int i=0;i< 3;i++){
        cout << pa[i](av,3) << " : " << *pa[i](av,3) << endl;
    }
    cout << "Using a pointer to a pointer to a function:" << endl;
    cout << "Address    Value" << endl;

    for(int i=0;i<3;i++){
        cout << endl << pb[i](av,3) << " : " << *pb[i](av,3) << endl;
    }

    cout << endl
         << "Using pointer to an array of function pointera"
         << endl;
    cout << "Address   Value" << endl;
    //但&pa是整个数组(即三个指针块)的地址。必须使用*进行引用解除
    auto pc = &pa;
    cout << (*pc)[0](av,3) << " : " << *(*pc)[0](av,3) << endl;

    //    cout << (pc)[0](av,3)
    //    << " : "
    //    << *(pc)[0](av,3) << endl;这样使用是错误的
   const double* pdb = (*pd)[1](av,3);
   cout << pdb << " : " << *pdb << endl;
   cout << (*(*pd)[2])(av,3) << " : " << *(*(*pd)[2])(av,3) << endl;
}




