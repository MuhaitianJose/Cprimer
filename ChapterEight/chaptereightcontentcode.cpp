#include "chaptereightcontentcode.h"
#include "chaptereightcommon.h"
#include <iostream>

using namespace std;
/**
 * 第八章 函数探幽：
 * 内联函数。
 * 引用变量。
 * 如何按引用传递函数参数。
 * 默认参数。
 * 函数重载。
 * 函数模板。
 * 函数模板具体化。
 */
ChapterEightContentCode::ChapterEightContentCode()
{

}

void ChapterEightContentCode::testInlineFunction(){
    double value = square(5.0);
    double valueDefine = SQUARE(1.2);
    cout << "value= " << value << endl
         << "define=" << valueDefine;

}
void ChapterEightContentCode::firstRef(){
    int rats = 101;
    int &rodents = rats;
    cout << "rats= " << rats << endl
         << "rodents= " << rodents << endl;

    rodents++;
    cout << "rats= " << rats << endl
         << "rodents= " << rodents << endl;

    cout << "rats address= " << &rats << endl
         << "rodents address = " << &rodents << endl;
}
void ChapterEightContentCode::swaps(){
    int wallet1=100;
    int wallet2=200;
    cout << "wallet1 = $" << wallet1 << " wallet2 = $" << wallet2 << endl << endl;

    cout << "using references to swap contents:" << endl;
    swapr(wallet1,wallet2);
    cout << "wallet1 = $" << wallet1 << " wallet2 = $" << wallet2 << endl << endl;

    cout << "using pointer to swap contents:" << endl;
    swapp(&wallet1,&wallet2);
    cout << "wallet1 = $" << wallet1 << " wallet2 = $" << wallet2 << endl << endl;

    cout << "trying to use  passing by value:" << endl;
    swapv(wallet1,wallet2);
    cout << "wallet1 = $" << wallet1 << " wallet2 = $" << wallet2 << endl << endl;

}

void ChapterEightContentCode::strtRef(){

    free_throws one = {"Ifelse Branch",13,14};
    free_throws two = {"Andor Knott",10,16};
    free_throws three = {"Minnie Max",7,9};
    free_throws four = {"Whily Looper",5,9};
    free_throws five = {"Long Long",6,14};
    free_throws team = {"Throw goods",0,0};

    free_throws dup;
    set_pc(one);
    display(one);
    accumulate(team,one);
    display(team);

    display(accumulate(team,two));
    accumulate(accumulate(team,three),four);
    display(team);

    dup = accumulate(team,five);
    cout << "Displaying team: " << endl;
    display(team);
    cout << "Displaying dup after assignment: " << endl;
    display(dup);
    set_pc(four);
    accumulate(dup,five) = four;

    cout << "Displaying dup after ill-advised assigment:" << endl;
    display(dup);


}

void ChapterEightContentCode::funtemp(){
    int i = 10;
    int j = 20;
    cout << "i, j = " << i << ", " << j << "." << endl;
    cout << "Using compiler-generated int swapper: " << endl;
    Swap<int>(i,j);
    cout << "Now i, j = " << i << ", "<< j << "." << endl;

    double x = 10;
    double y = 20;
    cout << "x, y = " << x << ", " << y << "." << endl;
    cout << "Using compiler-generated int swapper: " << endl;
    Swap<double>(x,y);
    cout << "Now x, y = " << x << ", "<< y << "." << endl;
}



