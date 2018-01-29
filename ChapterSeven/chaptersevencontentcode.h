#ifndef CHAPTERSEVENCONTENTCODE_H
#define CHAPTERSEVENCONTENTCODE_H
#include <iostream>
#include <array>
using namespace std;
struct travel_time{
    int hours;
    int mins;
};

struct rect{
    double x;
    double y;
};

struct polar{
    double distance;
    double angle;
};

class ChapterSevenContentCode
{
public:
    static const int SEASON_SIZE = 4;
    ChapterSevenContentCode();
    void callingSimple();
    int sum_arr(int arr[], int size);
    void show_array(const int arr[], int size);

    int sum_arr_by_pointer(const int *begin, const int *end);
    void const_and_pointer();
    void array_2d();
    unsigned int c_in_str(const char *str, char ch);
    char *buildstr(char ch, int Size);
    travel_time travel_time_sum(travel_time t1, travel_time t2);
    void show_time(travel_time time);

    void display(const string str[], int size);

    void fill(array<string, SEASON_SIZE> *pa);
    void count_down(int n);
};

#endif // CHAPTERSEVENCONTENTCODE_H
