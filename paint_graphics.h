#ifndef PAINT_GRAPHICS_H
#define PAINT_GRAPHICS_H

#define LINE_GRADE 0.15
#define CONV_X 300.0
#define CONV_Y 300.0

/* types */
typedef struct {
  float R, G, B;
}COLOR_t;

typedef struct {
  float x, y;
}POINT_t;

/* functions */
void ColorInit(COLOR_t *color, float R, float G, float B);
void DrawLine(POINT_t A, POINT_t B, int width, COLOR_t color);

#endif // PAINT_GRAPHICS_H
