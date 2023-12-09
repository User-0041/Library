#include"VectorString.h"

struct  stringVector NewStringVector() {
	struct stringVector vec;
	vec.vector = (char**)malloc(sizeof(char*) * INIT_VEC_SIZE);
	if (vec.vector == NULL) {
		fprintf(stderr, "Memory allocation failed\n");
		exit(1);
	}
	vec.size = INIT_VEC_SIZE;
	vec.used = 0;
	return vec;
}



void gorwstringVector(struct stringVector* v) {
	int newSize = SQR(v->size);
	char** temp = (char**)malloc(sizeof(char**) * newSize);
	memcpy(temp, v->vector, v->size * sizeof(char**));
	if (temp == NULL) {
		fprintf(stderr, "Memory allocation failed\n");
		exit(1);
	}
	char** freeme = v->vector;
	v->vector = temp;
	v->size = newSize;
	free(freeme);
}


void appendToStringVector(struct stringVector* v, char c[]) {
	if (v->used == v->size) { gorwstringVector(v); };
	v->vector[v->used] = _strdup(c);
	v->used++;
	return;
}



char* getItemFromStringVector(struct stringVector* v, int index) {
	if (index >= v->used) {
		return NULL;
	}
	return v->vector[index];
}


void shrinkStringtVector(struct stringVector* v) {
	int newSize = sqrt(v->size);
	char** temp = (char**)malloc(sizeof(int) * newSize);
	if (temp == NULL) {
		fprintf(stderr, "Memory allocation failed\n");
		exit(1);
	}
	memcpy(temp, v->vector, v->size * sizeof(int));
	char** freeme = v->vector;
	v->vector = temp;
	v->size = newSize;
	free(freeme);
}

void removeFromStringVector(struct stringVector* v, int index) {
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
		shrinkStringtVector(v);
	}
}
