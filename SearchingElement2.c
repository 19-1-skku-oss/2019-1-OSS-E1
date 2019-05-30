#include <stdio.h>

typedef int Key;

typedef struct _BSTNode
{
	Key key;
	struct _BSTNode * left_child;
	struct _BSTNode * right_child;
} BSTNode;

BSTNode* Search(BSTNode* root, Key key)
{
	BSTNode* cur = root;
	while (cur != NULL) {
		if (cur->key == key) break;
		else if (cur->key > key)
			cur = cur->left_child;
		else
			cur = cur->right_child;
	}
	return cur;
}