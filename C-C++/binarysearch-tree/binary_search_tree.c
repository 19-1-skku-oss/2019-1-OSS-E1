#include <stdio.h>
#include <stdlib.h>

#define	LENGTH 10

typedef enum{false, true}bool;

typedef int Data;

typedef struct Node {
	Data data;
	struct Node* left;
	struct Node* right;
}BSTnode;

BSTnode* make_node(Data input) {
	BSTnode* result = (BSTnode*)malloc(sizeof(BSTnode));
	result->data = input;
	result->left = NULL;
	result->right = NULL;

	return result;
}

void add_node(BSTnode* root, BSTnode* newNode) {
	while (true) {
		if (newNode->data > root->data) {
			if (root->right != NULL) {
				root = root->right;
				continue;
			}
			else {
				root->right = newNode;
				break;
			}
		}
		else if (newNode->data < root->data) {
			if (root->left != NULL) {
				root = root->left;
				continue;
			}
			else {
				root->left = newNode;
				break;
			}
		}
		else {
			printf("You can not add same data to binarysearch tree.\n");
			exit(1);
		}
	}

	
}

void make_binary_search_tree(BSTnode* root, Data* input, int len) {
	if (len < 1) return;
	
	root = make_node(input[0]);

	BSTnode* temp;
	for (int i = 1; i < len; i++) {
		temp = make_node(input[i]);
		add_node(root, temp);
	}
}

int main(void) {
	BSTnode* root = NULL;
	Data input[LENGTH] = { 5, 2, 6, 0, 3, 1, 9, 8, 4, 7 };

	make_binary_search_tree(root, input, LENGTH);

	return 0;
}