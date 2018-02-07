#include "chaptereightexercises.h"
#include "eightexercises.h"
#include <iostream>
using namespace std;

ChapterEightExercises::ChapterEightExercises()
{

}

void ChapterEightExercises::exercisesOne(){
    char str[] = "fuck fuck fuck";
    cout << "#1 " << endl;
    printStr(str);
    cout << "#2 " << endl;
    printStr(str,2);
    cout << "#3 " << endl;
    printStr(str,3);
    cout << "#4 " << endl;
    printStr(str);
}
void ChapterEightExercises::exercisesTwo(){
    CandyBar mCandyBar;
    setCandyBar(mCandyBar);
    disp(mCandyBar);
    char name[30];
    double weight;
    int heat;
    cin.getline(name,30);
    cin >> weight >> heat;
    setCandyBar(mCandyBar,name,weight,heat);
    disp(mCandyBar);
}
void ChapterEightExercises::exercisesThree(){
    string str;
    cout << "Enter a string (q to quit): " ;
    while (getline(cin,str)&&str[0]!='q') {
        changeUpper(str);
        cout << str << endl;
        cout << "Next string (q to quit): " ;
    }
    cout << "Bye" << endl;
}
void ChapterEightExercises::exercisesFour(){
    stringy beany;
    char testing[] = "Reality isn't what is used to be.";
    set(beany,testing);
    show(beany);
    show(beany,2);
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);
    show(testing,3);
    show("Done!");
}

void ChapterEightExercises::exercisesFive(){
    int a[5] = {2,3,1,5,4};
    double b[5] = {1.1,3.3,5.5,4.4,2.2};
    cout << max5(a) << endl;
    cout << max5(b) << endl;
}

void ChapterEightExercises::exercisesSix(){
    int a[6] = {1,2,3,4,5,6};
    double b[4] = {1.2,2.3,1.1,5.6};
    char *c[5] = {"muhaitian","muhaitian is","muhaitian is a","","muhaitian is a student"};
    cout << maxn(a,6) << endl;
    cout << maxn(b,4) << endl;
    cout << maxn(c,5) << endl;
}

void ChapterEightExercises::exercisesSeven(){
    int things[6] = {2,3,4,6,8,9};
    debts pt[3] = {
        {"muaitian ",230},
        {"Lihai",330},
        {"Jose",430}
    };
    double* pd[3] ;
    for(int i=0;i<3;i++){
        pd[i] = &pt[i].amount;
    }

    cout << SumArray(things,6) << endl;
    cout << SumArray(pd,3) << endl;
}
