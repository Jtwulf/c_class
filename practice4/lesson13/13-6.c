#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define LEFT 0
#define RIGHT 1

typedef struct node {
  int key;
  struct node *left;
  struct node * right;
} node_type;

int getword(char *word, int lim);
int getch(void);
void ungetch(int c);
node_type * search_key(node_type **root, int key);
void ins_bint(node_type **root, int p_key, int c_key, int lr);
void show_tree (node_type *root);
void free_node(node_type **root);
void create_sample_one(node_type **p);
void count_node_type(node_type *r, int *n_zero, int *n_one, int *n_two);

int main(void) {
  node_type *root;
  int zero, one, two;

  root = NULL;
  create_sample_one(&root);
  show_tree(root);
  count_node_type(root, &zero, &one, &two);
  printf("この木の葉の数は %d です。\n", zero);
  printf("子供が１個のノードの個数は %d です。\n", one);
  printf("子供が２個のノードの個数は %d です。\n", two);
  free_node(&root);

  return 0;
}

/*  ここに関数 count_node_type を記述します。  */

void create_sample_one(node_type **p)
{
  ins_bint(p, 0, 50, LEFT);
  ins_bint(p, 50, 30, LEFT);
  ins_bint(p, 50, 65, RIGHT);
  ins_bint(p, 30, 18, LEFT);
  ins_bint(p, 30, 42, RIGHT);
  ins_bint(p, 65, 44, LEFT);
  ins_bint(p, 65, 28, RIGHT);
  ins_bint(p, 18, 47, LEFT);
  ins_bint(p, 42, 17, LEFT);
  ins_bint(p, 42, 48, RIGHT);
  ins_bint(p, 44, 35, RIGHT);
  ins_bint(p, 28, 12, LEFT);
  ins_bint(p, 28, 52, RIGHT);
  ins_bint(p, 47, 63, RIGHT);
  ins_bint(p, 17, 84, LEFT);
  ins_bint(p, 48, 54, LEFT);
  ins_bint(p, 12, 55, LEFT);
  ins_bint(p, 84, 25, LEFT);
  ins_bint(p, 84, 10, RIGHT);
}

node_type * search_key(node_type **root, int key)
{
  node_type *temp = NULL;
  if (*root == NULL) {
    return NULL;
  }
  if ((*root)->key == key) {
    return *root;
  }
  temp = search_key(&((*root)->left), key);
  if (temp != NULL) {
    return temp;
  } else {
    return search_key(&((*root)->right), key);
  }
}

void ins_bint(node_type **root, int p_key, int c_key, int lr)
{
  node_type *p, *r;

  r = (node_type *) malloc(sizeof(node_type));
  r->key = c_key;
  r->left = NULL;
  r->right = NULL;

  if (*root == NULL) {
    *root = r;
  } else {
    p = search_key(root, p_key);
    if (p == NULL) {
      printf("親ノード %d が見つかりませんでした。\n", p_key);
      free(r);
    } else {
      if (lr == LEFT && p->left == NULL) {
        p->left = r;
      } else if (lr == RIGHT && p->right == NULL){
        p->right = r;
      } else {
        printf("%d->%d 連結失敗！\n", p_key, c_key);
        free(r);
      }
    }
  }
}

void show_tree (node_type *root)
{
  printf("%d ", root->key);
  if (root->left != NULL) {
    printf(" left: %d ", root->left->key);
  } else {
    printf(" left: NULL");
  }
  if (root->right != NULL) {
    printf(" right: %d ", root->right->key);
  } else {
    printf(" right: NULL");
  }
  putchar('\n');
  if (root->left != NULL) {
    show_tree(root->left);
  }
  if (root->right != NULL) {
    show_tree(root->right);
  }
}

void free_node(node_type **root)
{
  if (*root != NULL) {
    free_node(&((*root)->left));
    free_node(&((*root)->right));
    free(*root);
  }
}
