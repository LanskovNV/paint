#ifndef PAINT_SYSTEM_H
#define PAINT_SYSTEM_H
#include "types.h"

/* functions */
void ColorInit(int r, int g, int b, COLOR_t *col);
void FieldInit(PIC_t *field, COLOR_t bkgColor, int width, int heidth);
BOOL_t PicCreate( PIC_t *P, int NewW, int NewH );
void PicFree( PIC_t *P );
#endif // PAINT_SYSTEM_H
