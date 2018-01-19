#include "chapterfourcontentcode.h"
#include <iostream>
#include <cstring>

using namespace std;

ChapterFourContentCode::ChapterFourContentCode()
{

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
