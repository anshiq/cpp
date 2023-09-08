#include <stdio.h>
struct Queue {
  int arr[5];
  int f;
  int r;
};
void init(struct Queue *q) {
  q->f = -1;
  q->r = -1;
}
int isEmpty(struct Queue *q) {
  return (q->f == -1 && q->r == -1);
}
int isFull(struct Queue *q) {
  return (q->r + 1) % 5 == q->f;
}
void enque(struct Queue *q, int val) {
  if (isFull(q)) {
    printf("Queue is full, cannot enqueue %d\n", val);
    return;
  }
  if (isEmpty(q)) {
    q->f = 0; // Initialize front index when adding the first element.
  }
  q->r = (q->r + 1) % 5;
  q->arr[q->r] = val;
}
int deque(struct Queue *q) {
  if (isEmpty(q)) {
    printf("Empty queue can't dequeue\n");
    return -1; // You can choose a suitable error value to return here.
  }
  int val = q->arr[q->f];
  if (q->f == q->r) {
    q->f = -1;
    q->r = -1;
  } else {
    q->f = (q->f + 1) % 5;
  }
  return val;
}

int main() {
  struct Queue q;
  init(&q);

  enque(&q, 10);
  enque(&q, 20);
  enque(&q, 30);

  printf("Dequeued: %d\n", deque(&q));
  printf("Dequeued: %d\n", deque(&q));
  printf("Dequeued: %d\n", deque(&q));

  enque(&q, 40);
  enque(&q, 50);

  printf("Dequeued: %d\n", deque(&q));
  printf("Dequeued: %d\n", deque(&q));

  return 0;
}
