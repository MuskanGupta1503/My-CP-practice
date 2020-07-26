#include<iostream>
#include<queue>
using namespace std;

class node
{
public:
	int data;
	node* left;
	node* right;

	node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
};

node* create()
{
	queue<node*>q;
	int data;
	cin>>data;
	node* root=new node(data);
	q.push(root);
	while(!q.empty())
	{
		int left,right;
		cin>>left>>right;
		node* f=q.front();
		q.pop();
		if(left!=-1)
		{
			f->left=new node(left);
			q.push(f->left);
		}
		if(right!=-1)
		{
			f->right=new node(right);
			q.push(f->right);
		}
	}
	return root;
}

void levelOrder(node* root)
{
	queue<node*>q;
	q.push(root);
	q.push(NULL);

	while(!q.empty())
	{
		node* n=q.front();
		q.pop();

		if(n==NULL)
		{
			cout<<endl;
			if(!q.empty())
			{
				q.push(NULL);
			}
		}
		else
		{
			cout<<n->data<<" ";
			if(n->left)
			{
				q.push(n->left);
			}

			if(n->right)
			{
				q.push(n->right);
			}
		}
	}
}

int main()
{
    node *root=create();
    levelOrder(root);
}
