#include"VectorInt.h"


struct intVector NewIntVector() {
	struct intVector vec;
	vec.vector = (int*)malloc(sizeof(int) * INIT_VEC_SIZE);
	if (vec.vector == NULL) {
		fprintf(stderr, "Memory allocation failed\n");
		exit(1);
	}
	vec.size = INIT_VEC_SIZE;
	vec.used = 0;
	return vec;
}






void gorwIntVector(struct intVector* v) {
	int newSize = SQR(v->size);
	int* temp = (int*)malloc(sizeof(int) * newSize);
	if (temp == NULL) {
		fprintf(stderr, "Memory allocation failed\n");
		exit(1);
	}
	memcpy(temp, v->vector, v->size * sizeof(int));

	int* freeme = v->vector;
	v->vector = temp;
	v->size = newSize;
	free(freeme);
}

void appendToIntVector(struct intVector* v, int x)
{
	if (v->used == v->size) { gorwIntVector(v); };
	v->vector[v->used] = x;
	v->used++;
	return;
};

int getItemFromVector(struct intVector* v, int index) {


	if (index >= v->used) {
		return 0;
	}


	return v->vector[index];
}


void updateItemAtIndex(struct intVector* v, int index, int value) {
	v->vector[index] = value;
}


void shrinkIntVector(struct intVector* v) {
	int newSize =(int) sqrt(v->size);
	int* temp = (int*)malloc(sizeof(int) * newSize);
	if (temp == NULL) {
		fprintf(stderr, "Memory allocation failed\n");
		exit(1);
	}
	memcpy(temp, v->vector, v->size * sizeof(int));
	int* freeme = v->vector;
	v->vector = temp;
	v->size = newSize;
	free(freeme);
}


void removeFromIntVector(struct intVector* v, int index) {
	if (index >= v->used) {
		return;
	}

	for (int i = index; i < v->used; i++)
	{
		v->vector[i] = v->vector[i++];
	}
	v->used--;

	if (v->used <= sqrt(v->size))
	{
		shrinkIntVector(v);
	}
}


