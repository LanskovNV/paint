#ifndef PAINT_GRAPHICS_H
#define PAINT_GRAPHICS_H

#define LINE_GRADE 0.15
/* types */
typedef struct {
  float R, G, B;
}COLOR_t;

typedef struct {
  float x, y;
}POINT_t;

/* functions */
void ColorInit(float R, float G, float B);


#endif // PAINT_GRAPHICS_H
