#include "chapterfourcontentcode.h"
#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

ChapterFourContentCode::ChapterFourContentCode()
{

    guest = {
        "muhiatian",
        1.88,
        29.99

    };

}



void ChapterFourContentCode::arrayone(){
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    //int yamcosts[3] = {20,30,5};
    int yamcosts[3]{20,30,5};

    cout << "Total yams = ";
    cout <<yams[0]+yams[1]+yams[2]<<endl;
    cout << "the package with " << yams[1] << " yams costs ";
    cout <<yamcosts[1] << " cents per yam.\n";
    int total = yams[0]*yamcosts[0]+yams[1]*yamcosts[1];
    total = total +yams[2]*yamcosts[2];
    cout << "The total yam expense is "<<total<<" cents.\n";

    cout << "\nSize of yams array = " << sizeof yams;
    cout << " bytes.\n";
    cout << "Size of one element = " << sizeof yams[0];
    cout << " bytes.\n";

}

void ChapterFourContentCode::strings(){
    const int Size = 15;
    char name1[Size];
    char name2[Size] = "C++owboy";

    cout << "Howdy " << name2;
    cout << "! What's your name?\n";

    cin >> name1;
    cout << "Well, " << name1 << ", your name has ";
    cout << strlen(name1) << " letters and is stored\n";
    cout << "in an array of " << sizeof(name1) << " bytes.\n";
    cout << "Your initial is " << name1[0] << ".\n";
    name2[3] = '\0';
    cout << "Here are the first 3 characters of my name: ";
    cout <<name2<<endl;


}

void ChapterFourContentCode::printStruct(){
    cout <<"name:" << guest.name << endl;
    cout <<"volum:" << guest.volum << endl;
    cout <<"price:"<< guest.price <<endl;
}

void ChapterFourContentCode::useUnion(){

    product.id_val.id_int = 45;

    cout << "widget.id_val.id_int:"<<product.id_val.id_int<<endl;
    cout << "widget.id_val.id_double:"<<product.id_val.id_double;

}

void ChapterFourContentCode::showAddress(){
    int douts = 56;
    double mk = 89;
    double *cups = &mk;
    int* pn = new int;
    *pn = 56;


    cout << "douts value=" << douts;
    cout << " and douts address=" << &douts << endl;

    cout << "mk value=" << *cups;
    cout << " mk address value = " <<cups <<endl;

    cout << "*cups value=" << *cups;
    cout << " cups value = " <<cups <<endl;

    char flower[10] = "rose";
    cout << flower <<"s are red" <<endl;
}

void ChapterFourContentCode::showVector(){
    vector <int> mk;

}





