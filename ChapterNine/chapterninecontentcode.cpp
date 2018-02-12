#include "chapterninecontentcode.h"
#include <iostream>
#include "coordin.h"
using namespace std;
ChapterNineContentCode::ChapterNineContentCode()
{

}

void ChapterNineContentCode::code_one(){
    rectH rplace;
    polarH pplace;

    cout << "Enter the x and y values: " ;
    while (cin >> rplace.x >> rplace.y) {
        pplace = rect_to_polar(rplace);
        show_polar(pplace);

        cout << "Next two numbers (q to quit): " ;
    }

    cout << "Bye!" << endl;
}
