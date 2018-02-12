#include <iostream>
#include <cctype>
#include <array>
#include <cstring>
#include "ChapterTwo/firstsource.h"
#include "ChapterThree/chapterthreecpp.h"
#include "ChapterThree/chapterthreeexercises.h"
#include "ChapterFour/chapterfourcontentcode.h"
#include "ChapterFour/chapterfourexercises.h"
#include "ChapterFive/chapterfivecontentcode.h"
#include "ChapterFive/chapterfiveexercises.h"
#include "ChapterSix/chaptersixcontentcode.h"
#include "ChapterSix/chaptersixexercises.h"
#include "ChapterSeven/chaptersevencontentcode.h"
#include "ChapterSeven/testpointer.h"
#include "ChapterSeven/chaptersevenexercises.h"
#include "ChapterEight/chaptereightcontentcode.h"
#include "ChapterEight/chaptereightexercises.h"
#include "ChapterNine/coordin.h"


using namespace std;



/**
 * @brief main 是程序跟操作系统之间的接口
 * @return
 */
void showMu();
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
    //    ChapterThreeExercises* mExercises = new ChapterThreeExercises();
    //    mExercises->exercisesOne();
    //    mExercises->exercisesTwo();
    //    mExercises->exercisesThreee();
    //    mExercises->exercisesFour();
    //    mExercises->exercisesFive();
    //    ChapterFourContentCode* mFourContentCode = new ChapterFourContentCode();
    //    mFourContentCode->arrayone();
    //    mFourContentCode->strings();
    //    mFourContentCode->printStruct();
    //    mFourContentCode->useUnion();
    //    mFourContentCode->showAddress();
    //ChapterFourExercises* mFourExercises = new ChapterFourExercises();
    //    mFourExercises->exercisesOne();
    //    mFourExercises->exercisesTwo();
    //    mFourExercises->exercisesThree();
    //    mFourExercises->exercisesFour();
    //    mFourExercises->exercisesFive();
    //    mFourExercises->exercisesSix();
    //    mFourExercises->exercisesSeven();
    //    mFourExercises->exercisesEight();
    //    mFourExercises->exercisesNine();
    //第五章

    //    ChapterFiveContentCode* mFiveContentCode = new ChapterFiveContentCode();

    //    mFiveContentCode->forMore()
    //    mFiveContentCode->bigStep();
    //    mFiveContentCode->forstr1();
    //    mFiveContentCode->plus_one();
    //    mFiveContentCode->compstr1();
    //    mFiveContentCode->compstr2();
    //    mFiveContentCode->waiting();
    //    mFiveContentCode->textinl();
    //    mFiveContentCode->textin2();
    //    mFiveContentCode->textin3();
    //    mFiveContentCode->nested();

    //    ChapterFiveExercises* mFiveExercises = new ChapterFiveExercises();
    //    mFiveExercises->exercisesOne();
    //    mFiveExercises->exercisesTwo();
    //    mFiveExercises->exercisesThree();
    //    mFiveExercises->exercisesFour();
    //    mFiveExercises->exercisesFive();
    //    mFiveExercises->exercisesSeven();
    //    mFiveExercises->exercisesNine();
    //    mFiveExercises->exercisesTen();

    //第六章
    //    ChapterSixContentCode* mSixContentCode = new ChapterSixContentCode();
    //    mSixContentCode->ifExample();
    //    mSixContentCode->ifElseExample();
    //    mSixContentCode->ifelseifExample();
    //    mSixContentCode->cctypes();
    //    mSixContentCode->condit();
    //    mSixContentCode->useSwitch();
    //    mSixContentCode->useEnum();
    //    ChapterSixExercises* mSixExercises = new ChapterSixExercises();
    //    mSixExercises->exercisesOne();
    //    mSixExercises->exercisesOne();
    //    mSixExercises->exercisesTwo();
    //    mSixExercises->exercisesThree();
    //    mSixExercises->exercisesFour();
    //    mSixExercises->exercisesFive();
    //    mSixExercises->exercisesSix();
    //    mSixExercises->exercisesSeven();
    //    mSixExercises->exercisesEighth();
    //第七章
    //    const int Asize = 8;
    //    int cookies[Asize] = {1,2,4,8,16,32,64,128};
    //    ChapterSevenContentCode* mSevenContentCode = new ChapterSevenContentCode();
    //    int total = mSevenContentCode->sum_arr(cookies,Asize);
    //    cout << "Total cookies eaten: "<< total << endl;
    //    mSevenContentCode->show_array(cookies,Asize);
    //    cout << "sum_arr_by_pointer: "<<mSevenContentCode->sum_arr_by_pointer(cookies,cookies+Asize);
    //    mSevenContentCode->array_2d();
    //    char mmm[15] = "minimum";
    //    char* wail = "ululate";
    //    unsigned int ms = mSevenContentCode->c_in_str(mmm,'m');
    //    unsigned int us = mSevenContentCode->c_in_str(wail,'u');
    //    cout << "ms=" << ms << " "<< "us=" <<us;

    //    char* mk = mSevenContentCode->buildstr('M',50);
    //    cout << mk;
    //    delete[] mk;

    //    travel_time day1 = {5,45};
    //    travel_time day2 = {4,55};
    //    travel_time trip = mSevenContentCode->travel_time_sum(day1,day2);
    //    mSevenContentCode->show_time(trip);
    //    const int SIZE = 5;
    //    string list[SIZE];
    //    cout << "Enter your "<< SIZE << "favorite astronomical:" << endl;
    //    for(int i=0;i<SIZE;i++){
    //        cout << i+1 << " : ";
    //        getline(cin,list[i]);
    //    }
    //    mSevenContentCode->display(list,SIZE);
    //    array<string,4> Snames = {"Spring","Summer","Fall","Winter"};
    //    mSevenContentCode->fill(&Snames);
    //    mSevenContentCode->count_down(8);
    //    mSevenContentCode->ruler();

    //    mSevenContentCode->testPointer(pam);
    //    mSevenContentCode->estimate(20,pam);
    //    mSevenContentCode->estimate(35,betsy);
    //    mSevenContentCode->testArfupt();
    //第七章练习题
    //    ChapterSevenExercises* mSevenExercises = new ChapterSevenExercises();
    //    mSevenExercises->exercisesOne();
    //    mSevenExercises->exercisesTwo();
    //    mSevenExercises->exercisesThree();
    //    mSevenExercises->exercisesFive();
    //    mSevenExercises->exercisesSix();
    //    mSevenExercises->exercisesSeven();
    //    int a=1,b=2,c=3;
    //    int sum[3] = {a,b,c};
    //    int* mk[3] = {&a,&b,&c};//指针数组
    //    int (*mu)[3] = &sum;
    //    const char* Snames[] = {"Spring","Summer","Fall","Winner"};
    //    cout << *mk[1] << endl;
    //    cout << *Snames[1]<< endl;
    //    cout << Snames[1] << endl;
    //第八章
    //    ChapterEightContentCode* mEightContentCode = new ChapterEightContentCode();
    //    mEightContentCode->testInlineFunction();
    //    mEightContentCode->firstRef();
    //    mEightContentCode->swaps();
    //    mEightContentCode->strtRef();
    //    mEightContentCode->funtemp();
    //    ChapterEightExercises* mEightExercises = new ChapterEightExercises();
    //    mEightExercises->exercisesOne();
    //    mEightExercises->exercisesTwo();
    //    mEightExercises->exercisesThree();
    //    mEightExercises->exercisesFour();
    //    mEightExercises->exercisesFive();
    //    mEightExercises->exercisesSix();
    //    mEightExercises->exercisesSeven();
    //第九章
//    ChapterNineContentCode* mNineContentCode = new ChapterNineContentCode();
//    mNineContentCode->code_one();
    showMu();
    return 0;
}


