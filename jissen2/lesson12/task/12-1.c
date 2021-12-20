#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct node {
	int key;
	char data[100];
	struct node *left;
	struct node *right;
} node_type;

int ins_binst(node_type **root, int key, char *data);
node_type *search_binst(node_type *root, int target);
void free_node(node_type *root);
void show_tree(node_type *root);
node_type *search_cp(node_type *root, node_type *a, node_type *b);

int main(){
	int key, flag;
	char data[100];
	node_type *res, *root = NULL;

	printf("key dataを入力 -> ");
	scanf("%d %s", &key, data);
	while (key != 0){
		flag = ins_binst(&root, key, data);
		printf("key dataを入力 -> ");
		scanf("%d %s", &key, data);
	}

	if (root == NULL){
		printf("ノードを一つも挿入していません\n");
		return 0;
	}

	int a_key, b_key;
	node_type *a, *b, *cp;
	printf("ノードaのキー値を入力 -> ");
	scanf("%d",&a_key);
	a = search_binst(root,a_key);
	printf("ノードbのキー値を入力 -> ");
	scanf("%d",&b_key);
	b = search_binst(root,b_key);

	cp = search_cp(root,a,b);

	printf("aとbの共通祖先ノードのキー値は%dです\n",cp->key);

	free_node(root);
	return 0;
}

node_type *search_cp(node_type *root, node_type *a, node_type *b){
	node_type *p = root;
	while(p != NULL){
		if(a->key < p->key && b->key < p->key)
			p = p->left;
		else if(a->key > p->key && b->key > p->key)
			p = p->right;
		else
			return p;
	}
}

node_type *search_binst(node_type * root, int target){
	node_type *p = root;
	while (p != NULL){
		if (target == p->key)
			return p;
		else if (target < p->key)
			p = p->left;
		else
			p = p->right;
	}
	return NULL;
}

int ins_binst(node_type **root, int key, char *data)
{
	node_type *p, *q, *r;
	r = (node_type *)malloc(sizeof(node_type));
	r->key = key;
	strcpy(r->data, data);
	r->right = NULL;
	r->left = NULL;

	if (*root == NULL){
		*root = r;
		return 1;
	} else {
		p = *root;
		while(p != NULL){
			if(key == p->key) return 0;
			else {
				q = p;
				if(key < p->key) p = p->left;
				else p = p->right;
			}
		}
		if(key < q->key) q->left = r;
		else q->right = r;
	}
	return 1;
}

void free_node(node_type *root){
	if(root->left != NULL)
		free_node(root->left);
	if(root->right != NULL)
		free_node(root->right);
	free(root);
}

void show_tree(node_type *root){
	if(root->right != NULL)
		show_tree(root->right);
	if(root->left != NULL)
		show_tree(root->left);
	printf("%d ", root->key);
}
