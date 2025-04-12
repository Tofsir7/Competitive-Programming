#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
typedef struct tree
{
	int number;
	struct tree *leftChild;
	struct tree *rightChild;
}node;
node *root = NULL;
void insertNode(int value);
bool BST(int item);
void insertNode(int value)
{
	node *currentNode=NULL;
	node *parentNode=NULL;
	node *tempNode = new node();
	tempNode->number = value;
    tempNode->leftChild = NULL;
    tempNode->rightChild = NULL;
	if(root==NULL)
	{
		root=tempNode;
	}
	else
	{
		currentNode=root;
		while(1)
		{
			parentNode=currentNode;
			if(parentNode->number>value)
			{
				currentNode=parentNode->leftChild;
				if(currentNode==NULL)
				{
					parentNode->leftChild=tempNode;
					return;
				}
			}
			else
			{
				currentNode=parentNode->rightChild;
				if(currentNode==NULL)
				{
					parentNode->rightChild=tempNode;
					return;
				}
			}
		}
	}
}
void preOrder(node *root)
{
	if(root==NULL)
	return;
	cout<<root->number<<" ";
	preOrder(root->leftChild);
	preOrder(root->rightChild);
}

void inOrder(node *root)
{
	if(root==NULL)
	return;
	inOrder(root->leftChild);
	cout<<root->number<<" ";
	inOrder(root->rightChild);
}

void postOrder(node *root)
{
	if(root==NULL)
	return;
	postOrder(root->leftChild);
	postOrder(root->rightChild);
	cout<<root->number<<" ";
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    while(n--)
    {
    	int a;
    	cin>>a;
    	insertNode(a);
	}
	cout<<"Pre Order Traversing: ";
	preOrder(root);
	cout<<endl;
	cout<<"In Order Traversing: ";
	inOrder(root);
	cout<<endl;
	cout<<"Post Order Traversing: ";
	postOrder(root);
	
}
