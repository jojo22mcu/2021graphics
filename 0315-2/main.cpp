
#include <GL/glut.h>///(0)�ϥ�GLUT�~��
#include <stdio.h>///TODO
float teapotX=0,teapotY=0;///TODO2:�������y��

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );///�M��

   glPushMatrix();///TODO2:�x�}�ƥ�
        glTranslatef(teapotX,teapotY,0);
        glutSolidTeapot(0.3);
    glPopMatrix();///TODO2:�x�}�٭�
    glEnd();
    glutSwapBuffers();///�洫�⭿��Buffers
}

void motion(int x,int y)///TODO2:motion���禡
{
    teapotX=(x-150)/150.0;///TODO2:����y��
    teapotY=-(y-150)/150.0;
    display();
}
int main(int argc, char**argv)///???�H�e�Oint main()
{
    glutInit(&argc,argv);///(1)GLUT��l�]�w
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)��ܼҦ�
    glutCreateWindow("08160891�ڬOJOJO");///(3)�}��

    glutDisplayFunc(display);///(4)���@�U�n��ܪ��禡(display��ܨ禡)
    //glutMouseFunc(mouse);///TODO:(1)mouse�ƹ����{��
    glutMotionFunc(motion);///TODO:(1)mouse�ƹ����{��
    glutMainLoop();///(5)�D�n�j��
}
