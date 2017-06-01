#ifndef TYPES_H
#define TYPES_H
// HEIGTH and WIDTH !!!!!!!!

/* all macros is here */
#define WIDTH 800  // field weight
#define HEIGTH 800 // field higth
#define MAPP 800 // window size
#define ZOOM 1
/* useful types */
typedef unsigned char BYTE_t;

typedef struct {
  BYTE_t R, G, B;
}COLOR_t;

typedef struct {
  int heigth, width;
  COLOR_t *pixels;
}PIC_t;

typedef struct {
  int x, y;
}POINT_t;

typedef enum {
  FALSE,
  TRUE
}BOOL_t;

typedef enum {
  PENCIL,
  RUBBER,
  ANOTHER
}OPTION_t;

#endif // TYPES_H
