// C++ program to print top 
// view of binary tree 
#include <bits/stdc++.h> 
using namespace std; 

// Structure of binary tree 
struct Node { 
    Node* left; 
    Node* right; 
    int data; 
}; 

Node* root = NULL;
int sot[100],p = 0;


// function to create a new node 
Node* newNode(int key) 
{ 
    Node* node = new Node(); 
    node->left = node->right = NULL; 
    node->data = key; 
    return node; 
} 


Node* insert(Node* root,int val){
    if (root == NULL) 
        root = newNode(val);   
    else if(val <= root->data)
            root->left = insert( root->left ,val);
    else if(val >= root->data)
            root->right =insert(root->right,val);
    
    return root;
    
}


// function should print the topView of 
// the binary tree 
void topView(struct Node* root) 
{ 
    // Base case 
    if (root == NULL) { 
        return; 
    } 

    // Take a temporary node 
    Node* temp = NULL; 

    // Queue to do BFS 
    queue<pair<Node*, int> > q; 

    // map to store node at each vartical distance 
    map<int, int> mp; 

    q.push({ root, 0 }); 

    // BFS 
    while (!q.empty()) { 

        temp = q.front().first; 
        int d = q.front().second; 
        q.pop(); 

        // If any node is not at that vertical distance 
        // just insert that node in map and print it 
        if (mp.find(d) == mp.end()) { 
            sot[p] =  temp->data; 
            p++;
            mp[d] = temp->data; 
        } 

        // Continue for left node 
        if (temp->left) { 
            q.push({ temp->left, d - 1 }); 
        } 

        // Continue for right node 
        if (temp->right) { 
            q.push({ temp->right, d + 1 }); 
        } 
    } 
} 











void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
} 
  
// A function to implement bubble sort 
void bubbleSort(int arr[], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++)  
           if (arr[j] > arr[j+1]) 
              swap(&arr[j], &arr[j+1]); 
} 














// Driver Program to test above functions 
int main() 
{ 
    int n;
    int x;
    scanf("%d",&n);
    int i;
    for ( i = 0; i < n; i++)
    {
        scanf("%ld",&x);
        root =insert(root,x);
    }
    
    
    
   
    topView(root); 
    
    bubbleSort(sot,p);
    int l; 
   for (l = 0; l < (p); l++) {
       cout << sot[l] << " "; 
   } 
    return 0; 
} 
