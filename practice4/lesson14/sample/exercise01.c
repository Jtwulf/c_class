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
void print_binst(node_type *root, int selector);
node_type *replace(node_type *p, int target, char * new_data);

int main(void)
{
  int target;
  node_type *root = NULL, *p;
  char new_data[MAXLEN];

  create_sample_tree(&root);

  printf("入力されたキーとデータを出力します\n");
  print_binst(root, 0);

  printf("キーとデータを受け取り、そのキーを持つノードのデータを書き換えます\n");
  printf("キーとして 0  以下の値が入力されるまで繰り返します\n");
  printf("キーを入力して下さい > ");
  scanf("%d", &target);
  printf("データを入力して下さい > ");
  scanf("%s", new_data);
  for( ; ; ) {
    p = replace(root, target, new_data);
    if (p == NULL) {
      printf("そのキーを持つノードは存在しません\n");
    }
    print_binst(root, 1);
    printf("キーを入力して下さい > ");
    scanf("%d", &target);
    if (target <= 0) {
      break;
    }
    printf("データを入力して下さい > ");
    scanf("%s", new_data);
  }
  printf("木を消去します\n");
  free_node(&root);
  return 0;
}


/*  ここに関数 replace を記述します  */
node_type *replace(node_type *p, int target, char * new_data){
	while (p != NULL){
		if (target == p->key){
			strcpy(p->data, new_data);
			return p;
		}
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
