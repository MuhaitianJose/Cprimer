#ifndef CHAPTERSEVENEXERCISES_H
#define CHAPTERSEVENEXERCISES_H

struct box{
    char maker[40];
    float height;
    float width;
    float lenght;
    float volume;
};
const int SEASON = 4;
struct data{
    double arr[SEASON];
};

class ChapterSevenExercises
{
public:

    const char* SNAMES[SEASON] = {"Spring","Summer","Fall","Winter"};
    ChapterSevenExercises();
    void exercisesOne();
    void exercisesTwo();
    void exercisesThree();
    void exercisesFive();
    void exercisesFour();
    void exercisesSix();
    void exercisesSeven();

    void exercisesNine();
    void exercisesTen();
    void exercisesEightA();
    void exercisesEightB();
private:
    void show_by_array(double arr[], int size);
    void fill_by_array(double arr[], int size);
    data fill_by_data();
    void show(data mData);
};

#endif // CHAPTERSEVENEXERCISES_H
