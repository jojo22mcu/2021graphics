#include <windows.h>
#include <GL/glut.h>
#include "CMP3_MCI.h"///TODO5
CMP3_MCI mp3;///TODO5

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glutSolidTeapot(0.3);
    glutSwapBuffers();
}
void keyboard(unsigned char key,int x,int y)///TODO2
{
    if(key=='1')PlaySound("do.wav",NULL,SND_ASYNC);
    if(key=='2')PlaySound("re.wav",NULL,SND_ASYNC);
    if(key=='3')PlaySound("mi.wav",NULL,SND_ASYNC);
    if(key=='4')PlaySound("fa.wav",NULL,SND_ASYNC);
    if(key=='5')PlaySound("so.wav",NULL,SND_ASYNC);
}
void mouse(int button,int state,int x,int y)///TODO4
{
    if(state==GLUT_DOWN)PlaySound("shot.wav",NULL,SND_ASYNC);
}


int main(int argc,char**argv)
{

    mp3.Load("music.mp3");///TODO5
    mp3.Play();///TODO5

    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("WEEK10 sound");


    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);///TODO2
    glutMouseFunc(mouse);
    glutMainLoop();
}

