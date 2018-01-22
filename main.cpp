#include <iostream>
#include "ChapterTwo/firstsource.h"
#include "ChapterThree/chapterthreecpp.h"
#include "ChapterThree/chapterthreeexercises.h"
#include "ChapterFour/chapterfourcontentcode.h"

using namespace std;


/**
 * @brief main 是程序跟操作系统之间的接口
 * @return
 */
int main()
{
    //第二章
    //    FirstSource* mSource = new FirstSource();
    //    mSource->exercisesOne();
    //    mSource->exercisesTwo();
    //    mSource->exercisesThree();
    //    mSource->exercisesFour();
    //    mSource->exercisesFive();
    //    mSource->exercisesSix();
    //    mSource->exercisesSeven();
    //    cin.get();
    //第三章
    //    ChapterThreeCpp* mThree = new ChapterThreeCpp();
    //    mThree->testLimits();
    //    mThree->exceed();
    //    mThree->hexoct2();
    //    mThree->chartype();
    //    mThree->morechar();
    //    cout.put('$');
    //第四章
    ChapterThreeExercises* mExercises = new ChapterThreeExercises();
//    mExercises->exercisesOne();
//    mExercises->exercisesTwo();
//    mExercises->exercisesThreee();
//        mExercises->exercisesFour();
//    mExercises->exercisesFive();
    ChapterFourContentCode* mFourContentCode = new ChapterFourContentCode();
//    mFourContentCode->arrayone();
//    mFourContentCode->strings();
//    mFourContentCode->printStruct();
//    mFourContentCode->useUnion();
    mFourContentCode->showAddress();

    return 0;
}

/**
 *cout的对象属性包括一个插入运算符(<<),它可以将其右侧的信息插入到流中。
 *
 **/
