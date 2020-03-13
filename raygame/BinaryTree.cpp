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
	TreeNode* current;
	TreeNode* parent;
	
	if (findNode(a_nValue, &current, &parent))
	{
		if (current->hasRight())
		{
			TreeNode* minnode;
			minnode = current->getRight();
			if (!minnode->getLeft())
			{
				parent = current;
			}

			while (minnode->hasLeft())
			{
				parent = minnode;
				minnode = minnode->getLeft();
			}
			current->setData(minnode->getData());
			if (minnode == parent->getLeft())
			{
				parent->setLeft(minnode->getRight());
				delete minnode;
			}
			if (minnode = parent->getRight())
			{
				parent->setRight(minnode->getRight());
				delete minnode;
			}
		}
		else
		{
			if (current == parent->getLeft())
			{
				parent->setLeft(current->getLeft());
				delete current;
			}
			if (current == parent->getRight())
			{
				parent->setRight(current->getLeft());
				delete current;
			}
			if (current == m_pRoot)
			{
				m_pRoot = current->getLeft();
				delete current;
			}
		}
	}


	



}

TreeNode * BinaryTree::find(int a_nValue)
{
	TreeNode* temp = new TreeNode(2);
	return temp;
}

void BinaryTree::draw(TreeNode * selected)
{
	draw(m_pRoot, 640, 100, 640, selected);
}

bool BinaryTree::findNode(int a_nSearchValue, TreeNode ** ppOutNode, TreeNode ** ppOutParent)
{

	TreeNode* current;
	TreeNode* parent;
	parent = m_pRoot;
	current = m_pRoot;
	while (current != nullptr)
	{
		if (a_nSearchValue == current->getData())
		{
			*ppOutNode = current;
			*ppOutParent = parent;
			return true;
		}
		else
		{
			if (a_nSearchValue < current->getData())
			{
				parent = current;
				current = current->getLeft();

			}
			else if (a_nSearchValue > current->getData())
			{
				parent = current;
				current = current->getRight();
			}
		}
	}

	return false;


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
