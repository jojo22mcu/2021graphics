#include <GL/glut.h>///(0)�ϥ�GLUT�~��
#include <stdio.h>
int N=0, vx[3000],vy[3000];///�ǳƤ@�ﳻ�I�A�����n�e�A����-1~+1
float angle=0;///��N�ӳ��I
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );///�M��

   glPushMatrix();///TODO:�ƥ��x�}
        glRotatef(angle,0,0,1);///TODO:����
        glScalef(0.5,0.1,0.1);///�զ��Ӫ���
        glColor3f(0.3,0.3,1.0);///���Ū�
        glutSolidCube(1);///���

    glPopMatrix();///TODO:�٭�x�}
    glutSwapBuffers();///�洫�⭿��Buffers
}
void keyboard( unsigned char key,int x,int y)
{

}
void motion(int x,int y)
{
    angle++;///TODO:////TODO:�u�nmouse�bmotion�ɡA�N�|�W�[����
    display();///TODO:�W�[��A���e�e��
    //printf("%d %d\n",x,y);///�⳻�I�O�_�ӡA�����n�e
   // vx[N]=(x-150)/150.0;
    ///vy[N]=-(y-150)/150.0;
   //// N++;
    //////display();
}
void mouse(int button,int state,int x,int y)
{

}
int main(int argc, char**argv)///???�H�e�Oint main()
{
    glutInit(&argc,argv);///(1)GLUT��l�]�w
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)��ܼҦ�
    glutCreateWindow("08160891�ڬOJOJO");///(3)�}��
    glutKeyboardFunc(keyboard);
    glutDisplayFunc(display);///(4)���@�U�n��ܪ��禡(display��ܨ禡)
    glutMouseFunc(mouse);///TODO:(1)mouse�ƹ����{��
    glutMotionFunc(motion);///TODO:(1)mouse�ƹ����{��
    glutMainLoop();///(5)�D�n�j��
}
