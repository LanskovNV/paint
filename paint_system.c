/* leins, 28.05.2017 */
#include <math.h>
#include <stdlib.h>
#include "paint_system.h"
#include "paint_graphics.h"

POINT_t PosInit(int x, int y)
{
  POINT_t p;

  p.x = x;
  p.y = y;

  return p;
} /* end of func */

COLOR_t ColorInit(int r, int g, int b)
{
  COLOR_t col;

  col.R = r;
  col.G = g;
  col.B = b;
  return col;
} /* end of func */

void FieldInit(COLOR_t *F)
{
  int x, y;
  COLOR_t color = ColorInit(255, 255, 255); // color set

  for (y = 0; y < HEIGTH; y++)
    for (x = 0; x < WIDTH; x++)
        F[y * WIDTH + x] = color;

} /* end of func */

float GetLineLen(POINT_t A, POINT_t B)
{
  int deltaX = A.x - B.x, deltaY = A.y - B.y;

  if (deltaX == 0)
    if (deltaY == 0)
      return 0;
    else
      return abs(deltaY);
  else
    if (deltaY == 0)
      return deltaX;
    else
      return sqrt(deltaX *deltaX + deltaY * deltaY);
} /* end of func */

