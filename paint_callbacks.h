#ifndef PAINT_CALLBACKS_H
#define PAINT_CALLBACKS_H

/* functions */
void Keyboard(unsigned char Key, int MouseX, int MouseY);
void Display(void);
void Mouse(int button, int state, int x, int y);
void Motion(int x, int y);
#endif // PAINT_CALLBACKS_H
