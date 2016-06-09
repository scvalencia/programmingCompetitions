#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int count;

struct node {
    int v;
    struct node* left;
    struct node* right;
};

void insert(struct node* root, struct node* a) {
    if(a->v < root->v) {
        if(root->left)
            insert(root->left, a);
        else
            root->left = a;
    } else {
        if(root->right)
            insert(root->right, a);
        else
            root->right = a;
    }
}

bool compare(struct node* a, struct node* b) {
    if ((a->left && !b->left) || (!a->left && b->left))
        return false;
    if ((a->right && !b->right) || (!a->right && b->right))
        return false;

    bool result = true;

    if (a->left && b->left)
        result &= compare(a->left, b->left);
    if (a->right && b->right)
        result &= compare(a->right, b->right);

    return result;
}

void preorder(struct node* tree) {
    if(tree) {
        printf("%d\n",tree->v);
        preorder(tree->left);
        preorder(tree->right);
    }
}

int dsfind(int* parent, int p) {
    while(p != *(parent + p)) p = *(parent + p);
    return p;
}

void dsunion(int* parent, int* size, int p, int q) {
    int rootP = dsfind(parent, p);
    int rootQ = dsfind(parent, q);

    if(rootP == rootQ) return;

    if (size[rootP] < size[rootQ]) {
        parent[rootP] = rootQ;
        size[rootQ] += size[rootP];
    } else {
        parent[rootQ] = rootP;
        size[rootP] += size[rootQ];
    }
    count--;
}

int main(int argc, char const *argv[]) {
    
    int TC, n, i, j, tmp;
    scanf("%d %d", &TC, &n);
    struct node* trees[TC];

    count = TC;

    int parent[TC];
    int size[TC];
    int sz = TC;

    for(i = 0; i < n; i++) { 
        parent[i] = i; 
        size[i] = 1;    
    }

    j = 0;
    while(TC--) {
        struct node *root;

        for(i = 0; i < n; i++) {
            scanf("%d", &tmp);
            struct node *a = (struct node*) malloc(sizeof(struct node)); 
            a->v = tmp, a->left = a->right = 0;

            if (i == 0) 
                root = a;
            else 
                insert(root, a);
        }

        *(trees + (j++)) = root;
    }

    
    for(i = 0; i < sz; i++) {
        for(j = i + 1; j < sz; j++) {
            if(compare(trees[i], trees[j]))
                dsunion(parent, size, i, j);
        }
    }

    printf("%d\n", count);
    
    return 0;
}