#ifndef CHAPTERFOURCONTENTCODE_H
#define CHAPTERFOURCONTENTCODE_H
#include <iostream>

using namespace std ;
//std 在iostream 中，string在std中。
struct Muhaitian{

    string name;
    float volum;
    double price;
};
/**
 * @brief The id union
 * 结构体跟共用体可以使用构造函数和析构函数，下面注释是写法。
 * 我在共用体使用string，提示要用构造函数跟析构函数才能编译通过，运行过程中会报错。
 * 共用体中最好不要使用string，最好改用char数组。
 */
union id{
//    id(){}

    int id_int;
    double id_double;
//    ~id(){
//      delete &id_double;
//        delete &id_int;

//    }
};

struct Lizihai{
//    Lizihai(){

//    }
    int type;
    string brand;
    id id_val;
//    ~Lizihai(){
//        delete &type;
//        delete &brand;
//        delete &id_val;
//    }
};

class ChapterFourContentCode
{
public:
    Lizihai product;
    Muhaitian guest;
    ChapterFourContentCode();
    void arrayone();
    void strings();
    void printStruct();
    void useUnion();
    void showAddress();
};

#endif // CHAPTERFOURCONTENTCODE_H
