#ifndef TESTPOINTER_H
#define TESTPOINTER_H

double pam(int time);
double betsy(int lns);
const double* f1(const double *arr,int n);
const double* f2(const double arr[],int n);
const double* f3(const double arr[],int n);
void muhaitian(int arr[],int size,int value);
void muhaitian_(int* begin,int* end,int value);
double findMaxValue(const double arr[],int size);
#endif // TESTPOINTER_H
