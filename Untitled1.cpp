#include <iostream>
using namespace std;
struct Node
{
    long element=2147483648;
    Node* lchild=NULL;
    Node* rchild=NULL;
};
int a[400000];
Node* input(Node* p)
{
    cin>>p->element;
    if(p->element==0) {Node* q;q=(Node*)new(Node);p->lchild=input(q);
                        Node* z;z=(Node*)new(Node);p->rchild=input(z);}
    return p;
}
void displaytree(Node* p,int i)
{
    if (p!=NULL)
    {
       a[i]=p->element;
       displaytree(p->lchild,2*i+1);
       displaytree(p->rchild,2*i+2);
    }
}
void adjust(Node* p)
{
    if (p!=NULL)
    {
        if(p->element == 0)
        {
            if(p->lchild->element > p->rchild->element)
            {
                Node* q;
                q=p->lchild;
                p->lchild=p->rchild;
                p->rchild=q;
            }
            adjust(p->lchild);
            adjust(p->rchild);
        }

    }
}
int main()
{
    int n;
    cin>>n;
    Node* root;
    root=(Node*)new(Node);
    input(root);
    displaytree(root,0);
    int i;
    //for(i=0;i<2*n-1;i++) cout<<i<<" "<<a[i]<<endl;
    adjust(root);displaytree(root,0);
    //for(i=0;i<2*n-1;i++) cout<<i<<" "<<a[i]<<endl;
    int j,sum;
    for(i=0,sum=0;i<2*n-2;i++)
    {
        for(j=i+1;j<2*n-1;j++)
        {
            if((a[i]!=0 && a[j]!=0) && (a[i]>a[j])) sum++;
        }
    }
    cout<<sum<<endl;

    return 0;
}
