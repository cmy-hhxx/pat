# PAT

## 树

### 1004 Counting Leafs

what?

count every level's leaf number

how?

use dfs to travel the tree and count the leaf numbers

### 1020 Tree Traversals

what?

postorder + inorder, what is the level order?

how?

dfs to rebuild the tree, and bfs to get the level order

### 1021 Deepest Root

what?

N nodes and N - 1 edges

1. is it a tree? if not, solve the components number
2. if it is a tree, print the deepest root, a deepest root results in a highest tree

how?

1. use dis-joint set to maintain the components number
2. dfs each node, use ```vector``` to store the possible root

### 1043 Is It a Binary Search Tree

what?

if the given order is a binary search tree preorder sequence?

how?

1. suppose the given order is preorder sequence
2. get the preorder sorted, this is a binary search tree inorder
3. use preorder + inorder to rebuild the tree, and mirror the operation
4. use postorder[] to store the postorder sequence 

### 1064 Complete Binary Search Tree

what?

given a sequence of distinct non-negative integer keys, print the level order of binary search tree

how?

1. sort the sequence
2. rebuild the binary search tree using dfs with inorder sequence

### 1086 Tree Traversals Again

what?

given the sequence of inorder with a series of stack operations, print the postorder sequence

how?

1. if it is the first operation, this must be root
2. if it is push, and the last one is push, this node must be the last one's left son
3. if it is push, and the last one is pop, this node must be the last one's right son
4. use ```stack, type, root, last``` to maintain necessary informations

### 1099 Build A Binary Search Tree

what?

given every nodes left son and right son, and the N distince interger(suppose root is always 0)

print the binary search tree's level order

how?

1. store every left child and right child in ```l[] r[]```
2. get the sequence sorted
3. rebuild the binary search tree with inorder sequence
4. use bfs to print the level order

### 1102 Invert a Binary Tree

what?

N nodes and N - 1 lines which indicate the left son and right son of N - 1 nodes

print the level order and inorder sequence of the inverted tree

how?

1. store every left and right child, also find the root node which has no parents
2. bfs to print the level order 
3. dfs to print the inoder
4. in a inverted tree, left node equal right node, vice versa

### 1110 Complete Binary Tree

### 1115 Counting Nodes in a Binary Search Tree

### **1119 Pre- and Post-order Traversals**

### **1127 ZigZagging on a Tre**
