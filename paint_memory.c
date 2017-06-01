/* leins, 26.05.2017 */
#include <stdio.h>
#include <stdlib.h>
#include "paint_memory.h"
#include "types.h"

/*BOOL_t Load( PIC_t *P, char *fileName )
{
  FILE *F;
  int W = 0, H = 0;

  if ((F = fopen(fileName, "rb")) == NULL)
    return FALSE;

  fread(&W, 2, 1, F);
  fread(&H, 2, 1, F);
  if (!PicCreate(P, W, H))
  {
    fclose(F);
    return FALSE;
  }
  fread(P->pixels, COL, W * H, F);
  fclose(F);
  return 1;
}*/
/*BOOL_t Save( PIC_t *P, char *FileName )
{
  FILE *F;

  if ((F = fopen(FileName, "wb")) == NULL)
    return FALSE;

  fwrite(P->weigth, 2, 1, F);
  fwrite(P->higth, 2, 1, F);
  fwrite(P->Pixels, COL, P->weigth * P->higth, F);

  fclose(F);
  return 1;
}*/
