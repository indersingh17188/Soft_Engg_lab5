# Soft_Engg_lab5
Laboratory no 3 for Software Engineering MSCV 2018-2020 

Tutorial n°5 - Sorting Algorithms


The focus of this lab is to study various algorithms to sort a table of integers, to study their complexities, and
to implement well-know (but sometimes tricky) algorithms.

1 Preliminary work
1. Implement a class CArray to represent an array of integers (use integer pointers and dynmaic allocation) and
its number of elements.
2. Add a constructor that randomly initializes the array.
3. Add a function to display the values of stored in the array.


2 A first and simple algorithm: Bubble Sort
On each pass, bubble sort scans the array, comparing each pair of adjacent elements. If two adjacent elements are
out of order, they are swapped. As long as at least one swap is performed along the scan, another pass is computed.

1. Add a function to the CArray class that realizes the Bubble Sort of the values.
2. Study the complexity of this algorithm as a function of the size of the table.

3 Quicksort
Quicksort works in a "divide and conquer" manner, as follows:
• split the initial list of numbers into parts around a "pivot"; all the values in the first part are less than the
pivot; all the values in the second part are greater than or equal to the pivot.
• recursively sort the two parts.
The first element a[l] is used as a pivot (which we will call x). It then divides the array of r elements into two
regions: elements less than x, and elements greater than or equal to x. 

1. Add a function to the class that realizes the Quicksort of the table.
2. Study the complexity of this algorithm as a function of the size of the table.
3. Can you think about a case that would increase the complexity?
4 Selection Sort
In selection sort the array is divided into two parts: the first part that is sorted and the second part that is not sorted
yet. Initially the sorted part is empty and the unsorted part consists of the whole array. In each step, the algorithm
searches through the unsorted part, finds the smallest element and puts it at the end of the sorted part.
1. Add a function to the class that realizes the Selection Sort of the table.
2. Study the complexity of this algorithm as a function of the size of the table.


5 Insertion Sort
The initialization of the algorithm is similar to the selection sort, dividing the array into a sorted and an unsorted
part. Each step of the algorithm picks the first item of the unsorted array (x) and inserts it into the right slot of the
sorted array. The elements of the sorted array > x are shifted one location forward.

1. Add a function to the class that realizes the Insertion Sort of the table.
2. Study the complexity of this algorithm as a function of the size of the table.


6 Sort using binary trees
We have seen in Labs4 how objects can be linked into lists. Today, we’ll look at one of the most basic and useful
structures of this type: binary trees. Each of the objects in a binary tree contains two pointers, typically called
le f t and right. In addition to these pointers, of course, the nodes can contain other types of data, an integer value
in our case. For example, a binary tree of integers could be made up of objects of the following type:

class TreeNode {
private:
int item; // The data in this node
TreeNode *left; // Pointer to the left subtree
TreeNode *right; // Pointer to the right subtree
...
};

The left and right pointers in a TreeNode can be NULL or can point to other objects of type TreeNode. A node that points to another node is said to be the parent of that node, and the node it points to is called a child. In the picture at the right, for example, node 3 is the parent of node 6, and nodes 4 and 5 are children of node 2. Not every linked structure made up of tree nodes is a binary tree.
A binary tree must have the following properties: There is exactly one node in the tree which has no parent.
This node is called the root of the tree. Every other node in the tree has exactly one parent. Finally, there can be
no loops in a binary tree. That is, it is not possible to follow a chain of pointers starting at some node and arriving
back at the same node.
A node that has no children is called a leaf. A leaf node can be recognized by the fact that both the left and
right pointers in the node are NULL. In the standard picture of a binary tree, the root node is shown at the top and
the leaf nodes at the bottom. Consider any node in a binary tree. Look at that node together with all its descendents (that is, its children, the children of its children, and so on). This set of nodes forms a binary tree, which is called a subtree of the original tree. 

There exist 3 strategies to completely traverse a binary tree:
• The Pre-Order traversal: at each node the root is evaluated first, then the left sub tree, then the right subtree.
• The Post-Order traversal: the left subtree first, then the right subtree, then the root.
• The In Oder traversal: left, root, then right.


7 Application to sort integers
Create a class Node to represent a binary tree. The data contained in each node will be of type int. The program
should first ask to the user to enter all the values using our CArray class previously defined.

For each new value, the tree is constructed following a simple rule: the first value within the array will always be
the root. Then, for all the other values, if they are smaller than a value stored in a node, then they are stored in
the left child node, otherwise in the right node. The process goes on recursively until all the values from the array
are stored in the tree. Once the tree is built, you can traverse the tree recursively in pre-order(Root, Left, Right) ,
post-order (Left, Right, Root), and in-order (Left, root, Right). This lastest displays the values in a sorted manner,
so you just have to store these sorted values in your array and you are done with this labs...
