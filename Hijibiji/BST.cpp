#include<bits/stdc++.h>
using namespace std;
#define endl "\n";
typedef struct tree
{
	int number;
	struct tree *leftChild;
	struct tree *rightChild;
}node;
node *root = NULL;
void insertNode(int value)
{
	node *tempNode;
	node *currentNode=NULL;
	node *parentNode=NULL;
	tempNode = (node *) malloc (sizeof(node));
	tempNode->number=value;
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
bool BST(int item)
{
	node *currentNode=root;
	int flag=0;
	while(1)
	{
		if(currentNode->number==item)
		{
			return true;
		}
		else if(currentNode->number<item)
		currentNode=currentNode->rightChild;
		else
		currentNode=currentNode->leftChild;
		if(currentNode==NULL)
		return false;
	}
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
	cout<<"Insertion done"<<endl;
	int item;
	cin>>item;
	if(BST(item))
	{
		cout<<item<<" is found"<<endl;
	}
	else
	{
		cout<<item<<" is not found"<<endl;
	}
}