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
node_type *search_binst(node_type *root, int target);
void free_node(node_type **root);
void print_binst(node_type *root, int selector);
node_type *range_search_binst(node_type *p, int low, int high);

int main(void)
{
  int low, high;
  node_type *res, *root = NULL;

  create_sample_tree(&root);
  printf("入力されたキーとデータを出力します\n");
  print_binst(root, 1);

  for ( ; ; ) {
    printf("探索するキーの下界を入力して下さい。 > ");
    scanf("%d", &low);
    if (low <= 0) {
      printf("プログラムを終了します\n");
      return 0;
    }
    printf("探索するキーの上界を入力して下さい。 > ");
    scanf("%d", &high);
    if (high <= 0) {
      printf("プログラムを終了します\n");
      return 0;
    }
    if (low > high) {
      printf("下界が上界よりも大きいです。入力をやり直して下さい\n");
      continue;
    }
    res = range_search_binst(root, low, high);
    if (res == NULL) {
      printf("入力された範囲にあるキーをもつノードはありません\n");
    } else {
      printf("見つかったデータは %s です\n", res->data);
    }
  }
  free_node(&root);
  return 0;
}

/*  ここに関数 range_search_binst を記述します  */
node_type *range_search_binst(node_type *p, int low, int high){
	if(low <= p->key && p->key <= high)
		return p;
	if(p->left != NULL)
		range_search_binst(p->left, low, high);
	if(p->right != NULL)
		range_search_binst(p->right, low, high);
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
