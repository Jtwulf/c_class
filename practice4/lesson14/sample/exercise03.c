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
node_type *common_ancestor(node_type *root, node_type *a, node_type *b);


int main(void)
{
  int key1, key2;
  char data[MAXLEN];
  node_type *root = NULL;
  node_type *p1, *p2, *pca, *tmp;

  create_sample_tree(&root);

  printf("入力されたキーとデータを出力します\n");
  print_binst(root, 0);

  printf("２つのキーを入力し、それらのキーを持つノードの共通祖先を求めます\n");
  printf("１つめのキーと２つめのキーのどちらが大きくても動作します\n");
  printf("また一方が他方の先祖になっていても動作します\n");
  printf("いずれかのキーに 0 以下の値が入力されるまで繰り返します\n\n");

  for ( ; ; ) {
    printf("１つめのキーを入力して下さい > ");
    scanf("%d", &key1);
    if (key1 <= 0) {
      break;
    }
    p1 = search_binst(root, key1);
    if (p1 == NULL) {
      printf("そのようなキーは存在しません\n\n");
      continue;
    } else {
      printf("１つめのノードは %d : %s です\n", p1->key, p1->data);
    }
    printf("２つめのキーを入力して下さい > ");
    scanf("%d", &key2);
    if (key2 <= 0) {
      break;
    }
    p2 = search_binst(root, key2);
    if (p2 == NULL) {
      printf("そのようなキーは存在しません\n\n");
      continue;
    } else {
      printf("２つめのノードは %d : %s です\n", p2->key, p2->data);
    }

    pca = common_ancestor(root, p1, p2);
    printf("\n共通祖先のノードは %d : %s です\n\n", pca->key, pca->data);
  }
  printf("木を消去して終了します\n");
  free_node(&root);
  return 0;
}

/*  ここに関数 common_ancestor を記述します  */
node_type *common_ancestor(node_type *root, node_type *a, node_type *b){
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
