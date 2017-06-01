/* leins, 28.05.2017 */
#include <stdlib.h>
#include "paint_system.h"
#include "paint_graphics.h"

BOOL_t PicCreate( PIC_t *P, int NewW, int NewH )
{
  if (NewW == 0 || NewH == 0)
    return FALSE;

  P->pixels = malloc( sizeof(BYTE_t) * NewW * NewH * COL );
  P->higth = NewH;
  P->weigth = NewW;
  return TRUE;
} /* end of file */

/*void PicFree( PIC_t *P )
{
  if (P->Pixels != NULL)
    free(P->Pixels);
  P->W = P->H = 0;
  P->Pixels = NULL;
} *//* end of file */

void ColorInit(int r, int g, int b, COLOR_t *col)
{
  col->R = r;
  col->G = g;
  col->B = b;
} /* end of func */

void FieldInit(PIC_t *field, COLOR_t bkgColor, int width, int heidth)
{
  int i, j;

  if (field->pixels == NULL)
    PicCreate(field, width, heidth);

  for (i = 0; i < HIGTH; i++)
    for (j = 0; j < WEIGTH; j++)
    {
      field->pixels[i][j][0] = bkgColor.R;
      field->pixels[i][j][1] = bkgColor.G;
      field->pixels[i][j][2] = bkgColor.B;
    }
} /* end of func */


