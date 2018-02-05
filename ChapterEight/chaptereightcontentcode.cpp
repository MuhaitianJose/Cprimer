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

}



