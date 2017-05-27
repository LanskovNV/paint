/* leins, 21.05.2017 */
#include <stdlib.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include "paint_callbacks.h"
#include "types.h"

#define MAPP 600
/* global definitions */

OPTION_t g_activeOption = PENCIL;

int main(int argc, char *argv[])
{
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

  glutMainLoop();
  return 0;
}/* End of main */
