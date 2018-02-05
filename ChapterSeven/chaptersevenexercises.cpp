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
    int properties[10];
    int* pbegin = properties;
    int* pend = fillArray(properties,properties+10);
    showArray(pbegin,pend);
    cout<<pbegin << endl;
    cout << pend << endl;
    if(pend-pbegin > 0){
        revalue(3,pbegin,pend);
        showArray(pbegin,pend);
    }
}

void ChapterSevenExercises::exercisesEightA(){
    double arr[10];
    fill_by_array(arr,10);
    show_by_array(arr,10);
}
void ChapterSevenExercises::exercisesEightB(){
    data mData = fill_by_data();
    show(mData);
}


void ChapterSevenExercises::exercisesNine(){
    cout << "Enter class size: ";
    int class_size = 0;
    cin >> class_size;
    while (cin.get()!='\n') {
        continue;
    }

    student *ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu,class_size);
    for(int i=0;i<entered;i++){
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu,entered);
    delete[] ptr_stu;
    cout << "Done" << endl;

}

void ChapterSevenExercises::exercisesTen(){
    double a,b;
    double (*pf[3])(double,double) = {add,sub,mean};
    char* op[3] = {"add","sub","mean"};
    while (cin >> a >> b) {
        for(int i=0;i<3;i++){
            cout << op[i] << ": " << a << " and " << b
                 << " = " << calculate(a,b,pf[i]) << endl;
        }
    }
}

void ChapterSevenExercises::show_by_array(double arr[],int size){
    cout << endl << "EXPENSES" << endl;
    double total = 0.0;
    for(int i=0;i<size;i++){
        cout << SNAMES[i] << ": $" << arr[i] << endl;
        total+=arr[i];
    }
    cout << "Total Expenses: $" << total << endl;
}
void ChapterSevenExercises::fill_by_array(double arr[],int size){
    double temp=0;
    for(int i=0;i<size;i++){
        cout << "Enter arr[" << i+1 << "]: " ;
        cin >> temp;
        //        if(!cin){
        //            cin.clear();
        //            while (cin.get()!='\n') {
        //                continue;
        //            }
        //        }
        arr[i] = temp;
    }
}
data ChapterSevenExercises::fill_by_data(){
    data expenses;
    for(int i=0;i<SEASON;i++){
        cout << "Enter arr[" << i+1 << "]: " ;
        cin >>expenses.arr[i];
    }
    return expenses;
}
void ChapterSevenExercises::show(data mData){
    cout << endl << "EXPENSES" << endl;
    double total = 0.0;
    for(int i=0;i<SEASON;i++){
        cout << SNAMES[i] << ": $" << mData.arr[i] << endl;
        total+=mData.arr[i];
    }
    cout << "Total Expenses: $ " << total << endl;
}

