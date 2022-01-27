#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAXLEN 100
#define INSERTED 1
#define FAILED 0

typedef struct node {
    int key;
    char data[MAXLEN];
    struct node *left;
    struct node *right;
} node_type;

void create_sample_tree(node_type **root);
int ins_binst(node_type **root, int key, char *data);
void free_node(node_type **root);
node_type *search_binst(node_type *root, int target);
void print_binst(node_type *root, int selector);
void search_max_min(node_type *p, node_type **max_pp, node_type **min_pp);

int main(void)
{
  int target;
  node_type *root = NULL;
  node_type *max_p, *min_p, *p;

  create_sample_tree(&root);

  printf("入力されたキーとデータを出力します\n");
  print_binst(root, 0);

  printf("キーを受け取り、そのキーを持つノードから下の部分木の中で、\n");
  printf("最大のキーを持つノードと最小のキーを持つノードを出力します。\n");
  printf("キーとして 0  以下の値が入力されるまで繰り返します\n");
  printf("キーを入力して下さい > ");
  scanf("%d", &target);
  while (target > 0) {
    p = search_binst(root, target);
    if (p == NULL) {
      printf("そのキーを持つノードは存在しません\n");
    } else {
      search_max_min(p, &max_p, &min_p);
      printf("最大キーを持つノード : key = %d   data = %s\n", max_p->key, max_p->data);
      printf("最小キーを持つノード : key = %d   data = %s\n", min_p->key, min_p->data);
    }
    printf("キーを入力して下さい > ");
    scanf("%d", &target);
  }
  printf("木を消去します\n");
  free_node(&root);
  return 0;
}

/*  ここに関数 search_min_max を記述します   */
void search_max_min(node_type *p, node_type **max_pp, node_type **min_pp){
	node_type *l = p, *r = p;
	while(r->right != NULL)
		r = r->right;
	*max_pp = r;
	while(l->left != NULL)
		l = l->left;
	*min_pp = l;
}

node_type *search_binst(node_type *root, int target)
{
  node_type *p;
  p = root;
  while (p != NULL) {
    if (target == p->key) {
      return p;
    } else if (target < p->key) {
      p = p->left;
    } else {
      p = p->right;
    }
  }
  return NULL;
}

int ins_binst(node_type **root, int key, char *data)
{
  node_type *p, *q, *r;
  r = (node_type *) malloc(sizeof (node_type));
  r->key = key;
  strcpy(r->data, data);
  r->left = NULL;
  r->right = NULL;

  if (*root == NULL) {
    *root = r;
    return INSERTED;
  } else {
    p = *root;
    while (p != NULL) {
      if (key == p->key) {
        return FAILED;
      } else {
        q = p;
        if (key < p->key) {
          p = p->left;
        } else {
          p = p->right;
        }
      }
    }
    if (key < q->key) {
      q->left = r;
    } else {
      q->right = r;
    }
  }
}


void free_node(node_type **root) {
  if ((*root)->left != NULL) {
    free_node(&((*root)->left));
  }
  if ((*root)->right != NULL) {
    free_node(&((*root)->right));
  }
  free (*root);
}

void print_binst(node_type *p, int selector)
{
  if (selector == 0) {
    if (p != NULL) {
      printf("%d : %s", p->key, p->data);
      if (p->left != NULL) {
        printf("\t left : %2d", p->left->key);
      } else {
        printf("\t left : --");
      }
      if (p->right != NULL) {
        printf("\t right : %2d\n", p->right->key);
      } else {
        printf("\t right : --\n");
      }
      print_binst(p->left, selector);
      print_binst(p->right, selector);
    }
  } else if (selector == 1) {
    if (p != NULL) {
      print_binst(p->left, selector);
      printf("%d ; %s\n", p->key, p->data);
      print_binst(p->right, selector);
    }
  }
}

void create_sample_tree(node_type **p)
{
  ins_binst(p, 56, "Lapras");
  ins_binst(p, 45, "Golbat");
  ins_binst(p, 81, "Paras");
  ins_binst(p, 33, "Dodrio");
  ins_binst(p, 50, "Kingler");
  ins_binst(p, 62, "Nidoking");
  ins_binst(p, 99, "Starmie");
  ins_binst(p, 15, "Arbok");
  ins_binst(p, 40, "Eevee");
  ins_binst(p, 49, "Kakuna");
  ins_binst(p, 58, "Meowth");
  ins_binst(p, 71, "Omastar");
  ins_binst(p, 90, "Ponyta");
  ins_binst(p, 20, "Catarpie");
  ins_binst(p, 46, "Kabutops");
  ins_binst(p, 85, "Pikachu");
  ins_binst(p, 95, "Raichu");

}
