#include<iostream>
#include "treenode.h"
#include "carray.h"
using namespace std;

CArray::CArray()
{
    n = 0;
    data = 0;
}

CArray::CArray(int nb)
{
    n = nb;
    data = new int [n];

    for (int i=0;i<n;i++)
    {cout <<"enter the value to be inserted: ";
    cin >> *(data+i);}
}

CArray::~CArray()
{
    if (data) delete [] data;
}

void CArray::Display()
{
    for (int i=0; i<n ; i++)
        cout << *(data+i) << " ";
}

void CArray::BubbleSort()
{
    int temp;
    bool swapped;
    for(int i=0; i<(n-1); i++)
    {
        swapped = false;
        for(int j=0; j<(n-i-1); j++)
        {
            if(*(data+j) < *(data+j+1))
            {
                temp = *(data+j);
                *(data+j) = *(data+j+1);
                *(data+j+1) = temp;
                swapped = true;
            }
        }
        //If no swap is performed along the scan then jump out of the loops
        if (swapped == false) break;
    }
}

void CArray::Quicksort (int start, int end)
{
    if (end > start)
    {
        /*This function will return the position of partition index i.e.
        all the elements to the left of this indexed element are smaller than it and vice versa*/
        int pIndex = Partition(start, end) ;

        //recursive function to the left sub-part of the partitioned array
        Quicksort( start, pIndex - 1 ) ;

        //recursive function to the right sub-part of the partitioned array
        Quicksort ( pIndex + 1, end ) ;
    }
}

int CArray::Partition (int start, int end )
{
    int pivot = data[end]; //Our pivot will be pointing to the last element of the array
    int pIndex = start; //Initially our parition index will be at start of the array
    int temp; //a temporary variable which will be used for swapping

    //Loop will start from 1st element to the second last element of array towards right
    for (int i=start; i<end-1; i++)
    {
        //a swap will happen only for the those elements of array which are smaller or equal to the pivot element
        if (data[i]<=pivot)
        {
            temp = data[i] ;
            data[i] = data[pIndex] ;
            data[pIndex] = temp ;
            pIndex++; //partition index will be moved towards right
        }
    }

    /*after we are done with all the swapping for shorter elements to the left,
    we have to swap the pivot element with value at latest partition index*/
    temp = data[pIndex] ;
    data[pIndex] = data[end] ;
    data[end] = temp ;

    return pIndex ; //we will return the actual sorted position of our pivot element
}

