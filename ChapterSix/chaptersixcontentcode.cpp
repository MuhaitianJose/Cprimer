#include "chaptersixcontentcode.h"
#include <iostream>
#include <cctype>

using namespace std;

ChapterSixContentCode::ChapterSixContentCode()
{

}

void ChapterSixContentCode::ifExample(){
    char ch;
    int spaces = 0,total=0;
    cin.get(ch);
    while (ch !='.') {
        if(ch == ' '){
            ++spaces;
        }
        ++total;
        cin.get(ch);
    }

    cout << spaces << " spaces, " << total;
    cout << " characters total in sentence " << endl;
}

void ChapterSixContentCode::ifElseExample(){
    char ch;
    cout << "Type, and I shall repeat." << endl;
    cin.get(ch);
    while (ch!='.') {
        if(ch=='\n'){
            cout << ch;
        }else {
            cout << ++ch;
        }

        cin.get(ch);
    }

    cout << endl << "Please excuse the slight confusion" << endl;
}

void ChapterSixContentCode::ifelseifExample(){
    const int Fave = 27;
    int n;
    cout << "Enter a number in the range 1-100 to find ";
    cout << "my favorite number: ";
    do{
        cin >> n;
        if(n < Fave){
            cout << "Too low -- guess again: ";
        }else if (n>Fave) {
            cout << "Too high -- guess again: ";
        }else {
            cout << Fave << " is right!" << endl;
        }
    }while (n!=Fave) ;
}

void ChapterSixContentCode::cctypes(){
    cout << "Enter text for analysis, and type @ to terminate input." << endl;
    char ch;
    int whitespace=0;
    int digits = 0;
    int chars = 0;
    int punct = 0;
    int other = 0;
    cin.get(ch);

    while (ch!='@') {
        if(isalpha(ch)){
            chars++;
        }else if (isdigit(ch)) {
            digits++;
        }else if (isspace(ch)) {
            whitespace++;
        }else if (ispunct(ch)) {
            punct++;
        }else {
            other ++;
        }

        cin.get(ch);
    }

    cout << "Whitespace=" << whitespace << endl
         << "digits=" << digits << endl
         << "chars=" << chars << endl
         << "punct=" << punct << endl
         << "other=" << other << endl;
}

void ChapterSixContentCode::condit(){
    int a,b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "The larger of " << a << " and " << b;
    int c = a>b? a : b;

    cout << " is " << c << endl;
}

void ChapterSixContentCode::useSwitch(){
    showmenu();
    int choice;
    cin >> choice;
    while (choice!=5) {
        switch (choice) {
        case 1:
            cout << "\a" << endl;
            break;
        case 2:
            report();
            break;
        case 3:
            cout << "The boss was in all day." << endl;
            break;
        case 4:
            comfort();
            break;
        default:
            cout << "That's not a choice." << endl;
            break;
        }
        showmenu();
        cin >> choice;
    }
    cout << "Bye!" << endl;
}

void ChapterSixContentCode::showmenu(){
    cout << "Please enter 1,2,3,4,or 5: " << endl
         << "1) alarm               2) report" << endl
         << "3) alibi               4) comfort" << endl
         << "5) quit" << endl;
}

void ChapterSixContentCode::report(){
    cout << "It's been an excellent week for business." << endl
         << "Sales are up 120%. Expenses are down 35%." << endl;
}

void ChapterSixContentCode::comfort(){
    cout << "Your employees think you are the finest CEO" << endl
         << "in the industry. The board of directors think" << endl
         << "you are the finest CEO in the industry." << endl;
}

void ChapterSixContentCode::useEnum(){
    enum{red,orange,yellow,green,blue,violet,indigo};
    cout << "Enter color code (0-6): ";
    int code;
    cin >> code;
    while (code >= red && code <= indigo) {
        switch (code) {
        case red:
            cout << "Her lips were red." << endl;
            break;
        case orange:
            cout << "Her lips were orange." << endl;
            break;
        case yellow:
            cout << "Her lips were yellow." << endl;
            break;
        case green:
            cout << "Her lips were green." << endl;
            break;
        case blue:
            cout << "Her lips were blue." << endl;
            break;
        case violet:
            cout << "Her lips were violet." << endl;
            break;
        case indigo:
            cout << "Her lips were indigo." << endl;
            break;
        default:
            cout << "Here has nothing" << endl;
            break;
        }

        cout << " Enter color code (0-6): ";
        cin >> code;
    }

    cout << "Bye" << endl;

}
