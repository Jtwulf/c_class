#include<stdio.h>
#include<stdlib.h>

typedef struct node {
	int key;
	struct node *left;
	struct node *right;
} node_type;

node_type *ins_bint(node_type *root, int p_key, int c_key, int lr);
node_type *find_key(node_type *root, int key);
void free_node(node_type *root);
void show_tree(node_type *root);
int count_height(node_type *r);

int main(){
	node_type *root = NULL;
	int p_key, c_key, lr;

	printf("2分木を作成します。\n");
	printf("親ノードの値 ノードの値 左(0)/右(1)\n");
	printf("をスペース区切りで入力して下さい。\n");
	printf("左右で0か1以外の値が入力されたら、作成を終了します。\n");
	scanf("%d %d %d",&p_key, &c_key, &lr);
	while(lr == 0 || lr == 1){
		root = ins_bint(root, p_key, c_key, lr);
		scanf("%d %d %d",&p_key, &c_key, &lr);
	}

	show_tree(root);
	printf("\n");
	printf("この二分木の高さは%d\n",count_height(root));
	free_node(root);
	return 0;
}

node_type *ins_bint(node_type *root, int p_key, int c_key, int lr){
	node_type *p, *q, *r;
	r = (node_type *)malloc(sizeof(node_type));
	r->key = c_key;
	r->right = NULL;
	r->left = NULL;

	if(root == NULL){
		root = r;
		//return 0;
	} else {
		p = find_key(root,p_key);
		if(p == NULL){
			printf("親ノード%dが見つかりませんでした\n",p_key);
			free(r);
		} else {
			if(lr == 0 && p->left == NULL){
				p->left = r;
				printf("%d->%d連結成功\n",p_key,c_key);
			} else if(lr == 1 && p->right == NULL){
				p->right = r;
				printf("%d->%d連結成功\n",p_key,c_key);
			} else {
				printf("%d->%d連結失敗\n",p_key,c_key);
				free(r);
			}
		}
	}
	return root;
}

int count_height(node_type *r){
	int count = 0;
	int max = count;
	if(r->right != NULL){
		count = count_height(r->right);
		if(count > max)
			max = count;
	}
	if(r->left != NULL){
		count = count_height(r->left);
		if(count > max)
			max = count;
	}
	return max + 1;
}

node_type *find_key(node_type *root, int key){
	node_type *temp = NULL;
	if(root == NULL)
		return NULL;
	if((root)->key == key)
		return root;
	if((root)->left != NULL)
		temp = find_key(root->left, key);
	if(temp != NULL)
		return temp;
	else
		return find_key(root->right, key);
}

void free_node(node_type *root){
	if(root->left != NULL)
		free_node(root->left);
	if(root->right != NULL)
		free_node(root->right);
	free(root);
}

void show_tree(node_type *root){
	if(root->left != NULL)
		show_tree(root->left);
	if(root->right != NULL)
		show_tree(root->right);
	printf("%d ", root->key);
}
