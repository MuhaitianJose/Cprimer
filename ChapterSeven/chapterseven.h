#include "chaptersevenexercises.h"
#ifndef CHAPTERSEVEN_H
#define CHAPTERSEVEN_H

const int SLEN = 30;
struct student{
    char full_name[SLEN];
    char hobby[SLEN];
    int ooplevel;
};

void show_arr(int arr[],int limit);
int fill_arr(int arr[],int limit);
void average_arr(int arr[],int limit);
void show_box(box mBox);
void show_box_address(box* mBox);
long double probability(unsigned numbers,unsigned picks);
long double recursive(int n);
int Fill_array(double arr[],int limit);
void Show_array(double arr[],int limit);
void Reverse_array(double arr[],int limit);
int* fillArray(int* begin,int* end);
void showArray(const int* begin,const int* end);
void revalue(int r,int* begin,int* end);

int getinfo(student pa[],int n);
void display1(student st);
void display2(const student *ps);
void display3(const student pa[],int n);

double calculate(double x,double y,double (*pf)(double,double));
double add(double x, double y);
double sub(double x, double y);
double mean(double x, double y);
#endif // CHAPTERSEVEN_H
