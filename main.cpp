#include<iostream>
#include "treenode.h"
#include "carray.h"

using namespace std;

int main()
{
    //-----------------------
    // exercise 2
    //-----------------------

    cout <<"Enter the size of array to be created :" <<endl;
    int size1; cin >> size1;

    CArray array1(size1); //Calling out constructor with parameters for building array of size1 integers

    cout <<"\nThe array before sorting : "<<endl;
    array1.Display(); //Displaying the elements of array

    array1.BubbleSort(); //Funcion within the class to sort the array elements
    cout <<"\nOutput after bubble sort in descending order" << endl;
    array1.Display();

    //-----------------------
    // exercise 3
    //-----------------------

    cout <<"Enter the size of another array to be created :" <<endl;
    int size2; cin >> size2;

    CArray array2(size2); //Calling out constructor with parameters for building array

    array2.Quicksort(0, size2-1); //Start will always be 0 and end will be (size of array-1)
    cout <<"\nOutput after quick sort : "<< endl;
    array2.Display();

    //-----------------------
    // exercise 7
    //-----------------------

    cout <<"How many numbers do you want to add to the tree?"<<endl;
    int size3; cin>>size3;

    CArray array3(size3); //Calling out constructor with parameters for building array

    TreeNode* root;
    root = new TreeNode (array3.data[0]);

    for (int i=1;i<size3;i++)
    {
        TreeNode* newNode = new TreeNode(array3.data[i]);
        root->buildTree(newNode);
    }

    cout << "-----------PRE-ORDER DISPLAY-------------" << endl;
    printPreorder(root);
    cout << "-----------POST-ORDER DISPLAY-------------" << endl;
    printPostorder(root);
    cout << "-----------IN-ORDER DISPLAY-------------" << endl;
    printInOrder(root);


    return 0;
}
