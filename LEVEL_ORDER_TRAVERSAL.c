/*
    PROGRAM:TREE TRAVERSAL IN LEVEL ORDER TRAVERSAL
    DATE:10th JANUARY 2020
    AUTHOR: HARSH MISHRA
*/
#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
struct treeNode
{
    int data;
    struct node* left;
    struct node* right;
};
void printLevelOrderTraversal(struct node* root)
{
    int front , rear ;
    struct node* temp=root;
    struct node *queue=createQueue(rear,front);

    while(temp)
    {
        printf("%d",temp->data);
     if(temp->left)
            enQueue(queue,rear,temp->left);
     if(temp->right)
            enQueue(queue,rear,temp->right);
     temp=deQueue(queue,front);
    }
}
void createQueue(struct node* root,int rear,int front)
{
    struct node* queue=(struct node*)malloc(sizeof(struct node));
    front=rear=0;
    return queue;
}
struct node* newNode(int data)
{
    struct node* newNode=(struct node*)malloc(sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;

    return (node);
};
void enQueue(struct node* queue,int front,struct node* newNode)
{
    queue[rear]=newNode;
    rear++;
}
int deQueue(struct node* queue,int front)
{
    front++;
    return queue[front-1];
}
int main()
{
    struct node* root=newNode(1);
        root->left=newNode(2);
        root->right=newNode(3);
        root->left->left=newNode(4);
        root->left->right=newNode(6);
        root->right->right=newNode(5);

        printf("The elements in the tree are" );
        printLevelOrderTraversal(root);
        return 0;
}

