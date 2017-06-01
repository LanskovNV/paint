#ifndef PAINT_SYSTEM_H
#define PAINT_SYSTEM_H
#include "types.h"

/* functions */
COLOR_t ColorInit(int r, int g, int b);
void FieldInit(COLOR_t *F);
float GetLineLen(POINT_t A, POINT_t B);
POINT_t PosInit(int x, int y);
void Swap(COLOR_t *F);
#endif // PAINT_SYSTEM_H
