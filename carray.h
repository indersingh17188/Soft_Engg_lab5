#include<iostream>
using namespace std;

class CArray {

public:
    int n;
    int* data;
    CArray(); //default constructor
    CArray(int); //constructor with parameters
    void Display (void); //function that displays the values of an array
    void BubbleSort (void); //function to sort the array
    void Quicksort (int , int);
    int Partition (int , int);

    ~CArray(); //destructor
};
