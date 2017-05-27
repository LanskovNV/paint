/* leins, 22.05.2017 */
#include <GL/gl.h>
#include <GL/glut.h>
#include "paint_callbacks.h"
#include "types.h"

extern OPTION_t g_activeOption;

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

    break;
  default:
    break;
  }
}/* end of Motion func */
