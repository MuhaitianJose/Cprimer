#ifndef CHAPTERFOUREXERCISES_H
#define CHAPTERFOUREXERCISES_H

#include <iostream>

using namespace std;

struct People{
    string first_name;
    string last_name;
    string grade;
    int age;
};

struct CandyBar{
    string brand;
    float weight;
    int calories;
};

struct Pizza{
    string pizza_company_name;
    float diameter;
    float weight;
};

class ChapterFourExercises
{
public:
    ChapterFourExercises();
    People* people;

    void exercisesOne();
    ~ChapterFourExercises();
    void exercisesTwo();
    void exercisesThree();
    void exercisesFour();
    void exercisesFive();
    void exercisesSix();
    void exercisesSeven();

    void exercisesEight();
    void exercisesNine();
};

#endif // CHAPTERFOUREXERCISES_H
