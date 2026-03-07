#include <stdio.h>
#include <stdlib.h>

struct packet_struct {
  char type;
  int len;
};

typedef struct packet_struct * packet;

void packet_set(packet p, char t, int s);

int main(int argc, char *argv[]){
  char t = argv[1][0];
  int s = atoi(argv[2]);
  packet p = malloc(sizeof(struct packet_struct));
  packet_set(p,t,s);
  printf("p->type = %c\n", p->type);
  printf("p->len = %d\n", p->len);
  return 0;
}
