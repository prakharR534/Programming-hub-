// Complete the levelOrderTraversal function below.
/* For your reference:
struct node
{
    ll value;
    node *left;
    node *right;
};
*/

void levelOrderTraversal(node *t)
{
    //write your code here;
    
    if (t==NULL)
    return;
    
    queue<node *> q;
    
    q.push(t);
    
    while(!q.empty()){
      
      node *f = q.front();
      cout<<f->value<<" ";
      q.pop();
      
      if(f->left != NULL){
        q.push(f->left);
      }
      
      if(f->right != NULL){
        q.push(f->right);
      }
      
    }
  
  
  
  
}
