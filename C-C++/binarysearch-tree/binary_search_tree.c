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
BSTnode* make_binary_search_tree(BSTnode* root, Data* input, int len) {
	if (len < 1) return;
	
	root = make_node(input[0]);

	BSTnode* temp;
	for (int i = 1; i < len; i++) {
		temp = make_node(input[i]);
		add_node(root, temp);
	}

	return root;
}




void inorder_trevasal(BSTnode* root) {
	if (root != NULL) {
		inorder_trevasal(root->left);
		printf("%d ", root->data);
		inorder_trevasal(root->right);
	}
}
void inorder(BSTnode* root) {
	printf("Inorder trevasal : ");
	inorder_trevasal(root);
	printf("\n");
}

void preorder_trevasal(BSTnode* root) {
	if (root != NULL) {
		printf("%d ", root->data);
		preorder_trevasal(root->left);
		preorder_trevasal(root->right);
	}
}
void preorder(BSTnode* root) {
	printf("Preorder trevasal : ");
	preorder_trevasal(root);
	printf("\n");
}

void postorder_trevasal(BSTnode* root) {
	if (root != NULL) {
		postorder_trevasal(root->left);
		postorder_trevasal(root->right);
		printf("%d ", root->data);
	}
}
void postorder(BSTnode* root) {
	printf("Postorder trevasal : ");
	postorder_trevasal(root);
	printf("\n");
}




int main(void) {
	BSTnode* root = NULL;
	Data input[LENGTH] = { 5, 2, 6, 0, 3, 1, 9, 8, 4, 7 };

	printf("Input Data : ");
	for (int i = 0; i < LENGTH; i++) {
		printf("%d ", input[i]);
	}
	printf("\n\n");

	root = make_binary_search_tree(root, input, LENGTH);

	inorder(root);
	preorder(root);
	postorder(root);

	return 0;
}