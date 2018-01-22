#include "chapterfourexercises.h"
#include <iostream>
#include <cstring>
using namespace std;


ChapterFourExercises::ChapterFourExercises()
{
    people = new People;
}

void ChapterFourExercises::exercisesOne(){
    cout << "What is your first name? ";
    cin >> people->first_name;
    cout << "What is your last name?";
    cin >>people->last_name;
    cout << "What letter grade do you deserve?";
    cin >>people->grade;
    cout << "What is your age?";
    cin >> people->age;
    cout << "Name: " << people->last_name <<" , "<< people->first_name <<endl;
    cout << "Grade: " << people->grade << endl;
    cout << "Age: " << people->age <<endl;

}

void ChapterFourExercises::exercisesTwo(){
    const int Asize = 20;
    char fName[Asize];
    char lName[Asize];
    char fullName[2*Asize+1];
    cout << "Enter your first name: ";
    cin.getline(fName,Asize);
    cout << "Enter your last name: ";
    cin.getline( lName,Asize);

    strncpy(fullName,lName,Asize);
    strcat(fullName," , ");
    strncat(fullName,fName,Asize);

    fullName[2*Asize]='\0';
    cout <<"Here's the information in a single string: "<<fullName;

}

void ChapterFourExercises::exercisesThree(){
    string fName,lName,fullName;
    cout << "Enter your first name: ";
    getline(cin,fName);
    cout << "Enter your last name: ";
    getline( cin,lName);
    fullName = lName+" , "+fName;
    cout <<"Here's the information in a single string: "<<fullName<<endl;
}

void ChapterFourExercises::exercisesFour(){
    CandyBar snack{"Mocha Munch",2.3,350};
    cout << "Brand: " << snack.brand << endl
         << "Weight:" <<snack.weight << endl
         << "calories: " << snack.calories << endl;

}

void ChapterFourExercises::exercisesFive(){
    CandyBar snacks[3]{
        {"Mocha Munch-00",2.3,350},
        {"Mocha Munch-01",3.3,450},
        {"Mocha Munch-02",4.3,550}
    };
    for(int i=0;i<3;i++){
        cout << "Brand: " << snacks[i].brand << endl
             << "Weight:" << snacks[i].weight << endl
             << "calories: " << snacks[i].calories << endl
             << "-------------------------------------------"
             << endl;
    }
}

void ChapterFourExercises::exercisesSix(){
    Pizza mPizza;
    cout << "Enter company name: ";
    getline(cin,mPizza.pizza_company_name);
    cout << "Enter diameter: ";
    cin >> mPizza.diameter;
    cout << "Enter weight: ";
    cin >> mPizza.weight;
    cout <<endl;
    cout <<endl;
    cout << "pizza company name: " << mPizza.pizza_company_name << endl
         << "diameter: " << mPizza.diameter << endl
         << "weight: " << mPizza.weight << endl;
}

ChapterFourExercises::~ChapterFourExercises(){
    delete people;
}
