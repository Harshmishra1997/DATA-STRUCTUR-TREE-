/*
    PROGRAM :: TO CHECK THE TREE IS IDENTICAL OR NOT
    DATE :: 10TH JANUARY 2020
    AUTHOR ::HARSH MISHRA
*/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node* left;
    struct node* right;
};
struct node* newNode(int data)
{
    struct node* newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=data;
    newNode->left=NULL;
    newNode->right=NULL;
    return(newNode);
}

bool identical(struct node* root1,struct node* root2)
{
    if(root1==NULL && root2==NULL)
        return true;
    else
    {
        if(root1->data==root2->data)
        {
            identical(root1->left,root2->left);
            identical(root1->right,root2->right);
        }
        else
        return false;
    }

}
int main()
{
    struct node* root1=newNode(1);      //structure of Tree 1
    root1->left=newNode(2);
    root1->right=newNode(3);
    root1->left->left=newNode(4);
    root1->left->right=newNode(5);
    root1->right->left=newNode(6);
    root1->right->right=newNode(7);

    struct node* root2=newNode(1);      //structure of Tree 2
    root2->left=newNode(2);
    root2->right=newNode(3);
    root2->left->left=newNode(4);
    root2->left->right=newNode(5);
    root2->right->left=newNode(6);
    root2->right->right=newNode(7);


    bool result=identical(root1,root2);

    if(result)
        printf("trees are identical\n");
    else
        printf("trees are not equal\n");
    return 0;
}



