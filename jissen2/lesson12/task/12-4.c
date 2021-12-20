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
node_type *search_max(node_type *root);
void delete_node(node_type **root, int key);
node_type *search_min(node_type **p);

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

	show_tree(root);

	printf("削除するノードのキー値を入力 -> ");
	scanf("%d",&key);
	delete_node(&root,key);

	show_tree(root);

	free_node(root);
	return 0;
}

void delete_node(node_type **root, int key){
	node_type **p, *x;
	p = root;
	while(*p != NULL){
		if(key == (*p)->key){
			x = *p;
			if(x->left == NULL && x->right == NULL)
				*p = NULL;
			else if(x->left == NULL)
				*p = x->right;
			else if(x->right == NULL)
				*p = x->left;
			else {
				*p = search_min(&(x->right));
				(*p)->right = x->right;
				(*p)->left = x->left;
			}
			free(x);
			return;
		} else if(key < (*p)->key)
			p = &((*p)->left);
		else
			p = &((*p)->right);
	}
	return;
}

node_type *search_min(node_type **p){
	node_type *min;
	while((*p)->left != NULL)
		p = &((*p)->left);
	min = *p;
	*p = (*p)->right;
	return min;
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

/*
void show_tree(node_type *root){
	if(root->right != NULL)
		show_tree(root->right);
	if(root->left != NULL)
		show_tree(root->left);
	printf("%d ", root->key);
}
*/

void show_tree(node_type *root){
	node_type *p = root;
	printf("%d: %s ",p->key, p->data);
	if(p->left != NULL)
		printf("left: %d ",p->left->key);
	if(p->right != NULL)
		printf("right: %d ",p->right->key);
	printf("\n");
	if(root->right != NULL)
		show_tree(root->right);
	if(root->left != NULL)
		show_tree(root->left);
}

node_type* search_max(node_type *root){
	node_type *r = root, *max_node = r;
	int max = 0;
	while(r != NULL){
		if(max < r->key){
			max = r->key;
			max_node = r;
		}
		r = r->left;
	}
	return max_node;
}
