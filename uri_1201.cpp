#include <iostream>
#include <stdlib.h>


using namespace std;
class treeNode
{
	int data;
	treeNode *left;
	treeNode *right;
public:
  int i;
treeNode* FindMin(treeNode *node)
{
	if(node == NULL)
	{

		return NULL;
	}
	if(node->left)
		return FindMin(node->left);
	else
		return node;
}
treeNode* FindMax(treeNode *node)
{
	if(node == NULL)
	{

		return NULL;
	}
	if(node->right)
		return(FindMax(node->right));
	else
		return node;
}
treeNode *Insert(treeNode *node, int data)
{
	if(node == NULL)
	{
		treeNode *temp;
		temp = new treeNode;
		temp -> data = data;
		temp -> left = temp -> right = NULL;
		return temp;
	}
	if(data > (node->data))
	{
		node->right = Insert(node->right, data);
	}
	else if(data < (node->data))
	{
		node->left = Insert(node->left, data);
	}

	return node;
}
treeNode * Delet(treeNode *node, int data)
{
	treeNode *temp;
if(node == NULL){
	return node;
	
}
	else if(data < node->data)
	{
		node->left = Delet(node->left, data);
	}
	else if(data > node->data)
	{
		node->right = Delet(node->right, data);
	}
	else
	{

		if(node->right && node->left)
		{

			temp = FindMax(node->left);
			node -> data = temp->data;

			node -> left = Delet(node->left, temp->data);
		}
		else
		{

			temp = node;
			if(node->left == NULL)
				node = node->right;
			else if(node->right == NULL)
				node = node->left;
			free(temp);
		}
	}
	return node;
}
treeNode * Find(treeNode *node, int data)
{
	if(node == NULL)
	{

		return NULL;
	}
	if(data > node->data)
	{

		return Find(node->right, data);
	}
	else if(data < node->data)
	{

		return Find(node->left, data);
	}
	else
	{

		return node;
	}
}
void Inorder(treeNode *node)
{
	if(node == NULL)
	{
		return;
	}else{
	Inorder(node->left);
	if(i==0){
	cout << node->data;
	i=1;
	}else cout << " " << node->data;
	Inorder(node->right);
	}
}
void Preorder(treeNode *node)
{
	
	if(node == NULL)
	{
		return;
	}else{
		if(i==0){
	cout << node->data;
	i=1;
}else cout << " " << node->data;
	Preorder(node->left);
	Preorder(node->right);
	}
}
void Postorder(treeNode *node)
{
	
	if(node == NULL)
	{
		return;
	}else{
	Postorder(node->left);
	Postorder(node->right);
	if(i==0){	
	cout << node->data;
	i=1;
  }else cout << " " << node->data;
	}
}



};



int main()
{
	treeNode *c = new treeNode();
	treeNode *root = NULL, *temp;
	
	int ch;
	string line;

	while(cin >> line)
	{
		

		if (line == "I")
		{
			cin >> ch;
			root = c->Insert(root, ch);


		}
		else if(line == "R")
		{
		cin >> ch;
		
			root = c->Delet(root, ch);
		}
		else if (line == "INFIXA")
		{
			c->i=0;
			c->Inorder(root);
				if (root!= NULL)cout << endl;
		}
		else if (line == "PREFIXA")
		{
			c->i=0;
			c->Preorder(root);
				if (root!= NULL)cout << endl;
		}
		else if(line == "POSFIXA")
		{
				c->i=0;
			c->Postorder(root);
			if (root!= NULL)cout << endl;
				
			
		}
		else if(line == "P")
		{

		cin >> ch;
			temp = c->Find(root, ch);
			if(temp == NULL)
			{
				cout << ch << " nao existe" << endl;
			}
			else
			{
				cout << ch << " existe\n";
			}
		}

	}

	return 0;
}