#include "chaptersixexercises.h"
#include <iostream>
#include <cctype>
#include <array>
#include <cstring>

using namespace std;

ChapterSixExercises::ChapterSixExercises()
{

}

/**
 * @brief ChapterSixExercises::exercisesOne
 * 1.编写一个程序，读取键盘输入，直到遇到@符号为止，并回显输入（数字除外），
 * 同时将大写字符转换为小写，将小写字符转换为大写（别忘了cctype函数系列）。
 */
void ChapterSixExercises::exercisesOne(){
    char str;
    while ((str = cin.get())!='@') {
        cout << str;
        if(isalpha(str)){
            if(islower(str)){
                cout << char(toupper(str));
            }else {
                cout << char(tolower(str));
            }
        }

    }
}
/**
 * @brief ChapterSixExercises::exercisesTwo
 * 2.编写一个程序，最多将10个donation值读入到一个double数组中（如果您愿意，也可使用模板类array）。
 * 程序遇到非数字输入时将结束输入，并报告这些数字的平均值以及数组中有多少个数字大于平均值。
 */
void ChapterSixExercises::exercisesTwo(){
    array<double,10> mArray;
    int count=0,total=0;
    double sum =0,average=0;
    double donation = 0;
    while ((cin >> donation) && count<10 && !isdigit(donation)) {

        mArray.at(count) = donation;
        sum += mArray.at(count);
        count++;
    }

    if(count!=0){
        average = sum/count;
    }

    for(int i=0;i<count;i++){
        cout << mArray.at(i) << endl;
        if(mArray.at(i)>average){

            total++;
        }
    }

    cout << "average: " << average << endl;
    cout << "has" << total << "big the average" << endl;
}

void ChapterSixExercises::exercisesThree(){
    char ch;
    showMenu();
    cout << "Please enter a c,p,t, or g:";
    cin >> ch;
    while (ch!='c' && ch!='p' && ch!='t' && ch!='g') {
        cout << "Please enter a c,p,t, or g:";
        cin >> ch;
    }

    switch (ch) {
    case 'c':
        cout << "A maple is carnivore." << endl;
        break;
    case 'p':
        cout << "A maple is pianist." << endl;
        break;
    case 't':
        cout << "A maple is tree." << endl;
        break;
    case 'g':
        cout << "A maple is game." << endl;
        break;
    default:
        break;
    }
}

void ChapterSixExercises::showMenu(){
    cout << "Please enter one of the following choices:" << endl
         << "c) carnivore                  p) pianist" << endl
         << "t) tree                       g) game" << endl;
}

void ChapterSixExercises::exercisesFour(){
    bop mBop[5]={
        {"muhaitian","teacher","hehe",0},
        {"lizihai","doctor","monty",1},
        {"wuxin","mage","ordinary",2},
        {"qiye","prince"," emperor",2},
        {"yanhongye","beautiful women","wuyu",1}
    };
    showMenuFour();
    char ch;
    cout << "Enter your choice:";
    while ((ch = cin.get())&&ch!='q') {
        switch (ch) {
        case 'a':
            for(int i=0;i<5;i++){
                cout << mBop[i].full_name << endl;
            }
            cout << "Next choice:";
            break;
        case 'b':
            for(int i=0;i<5;i++){
                cout << mBop[i].title << endl;
            }
            cout << "Next choice:";
            break;
        case 'c':
            for(int i=0;i<5;i++){
                cout << mBop[i].bop_name << endl;
            }
            cout << "Next choice:";
            break;
        case 'd':
            for(int i=0;i<5;i++){
                if(mBop[i].preference==0){
                    cout << mBop[i].full_name << endl;
                }else if(mBop[i].preference==1){
                    cout << mBop[i].title << endl;
                }else if(mBop[i].preference==2){
                    cout << mBop[i].bop_name << endl;
                }
            }
            cout << "Next choice:";
            break;
        default:
            break;
        }


    }

    cout << "Bye!" << endl;
}

void ChapterSixExercises::showMenuFour(){
    cout << "Benevolent Order of Programmers Report" << endl
         << "a) display by name     b) diaplay by title" << endl
         << "c) display by bopname  d) diaplay by preference" << endl
         << "q) quit"<<endl;
}

void ChapterSixExercises::exercisesFive(){
    double income = 0,revenue = 0;
    cout << "please enter your income: ";
    while ((cin>>income)&&income>=0&&!isdigit(income)) {
        cout << "isdigit(income)=" << isdigit(income) <<endl;
        if(income<=5000){
            revenue = 0;
        }else if (income <=15000) {
            revenue =  (income-5000)*0.1;
        }else if (income <=35000) {
            revenue = 10000*0.1+(income-15000)*0.15;
        }else {
            revenue = 10000*0.1+20000*0.15 + (income-35000)*0.2;
        }
        cout << "Your personal income tax: " << revenue << endl;
        cout << "please enter your income: ";
    }
}

void ChapterSixExercises::exercisesSix(){
    donor* mDonor;
    int size=0;
    cout << "Please enter donor size:";
    cin >> size;
    mDonor = new donor[size];
    for(int i=0;i<size;i++){
        cout << "Please enter the "<< i+1 << " donor name: " << endl;
        cin >>mDonor[i].name;
        cout << "Please enter the "<< i+1 << " donor store money: " << endl;
        cin >>mDonor[i].store_money;
    }

    cout << "Grand Patrons:" << endl;
    int temp = 0;
    for(int i=0;i<size;i++){
        if(mDonor[i].store_money>10000){
            cout <<mDonor[i].name << " : " << mDonor[i].store_money << endl;
            temp++;
        }
    }
    if(0==temp){
        cout << "none" << endl;
    }
    temp=0;

    cout << "Patrons:" << endl;
    for(int i=0;i<size;i++){
        if(mDonor[i].store_money<=10000){
            cout <<mDonor[i].name << " : " << mDonor[i].store_money << endl;
            temp++;
        }
    }
    if(0==temp){
        cout << "none" << endl;
    }

    delete[] mDonor;

}
void ChapterSixExercises::exercisesSeven(){
    int vowels =0,consonants=0,other=0;
    char word[20];

    while (cin >> word) {
        if(isalpha(word[0])){
            if(word[0]=='q'&&strlen(word)==1){
                break;
            }
            switch (word[0]) {
            case 'a':
            case 'i':
            case 'u':
            case 'e':
            case 'o':
                vowels++;
                break;
            default:
                consonants++;
                break;
            }
        }else {
            other++;
        }
    }
    cout << vowels << " words beginning with vowels" << endl;
    cout << consonants << " words beginning with consonants" << endl;
    cout << other << " others" << endl;
}
