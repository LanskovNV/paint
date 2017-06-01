#ifndef PAINT_GRAPHICS_H
#define PAINT_GRAPHICS_H
#include "types.h"

#define LINE_GRADE 0.15
#define CONV_X 300.0
#define CONV_Y 300.0

/* functions */
void DrawCube(COLOR_t *field, COLOR_t color, POINT_t pos);
void PutLine(COLOR_t *field, COLOR_t color, POINT_t A, POINT_t B, float len);

void DrawRubber();
#endif // PAINT_GRAPHICS_H
