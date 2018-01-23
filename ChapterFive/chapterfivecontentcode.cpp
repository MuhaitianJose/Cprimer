#include "chapterfivecontentcode.h"
#include <iostream>
#include <cstring>
#include <ctime>

using namespace std;

ChapterFiveContentCode::ChapterFiveContentCode()
{

}

void ChapterFiveContentCode::forMore(){
    const int Asize = 16;
    long long factorials[Asize];
    factorials[1] = factorials[0]=1LL;

    for(int i = 2;i<Asize;i++){
        factorials[i] = i*factorials[i-1];
    }

    for(int i =0;i< Asize;i++){
        cout << i << "!= " << factorials[i] << endl;
    }
}

void ChapterFiveContentCode::bigStep(){
    cout << "Enter an integer: ";
    int by;
    cin >> by;
    cout << "Counting by " << by << "s:" << endl;

    for(int i=0;i<100;i=i+by){
        cout << i <<endl;
    }
}
void ChapterFiveContentCode::forstr1(){
    cout << "Enter a word: ";
    string word;
    cin >> word;

    for(int i=word.size()-1;i>=0;i--){
        cout << word[i];
    }

    cout << endl << "Bye." << endl;
}

void ChapterFiveContentCode::plus_one(){
    int a = 20,b=20;
    cout << "a   =" << a <<":   b=" << b << endl;
    cout << "a++ =" << a++ <<": ++b=" << ++b << endl;
    cout << "a   =" << a <<":   b=" << b << endl;
    int guests = 0;
    while (guests ++ < 10) {
        cout << guests << endl;
    }
}

void ChapterFiveContentCode::compstr1(){
    char word[5] = "?ate";
    for(char ch = 'a';strcmp(word,"mate");ch++){
        cout << word << endl;
        word[0] = ch;
    }
    cout << "After loop ends, word is " << word << endl;
}

void ChapterFiveContentCode::compstr2(){
    string word = "?ate";
    for(char ch ='a';word!="mate";ch++){
        cout << word << endl;
        word[0] = ch;
    }

    cout << "After loop ends, word is " << word << endl;
}

void ChapterFiveContentCode::waiting(){
    float secs;
    cout << "Enter the delay time, in seconds: ";
    cin >> secs;
    clock_t delay = secs*CLOCKS_PER_SEC;
    cout << "starting "<<endl;
    clock_t start = clock();
    while (clock()-start < delay) {

    }
    cout << "done " << endl;
}

void ChapterFiveContentCode::textinl(){
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to qiut:"<<endl;
    cin >> ch;
    while (ch!='#') {
        cout << ch;
        ++count;
        cin >> ch;
    }

    cout << endl << count << " characters read";
}

void ChapterFiveContentCode::textin2(){
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to quit:" << endl;
    cin.get(ch);
    while (ch !='#') {
        cout << ch;
        ++count;

        cin.get(ch);
    }

    cout << endl << count << " characters read " << endl;
}

void ChapterFiveContentCode::textin3(){
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to quit:" << endl;
    cin.get(ch);
    while (cin.fail()==false) {
        cout << ch;
        ++count;
        cin.get(ch);
    }

    cout << endl << count << " characters read " << endl;
}

void ChapterFiveContentCode::nested(){
    const int Cities = 5;
    const int Years = 4;
    const char* cities[Cities] = {
        "Gribble City",
        "Gribbletown",
        "New Gribble",
        "San Gribble",
        "Gribble Vista"
    };

    int maxtemps[Years][Cities] = {
        {96,100,87,101,105},
        {96,98,91,107,104},
        {97,101,93,108,107},
        {98,103,95,109,108}
    };
    cout << "Maximum temperatures for 2008-2011 " << endl << endl;
    for(int city=0;city < Cities;++city){
        cout << cities[city] << ":\t";
        for(int year = 0;year < Years;++year){
            cout << maxtemps[year][city] << "\t" ;
        }
        cout << endl;
    }
}

ChapterFiveContentCode::~ChapterFiveContentCode(){

}
