#include <GL/glut.h>///(0)�ϥ�GLUT�~��
#include <stdio.h>///TODO
float vx[2000],vy[2000];///�ǳƤ@�ﳻ�I�A�����n�e�A����-1~+1
int N=0;///��N�ӳ��I
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );///�M��

    glBegin(GL_LINE_LOOP);
    for(int i=0;i<N;i++)
    {
        glVertex2f(vx[i],vy[i]);
    }

    glEnd();
    glutSwapBuffers();///�洫�⭿��Buffers
}
void mouse(int buttin,int state,int x,int y)
{
}

void motion(int x,int y)
{
    printf("%d %d\n",x,y);///�⳻�I�O�_�ӡA�����n�e
    vx[N]=(x-150)/150.0;
    vy[N]=-(y-150)/150.0;
    N++;
    display();
}
int main(int argc, char**argv)///???�H�e�Oint main()
{
    glutInit(&argc,argv);///(1)GLUT��l�]�w
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)��ܼҦ�
    glutCreateWindow("08160891�ڬOJOJO");///(3)�}��

    glutDisplayFunc(display);///(4)���@�U�n��ܪ��禡(display��ܨ禡)
    glutMouseFunc(mouse);///TODO:(1)mouse�ƹ����{��
    glutMotionFunc(motion);///TODO:(1)mouse�ƹ����{��
    glutMainLoop();///(5)�D�n�j��
}
