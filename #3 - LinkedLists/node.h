struct node;

struct node *node_new(int value, struct node *next);
void node_set(struct node *node, int value);
void node_set_next(struct node *current, struct node *next);
int node_get(struct node *node);
struct node *node_get_next(struct node *node);
