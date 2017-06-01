/* leins, 22.05.2017 */
#include <GL/gl.h>
#include <GL/glut.h>
#include "paint_graphics.h"
#include "paint_system.h"
#include "types.h"

extern int g_lineSize;

void DrawCube(COLOR_t *field, COLOR_t color, POINT_t pos)
{
  int i, j;

  for (i = pos.y; i < pos.y + g_lineSize; i++)
    for (j = pos.x; j < pos.x + g_lineSize; j++)
      if (i * WIDTH + j < WIDTH * HEIGTH && i > 0 && j > 0)
        field[i * WIDTH + j] = color;
} /* end of func */

void PutLine(COLOR_t *field, COLOR_t color, POINT_t A, POINT_t B, float len)
{
  POINT_t pos;
  float i, t = 1. / len;

  for (i = 0; i <= 1; i += t)
  {
    pos = PosInit(A.x + (A.x - B.x) * i, A.y + (A.y - B.y) * i);
    DrawCube(field, color, pos);
  }
}

