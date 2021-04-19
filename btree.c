#include <stdio.h>

#define M 4  // M 路  M - 1 个keys
#define MAX_KEY_LEN M - 1

typedef struct {
    int val[M - 1];
    int count;
    struct B_TREE_NODE_T* child_ptr_arr[M];   
} B_TREE_NODE_T;

// root ptr
B_TREE_NODE_T* root; 

// current ptr?
// B_TREE_NODE_T* cur_node = root; 

int insert(int* add_val) {
    // start first val
    if (root->count == 0) {
        root->val[0] = &add_val;
        root->count++;
    }
    // if the 
    if (MAX_KEY_LEN <= root->count) {
        // call deal func
    }
}

int main() {
    // 1. data struct   b - tree ok

    // 2. add func   2.1 init?  2.2 one deep full ?
    //                  ok                                 
    // 3. delete func
    // 4. find func
    
}