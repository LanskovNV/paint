#ifndef PAINT_GRAPHICS_H
#define PAINT_GRAPHICS_H
#include "types.h"

#define LINE_GRADE 0.15
#define CONV_X 300.0
#define CONV_Y 300.0

/* functions */
void DrawCube(PIC_t field, POINT_t pos, COLOR_t color, int len);
void DrawRubber();
void PutLine(PIC_t field, POINT_t A, POINT_t B, int lineW, COLOR_t color);

#endif // PAINT_GRAPHICS_H
