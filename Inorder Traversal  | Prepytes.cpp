// Complete the inOrderTraversal function below.
/* For your reference:
struct node
{
    long long value;
    node *left;
    node *right;
};
*/

void inOrderTraversal(node *t)
{
    //write your code here;
    if(t == NULL)
    return ;
    inOrderTraversal(t->left);
    cout<<t->value<<" ";
    inOrderTraversal(t->right);
   


}
