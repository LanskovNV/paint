#ifndef PAINT_GRAPHICS_H
#define PAINT_GRAPHICS_H

#define LINE_GRADE 0.15
#define CONV_X 300.0
#define CONV_Y 300.0

/* types */
typedef struct {
  int R, G, B;
}COLOR_t;

typedef struct {
  int A, B;
}POINT_t;

/* functions */
void FieldInit();
void DrawLine();
void DrawCircle();


#endif // PAINT_GRAPHICS_H
