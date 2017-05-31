/* leins, 21.05.2017 */
#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include "paint_graphics.h"
#include "types.h"

#define MAPP 1000
#define WEIGTH 800
#define HIGTH 800
#define COL 3

/* global definitions */
OPTION_t g_activeOption = PENCIL;
BYTE_t g_field[HIGTH][WEIGTH][COL];

void Keyboard(BYTE_t Key, int MouseX, int MouseY)
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
