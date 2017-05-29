/* leins, 22.05.2017 */
#include <GL/gl.h>
#include <GL/glut.h>
#include "paint_graphics.h"

void ColorInit(COLOR_t *color, float R, float G, float B)
{
  color->R = R;
  color->G = G;
  color->B = B;
} /* end of func */

void DrawLine(POINT_t A, POINT_t B, int width, COLOR_t color)
{
  if (GetLineLen(A, B) >= LINE_GRADE)
  {
    /* drawing */
    glLineWidth(width);
    glBegin(GL_LINES);
    glColor3f(color.R, color.G, color.B);
    glVertex2d(A.x, A.y);
    glVertex2d(B.x, B.y);
    glEnd();
  }
} /* end of func */
