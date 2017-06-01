/* leins, 21.05.2017 */
#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include "paint_graphics.h"
#include "paint_system.h"
#include "types.h"

/* global definitions */
COLOR_t g_field[HEIGTH * WIDTH];
int g_lineSize = 5;

void Display(void)
{
  /* clear screen */
  glClearColor(0.8, 0.8, 0.8, 1); // change background color
  glClear(GL_COLOR_BUFFER_BIT);

  glRasterPos2d(-1, 1);
  glPixelZoom(ZOOM, -ZOOM);
  //Swap(g_field);
  glDrawPixels(WIDTH, HEIGTH, GL_BGR_EXT, GL_UNSIGNED_BYTE, g_field);

  /* buffers */
  glutPostRedisplay();
  glutSwapBuffers();
}/* End of Display func */

void Mouse(int button, int state, int x, int y)
{
} /* end of Mouse func */

void Motion(int x, int y)
{
  static POINT_t oldPos;
  POINT_t newPos = PosInit(x, y);
  float len;


  if (oldPos.x == 00 && oldPos.y == 0)
    oldPos = PosInit(x, y);

  if ((len = GetLineLen(newPos, oldPos)) >= 5)
  {
    PutLine(g_field, ColorInit(0,0,0),newPos, oldPos, len);
    oldPos = PosInit(x, y);
  }
}/* end of Motion func */

int main(int argc, char *argv[])
{
  FieldInit(g_field);

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
