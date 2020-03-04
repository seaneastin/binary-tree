#include "BinaryTree.h"
#include "raylib.h"


BinaryTree::BinaryTree()
{
}


BinaryTree::~BinaryTree()
{
}

bool BinaryTree::isEmpty() const
{
	//return true if the root is null
	return false;
}

void BinaryTree::insert(int a_nValue)
{
	TreeNode* treenode = new TreeNode(a_nValue);
	if (m_pRoot = nullptr)
	{
		m_pRoot = treenode;
	}
	TreeNode* current;
	TreeNode* parent;
	current = m_pRoot;
	while (current != nullptr)
	{
		if (a_nValue < current->getData())
		{
			current = current->getLeft();
		} 
		else if (a_nValue > current->getData())
		{
			current = current->getRight();
		}
		else if (a_nValue = current->getData())
		{
			return;
		} 
	}




}

void BinaryTree::remove(int a_nValue)
{

}

void BinaryTree::draw(TreeNode * selected)
{
	draw(m_pRoot, 640, 680, 640, selected);
}

void BinaryTree::draw(TreeNode * pNode, int x, int y, int horizontalSpacing, TreeNode * selected)
{
	//cut the horizontal spacing in half
	horizontalSpacing /= 2;

	//check that the current node exists
	if (pNode) {
		//check for a left node
		if (pNode->hasLeft()) {
			//draw a line to the left node
			DrawLine(x, y, x - horizontalSpacing, y - 80, RED);
			//draw the left node
			draw(pNode->getLeft(), x - horizontalSpacing, y - 80, horizontalSpacing, selected);
		}
		//check for a right node
		if (pNode->hasRight()){}
		{
			//draw a line to the right node
			DrawLine(x, y, x + horizontalSpacing, y - 80, RED);
			//draw the right node
			draw(pNode->getRight(), x + horizontalSpacing, y - 80 , horizontalSpacing, selected);
		}
		pNode->draw(x, y, (selected == pNode));
	}
}
