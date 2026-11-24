#include <stddef.h>
#include <cbrik/vector.h>
#include <stdlib.h>

struct cbrik_vector {
  int *data;
  size_t size;
  size_t capacity;
};

cbrik_vector *cbrik_vector_create(void) 
{
  cbrik_vector *V;

  V = malloc(sizeof(struct cbrik_vector));

  if (V == NULL) {
    return NULL;
  }

  V->data = malloc(4 * sizeof(int));

  if (V->data == NULL) {
    free(V);
    return NULL;
  }

  V->size = 0;

  V->capacity = 4;

  return V;

}
