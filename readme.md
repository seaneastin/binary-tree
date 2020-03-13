| Sean Eastin|
| :---          	|
| s198013    	|
| Intro to c++|
||

## I. Requirements

1. Description of Problem 

	- **Name**: Linked list

	- **Problem Statement**: creaate a double linked list that we can insert ande delete nodes from

	- **Problem Specifications** :

2. Input Information(All information being given to the application)

3.  Output Information
the program displays a binary tree in a window




1. _System Architecture_

 

3. ### Object Information

   **File**: TreeNode.h

     Description: 
     
    **Attributes(This is a list of each variable,function, and property inside the class**

         Name: TreeNode
             Description: the constructor for treenode
             Type: Function
             arguments: int value

         Name: hasLeft
             Desceription: checks if the node has a left child
             Type: function

         Name: hasRight
             Desceription: checks if the node has a right child
             Type: function

         Name: getData
             Desceription: returns the data in the node
             Type: function

         Name: getLeft
             Desceription: returns the left node
             Type: function

         Name: getRight
             Desceription: returns the right node
             Type: function

         Name: setData
             Desceription: sets the data of the node
             Type: function
             arguments: int value

         Name: setLeft
             Desceription: sets the left child node
             Type: function
             arguments: TreeNode* node

         Name: setRight
             Desceription: sets the right child node
             Type: function
             arguments: TreeNode* node

         Name: draw
             Desceription: draws the node
             Type: function
             arguments: int x, int y, bool selected = false


         Name: m_value
             Desceription: the data inside the node
             Type: int

         Name: m_left
             Desceription: the nodes left child
             Type: TreeNode*

         Name: m_right
             Desceription: the nodes right child
             Type: TreeNode*



    **File**: BinaryTree.h

     Description:


    **Attributes**


        Name: BinaryTree
        Description:  default constructor for the binarytree
        Type: function

        Name: isEmpty
             Description: checks if binary tree is empty
             inserts a node at the front of the list
             Type: function

         Name: insert
             Desceription: insert's a node
             inserts a node at the end of the list
             Type: function
             arguments: int a_nValue

         Name: remove
             Desceription: delete's a node
             deletes a node at the end of the list
             Type: function
             arguments: int a_nValue
 

          Name: find
             Desceription: finds if a node is in the list
             checks if the specified node exists
             Type: function
             arguments: int a_nValue


         Name: draw
             Desceription: draws the binarytree
             Type: function
             arguments: TreeNode* selected = nullptr

         Name: findNode
             Desceription: checks if a node exists
             Type: function
             arguments: TreeNode* selected = nullptr

         Name: draw
             Desceription:  draws the binary tree
             Type: function
             arguments: TreeNode* pNode, int x, int y, int horizontalSpacing, TreeNode* selected = nullptr

         Name: m_pRoot
             Desceription:  the troot node of the tree
             Type: function
             arguments: TreeNode* pNode, int x, int y, int horizontalSpacing, TreeNode* selected = nullptr