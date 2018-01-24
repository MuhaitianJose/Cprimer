#include "chapterfiveexercises.h"
#include <iostream>
#include <array>
#include <cstring>

using namespace std;

ChapterFiveExercises::ChapterFiveExercises()
{

}

void ChapterFiveExercises::exercisesOne(){
    int first_number,second_number,total=0;
    cout << "Enter your first number: ";
    cin >> first_number;
    cout << "Enter your second number: ";
    cin >> second_number;

    for(first_number;first_number<=second_number;first_number++){
        total+=first_number;
    }

    cout <<"total= "<<total;
}

void ChapterFiveExercises::exercisesTwo(){
    const int Asize = 101;
    array<long double,Asize> factorial;
    factorial.at(0)=1;
    factorial.at(1)=1;
    for(int i=2;i<Asize;i++){
        factorial.at(i) = i*factorial.at(i-1);
    }

    for(int i=0;i<Asize;i++){
        cout << i <<"!= " << factorial.at(i)<<endl;
    }
}

void ChapterFiveExercises::exercisesThree(){
    int total=0,cinNumber=0;

    cin >> cinNumber;

    while (cinNumber!=0) {
        total+=cinNumber;
        cin >> cinNumber;
    }

    cout << "total=" << total << endl;
}

void ChapterFiveExercises::exercisesFour(){
    double final_profit = 100L;
    int year=0;
    cout << "Year of deposit: ";
    cin >> year;
    for(int i=0;i<year;i++){
        final_profit = final_profit*0.05+final_profit;
    }

    cout << "final_profit=" << final_profit;

}

void ChapterFiveExercises::exercisesFive(){
    const int MONTHS = 12;
    const char* Months[MONTHS] = {"January","February","March","April","May",
                                  "June","July","August","September","October","November","December"};
    int sales[MONTHS],sum=0;
    for(int i=0;i<MONTHS;i++){
        cout << "Enter Month "<<Months[i]<<" C++ for tools sales: ";
        cin >> sales[i];
        sum+=sales[i];
    }

    cout << endl;
    cout <<"this year C++ For Tools sales: " << sum << endl;

}

void ChapterFiveExercises::exercisesSix(){
    const int YEAR = 3;
    const int MONTHS = 12;
    const char* years[YEAR] = {"first year","second year","third year"};
    const char* Months[MONTHS] = {"January","February","March","April","May",
                                  "June","July","August","September","October","November","December"};
    int year_sale[YEAR],sum=0,sales[YEAR][MONTHS];
    for(int year=0;year<YEAR;year++){
        int temp = 0;
        cout << "Please Enter " << years[year] ;
        for(int month;month < MONTHS;month++){
            cout << "Please Enter "<< Months[month] << "sales:";
            cin >> sales[year][month];
            temp+=sales[year][month];
        }
        year_sale[year] = temp;
        sum+=temp;
    }

    for(int i=0;i<YEAR;i++){
        cout << years[i] << " sales: " << year_sale[i]<< endl;
        cout << "this three year sales: " << sum;
    }

}

void ChapterFiveExercises::exercisesSeven(){
    Car* manyCarInfo;
    int number;
    cout << "How many cars do you wish to catalog? ";
    cin >> number;
    cin.get();
    manyCarInfo = new Car[number];
    for(int i=0; i< number;i++){
        cout << "Car #" << i << endl;
        cout << "Please enter the make: ";
        cin >> manyCarInfo[i].producers;
        cout << "Please enter the year made: ";
        cin >> manyCarInfo[i].year;
    }
    cout << "Here is your collection: " << endl;
    for(int i=0;i<number;i++){

        cout << manyCarInfo[i].producers << " "<< manyCarInfo[i].year << endl;
    }
}

void ChapterFiveExercises::exercisesEight(){
    char word[40];
    int counts=0;
    cout << "Enter words (to stop, type the word done): ";
    cin >> word;
    while(strcmp(word,"done")){
        counts++;
        cin >> word;
    }

    cout << "word = " << word <<endl;
    cout << "You entered a total of " << counts << " words" <<endl;

}

void ChapterFiveExercises::exercisesNine(){
    string word;
    int counts=0;
    cout << "Enter words (to stop, type the word done): ";
    cin >> word;
    while(word!="done"){
        counts++;
        cin >> word;
    }

    cout << "word = " << word <<endl;
    cout << "You entered a total of " << counts << " words" <<endl;
}

void ChapterFiveExercises::exercisesTen(){
    int rows = 0;

    cout << "Enter number of rows: " ;
    cin >> rows;
    for(int x=0;x<rows;x++){
        for(int y=0;y<rows;y++){
            if(y< rows-x-1){
               cout << ". ";
            }else {
                cout << "* ";
            }
        }
        cout << endl;
    }
}
