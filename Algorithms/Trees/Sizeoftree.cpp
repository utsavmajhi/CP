/*
Write a program to Calculate Size of a tree | Recursion
Last Updated: 13-03-2019
Size of a tree is the number of elements present in the tree. Size of the below tree is 5.
Example Tree
Example Tree

Size() function recursively calculates the size of a tree. It works as follows:

Size of a tree = Size of left subtree + 1 + Size of right subtree.

Recommended: Please solve it on “PRACTICE” first, before moving on to the solution.
Algorithm:

size(tree)
1. If tree is empty then return 0
2. Else
     (a) Get the size of left subtree recursively  i.e., call 
          size( tree->left-subtree)
     (a) Get the size of right subtree recursively  i.e., call 
          size( tree->right-subtree)
     (c) Calculate size of the tree as following:
            tree_size  =  size(left-subtree) + size(right-
                               subtree) + 1
     (d) Return tree_size
*/
