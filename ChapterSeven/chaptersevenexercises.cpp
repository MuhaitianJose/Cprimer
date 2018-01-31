#include "chaptersevenexercises.h"
#include "chapterseven.h"
#include <iostream>

using namespace std;

ChapterSevenExercises::ChapterSevenExercises()
{

}

void ChapterSevenExercises::exercisesOne(){
    double x=0,y=0;
    cout << "Please Enter x y: ";
    cin >>x>>y;
    while (x!=0&&y!=0) {
        double value = 2.0*x*y/(x+y);
        cout << "Harmonic mean: " << value << endl
             <<"Please Enter x y: ";
        cin >>x>>y;
    }
}
void ChapterSevenExercises::exercisesTwo(){
    int arr[10];
    int size = fill_arr(arr,10);
    show_arr(arr,size);
    average_arr(arr,size);
}

void ChapterSevenExercises::exercisesThree(){
    box mBox={"muhaitian",12,13,14,0};
    cout << "show box: " << endl;
    show_box(mBox);
    cout << endl << "show box by address,change volume:" << endl;
    show_box_address(&mBox);
    cout << endl <<"show box after change" << endl;
    show_box(mBox);
}

void ChapterSevenExercises::exercisesFour(){
    double total,choices,mtotal;
    long double probability1,probability2;
    cout << "Enter total number of game card choices and" << endl
         << "number of picks allowed for the field:" << endl;
    while ((cin >> total >> choices) && choices < total) {
        cout << "Enter total number of game card choices and" << endl
             << "number of picks allowed for the mega:" << endl;
        if(!(cin >> mtotal)){
            break;
        }
        probability1 = probability(total,choices);
        probability2 = probability(mtotal,1);
        cout << "The chances of getting all "
             << choices
             << " picks is one in"
             << probability1 << "."
             << endl;
        cout << "The chances of getting the megaspot is one in"
             << probability2 << "." << endl;
        cout << "You have one chance in ";
        cout << probability1*probability2;
        cout << " of winning." << endl;
        cout << "Next set of numbers (q to quit):";
    }
    cout << "bye" << endl;
}

void ChapterSevenExercises::exercisesFive(){
    int n=0;
    cout << "Please enter n: ";
    cin >> n;

    cout << n << "!= " << recursive(n);
}

void ChapterSevenExercises::exercisesSix(){
    double arr[10] ;
    int size = 0;
    size = Fill_array(arr,10);
    cout << "show fill array: " << endl;
    Show_array(arr,size);
    Reverse_array(arr,size);
    cout << "show reverse array: " << endl;
    Show_array(arr,size);
}

void ChapterSevenExercises::exercisesSeven(){

}

void ChapterSevenExercises::exercisesEight(){

}

void ChapterSevenExercises::exercisesNine(){

}

void ChapterSevenExercises::exercisesTen(){

}

