/* leins, 21.05.2017 */
#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include "paint_graphics.h"
#include "types.h"

#define MAPP 600
/* global definitions */
OPTION_t g_activeOption = PENCIL;
COLOR_t g_color;
int g_lineWigth = 3;

void Keyboard(unsigned char Key, int MouseX, int MouseY)
{
  if (Key == 27) // escape
    exit(0);
}

void Display(void)
{
  /* clear screen */
  //glClearColor(1, 1, 1, 1); // change background color
  //glClear(GL_COLOR_BUFFER_BIT);

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
  static POINT_t oldPos;
  POINT_t newPos;

  newPos.x = (x - CONV_X) / CONV_X;
  newPos.y = (-1.0) * (y - CONV_Y) / CONV_Y;
  switch (g_activeOption)
  {
  case PENCIL:
    if (oldPos.x == 0 && oldPos.y == 0)
    {
      oldPos.x = (x - CONV_X) / CONV_X;
      oldPos.y = (-1.0) * (y - CONV_Y) / CONV_Y;
    }
    DrawLine(newPos, oldPos, g_lineWigth, g_color);
    break;
  default:
    break;
  }
}/* end of Motion func */

int main(int argc, char *argv[])
{

  ColorInit(&g_color, 1, 1, 1);

  /* glut init */
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);

  /* creating window */
  glutInitWindowPosition(0, 0);
  glutInitWindowSize(MAPP, MAPP);
  glutCreateWindow("my-paint");
  /* -==- */

  /* callback functions */
  glutDisplayFunc(Display);
  glutKeyboardFunc(Keyboard);
  glutMouseFunc(Mouse);
  glutMotionFunc(Motion);

  glutMainLoop();
  return 0;
}/* End of main */
