/* leins, 21.05.2017 */
#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include "paint_graphics.h"
#include "paint_system.h"
#include "types.h"

/* global definitions */
OPTION_t g_activeOption = PENCIL;
PIC_t g_field;

void Display(void)
{
  /* clear screen */
  glClearColor(1, 1, 1, 1); // change background color
  glClear(GL_COLOR_BUFFER_BIT);

  glDrawPixels(WEIGTH, HIGTH, GL_BGR_EXT, GL_UNSIGNED_BYTE, g_field.pixels);

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
  COLOR_t backCol;

  ColorInit(250, 250, 250, &backCol);
  FieldInit(&g_field, backCol, WEIGTH, HIGTH);

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
  glutMouseFunc(Mouse);
  glutMotionFunc(Motion);

  glutMainLoop();
  return 0;
}/* End of main */
