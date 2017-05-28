/* leins, 28.05.2017 */
#include <math.h>
#include "paint_system.h"
#include "paint_graphics.h"

float GetLineLen(POINT_t A, POINT_t B)
{
  float length = 0;
  float deltaX = 0, deltaY = 0;

  if ((deltaX = A.x - B.x) < 0)
    deltaX *= -1.0;
  if ((deltaY = A.y - B.y) < 0)
    deltaX *= -1.0;

  if (deltaX == 0 && deltaY == 0)
    return length;

  if (deltaX == 0)
    return deltaY;
  else if (deltaY == 0)
    return deltaX;
  else
  {
    length = sqrt(deltaX * deltaX + deltaY * deltaY);
    return length;
  }
} /* end of func */
