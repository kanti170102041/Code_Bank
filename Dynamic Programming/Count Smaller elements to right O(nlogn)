class Solution{
public:	

    struct TreeNode{
        int val;
        int c;
        TreeNode* left;
        TreeNode* right;
        TreeNode(int a,int b){
            val=a;
            c=b;
            left=right=NULL;
        }
    };
    int addNode(TreeNode* &A,int value,int count);
    vector<int> constructLowerArray(int *arr, int n);
};

int Solution::addNode(TreeNode* &A,int value,int count){
        if(A==NULL){
            TreeNode *temp=new TreeNode(value,0);
            A=temp;
            return count;
        }
        if(A->val<value){
            return A->c+addNode(A->right,value,count+1);
        }
        else{
            A->c++;
            return addNode(A->left, value,count);
        }
    }

vector<int> Solution::constructLowerArray(int *arr, int n) {
	    
	    vector<int>t(n,0);
	    TreeNode* A=NULL;
	    for(int i=n-1;i>=0;i--){
	        
	        t[i]=addNode(A,arr[i],0);
	    }
	    return t;
	}
