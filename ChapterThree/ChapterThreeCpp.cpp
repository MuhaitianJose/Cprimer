#include "chapterthreecpp.h"
#include <climits>
#include <iostream>
#define ZERO 0

using namespace std;

ChapterThreeCpp::ChapterThreeCpp()
{

}

void ChapterThreeCpp::testLimits(){
    int n_init = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    cout << "int is " << sizeof n_init <<" bytes. "<<endl;
    cout << "short is " << sizeof n_short << " bytes." <<endl;
    cout << "long is " <<sizeof n_long << " bytes." << endl;
    cout << "long long is "<< sizeof n_llong << " bytes." << endl;
    cout << endl;

    cout << "Maximum values: " << endl;
    cout << "int: " << n_init << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long " << n_long << endl<< endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;

}

void ChapterThreeCpp::exceed(){
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << " Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl
         << " Add $1 to each account." << endl << "Now ";
    sam = sam +1;
    sue = sue +1;
    cout << " Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited.\n Poor Sam!" << endl;

    sam = ZERO;
    sue = ZERO;

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl;
    cout << "Take $1 from each account." << endl << "Now";

    sam = sam - 1;
    sue = sue - 1;

    cout << "Sam has " << sam << " dollars and Sue has " << sue;
    cout << " dollars deposited." << endl << "Lucky Sue" << endl;


}

void ChapterThreeCpp::hexoct1(){
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42 in decimal)\n";
    cout << "waist  = " << waist << " 0x42 in hex\n";
    cout << "inseam = " << inseam << " 042 in octal\n";
}
void ChapterThreeCpp::hexoct2(){
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "Monsieur cuts a striking figure!" << endl;
    cout << "Monsieur cuts a striking figure!\n";
    cout << "chest = " << chest << " (42 in decimal)"<<endl;
    cout << hex;
    cout << "waist  = " << waist << " 0x42 in hex"<<endl;
    cout << oct;
    cout << "inseam = " << inseam << " 042 in octal"<<endl;
}

void ChapterThreeCpp::chartype(){
    char ch;
    cout << "Enter a character: " << endl;
    cin >> ch;
    cout << "Hola! ";
    cout << "Thank you for the " << ch << " character." <<endl;
}

void ChapterThreeCpp::morechar(){
    char ch = 'M';
    int i = ch;

    cout << "The ASSCII code for " << ch << " is " << i << endl;
    cout << "Add one to the character code:" << endl;

    ch = ch +1;
    i = ch;

    cout << "The ASCII code for " << ch << " is " << i <<endl;

    cout << "Displaying char ch using cout.put(ch): ";
    cout.put(ch);
    cout.put('!');

    cout << endl << "Done" << endl;

}
