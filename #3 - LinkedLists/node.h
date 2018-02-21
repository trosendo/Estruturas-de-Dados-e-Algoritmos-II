struct node;

struct node *node_new(int value, struct node *next);
void node_set(struct node *node, int value);
int node_get(struct node *node);
struct node *node_getNext(struct node *node);
