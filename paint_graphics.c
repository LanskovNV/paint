/* leins, 22.05.2017 */
#include <GL/gl.h>
#include <GL/glut.h>
#include "paint_graphics.h"

void DrawCircle(int x, unt y, int radius)
{
  int i;
  const float sepCnt = 20;

  glColor3d(1.0, 0, 0);
  glBegin(GL_TRIANGLE_FAN);
  glVertex2d(X, Y);
  for (i = 0; i < sepCnt; i++)
  {
    float angl = i / (sepCnt - 1) * 2.0 * pi;
    glVertex2d(X + R * cos(angl), Y + R * sin(angl));
  }

  glEnd();
}/* End of DrawCircle function */
