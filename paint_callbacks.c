/* leins, 22.05.2017 */
#include <GL/gl.h>
#include <GL/glut.h>
#include "paint_callbacks.h"
#include "types.h"
#include "paint_graphics.h"
#include "paint_system.h"

extern OPTION_t g_activeOption;
extern COLOR_t g_activeColor;
extern int g_lineWigth;
void Keyboard(unsigned char Key, int MouseX, int MouseY)
{
  if (Key == 27) // escape
    exit(0);
}

void Display(void)
{
  /* clear screen */
  glClearColor(1, 1, 1, 1); // change background color
  glClear(GL_COLOR_BUFFER_BIT);

  /* buffers */
  glutPostRedisplay();
  glutSwapBuffers();
}/* End of Display func */

void Mouse(int button, int state, int x, int y)
{
  /* change g_activeOption */

} /* end of Mouse func */

void Motion(int x, int y)
{
  switch (g_activeOption)
  {
  case PENCIL:
    static POINT_t oldPos;
    static BOOL_t flag = TRUE; // ???
    POINT_t newPos;

    if (flag)
    {

    }

    if ()

    if (GetLineLen(newPos, oldPos) >= LINE_GRADE)
    {
      /* drawing */
      glLineWidth(g_lineWigth);
      glBegin(GL_LINES);
      glColor3f(color.R, color.G, color.B);
      glVertex2d(, pos.y);
      glVertex2d(pos.x + changeX, pos.y);
      glEnd();


    }

    break;
  default:
    break;
  }
}/* end of Motion func */
