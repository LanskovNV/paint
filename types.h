#ifndef TYPES_H
#define TYPES_H

/* all macros is here */
#define WEIGTH 800  // field weight
#define HIGTH 800 // field higth
#define COL 3 // color
#define MAPP 1000 // window size

/* useful types */
typedef unsigned char BYTE_t;
typedef struct{
  BYTE_t pixels[COL];
}RGB_t;

typedef struct {
  int weigth, higth;
  RGB_t *pixels;
}PIC_t;

typedef struct {
  int R, G, B;
}COLOR_t;

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
