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
	if (m_pRoot == nullptr)
	{
		m_pRoot = treenode;
	}

	TreeNode* current;
	TreeNode* parent = nullptr;
	current = m_pRoot;
	while (current != nullptr)
	{
		if (a_nValue < current->getData())
		{
			parent = current;
			current = current->getLeft();
		} 
		else if (a_nValue > current->getData())
		{
			parent = current;
			current = current->getRight();
		}
		else if (a_nValue = current->getData())
		{
			return;
		} 
	}



	if (a_nValue < parent->getData())
	{
		parent->setLeft(treenode);
	}

	if (a_nValue > parent->getData())
	{
		parent->setRight(treenode);
	}




}

void BinaryTree::remove(int a_nValue)
{

}

TreeNode * BinaryTree::find(int a_nValue)
{
	return nullptr;
}

void BinaryTree::draw(TreeNode * selected)
{
	draw(m_pRoot, 640, 100, 640, selected);
}

void BinaryTree::draw(TreeNode * pNode, int x, int y, int horizontalSpacing, TreeNode * selected)
{
	//Cut the horizontal spacing in half
	horizontalSpacing /= 2;

	//Check that the current node exists
	if (pNode) {
		//Check for a left node
		if (pNode->hasLeft()) {
			//Draw a line to the left node
			DrawLine(x, y, x - horizontalSpacing, y + 80, RED);
			//Draw the left node
			draw(pNode->getLeft(), x - horizontalSpacing, y + 80, horizontalSpacing, selected);
		}
		//Check for a right node
		if (pNode->hasRight()) {
			//Draw a line to the right node
			DrawLine(x, y, x + horizontalSpacing, y + 80, RED);
			//Draw the right node
			draw(pNode->getRight(), x + horizontalSpacing, y + 80, horizontalSpacing, selected);
		}
		//Draw the current node
		pNode->draw(x, y, (selected == pNode));
	}
}
