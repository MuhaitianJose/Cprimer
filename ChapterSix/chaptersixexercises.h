#ifndef CHAPTERSIXEXERCISES_H
#define CHAPTERSIXEXERCISES_H
#include <iostream>

using namespace std;

const int striSize = 60;

struct bop{
    char full_name[striSize];
    char title[striSize];
    char bop_name[striSize];
    int preference;
};

struct donor{
    string name;
    double store_money;
};

class ChapterSixExercises
{
public:
    ChapterSixExercises();
    void exercisesOne();
    void exercisesTwo();
    void exercisesThree();
    void exercisesFour();
    void exercisesFive();
    void exercisesSix();
    void exercisesSeven();
    void exercisesEighth();
    void exercisesNine();
private:
    void showMenu();
    void showMenuFour();
};

#endif // CHAPTERSIXEXERCISES_H
