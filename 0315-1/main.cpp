#include <GL/glut.h>///(0)�ϥ�GLUT�~��
#include <stdio.h>///TODO

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );///�M��

   // glutSolidTeapot(0.3);///��߯���(���ܤj�p)
   glBegin(GL_POLYGON);///���W�h��
    glVertex3f((120-150)/150.0,-(129-150)/150.0,0);
    glVertex3f((127-150)/150.0,-(130-150)/150.0,0);
    glVertex3f((131-150)/150.0,-(129-150)/150.0,0);
    glVertex3f((133-150)/150.0,-(126-150)/150.0,0);
    glVertex3f((138-150)/150.0,-(122-150)/150.0,0);
    glVertex3f((159-150)/150.0,-(122-150)/150.0,0);
    glVertex3f((176-150)/150.0,-(130-150)/150.0,0);
    glVertex3f((183-150)/150.0,-(134-150)/150.0,0);
    glVertex3f((189-150)/150.0,-(143-150)/150.0,0);
    glVertex3f((195-150)/150.0,-(156-150)/150.0,0);

    glEnd();

    glutSwapBuffers();///�洫�⭿��Buffers
}

void mouse(int button,int state,int x,int y)///TODO
{
    if(state==GLUT_DOWN)
    {
        printf("    glVertex3f((%d-150)/150.0,-(%d-150)/150.0,0);\n",x,y);
    }

}///TODO:�L�X��

int main(int argc, char**argv)///???�H�e�Oint main()
{
    glutInit(&argc,argv);///(1)GLUT��l�]�w
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)��ܼҦ�
    glutCreateWindow("08160891�ڬOJOJO");///(3)�}��

    glutDisplayFunc(display);///(4)���@�U�n��ܪ��禡(display��ܨ禡)
    glutMouseFunc(mouse);///TODO:(1)mouse�ƹ����{��
    glutMainLoop();///(5)�D�n�j��
}
