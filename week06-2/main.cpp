#include <GL/glut.h>///(0)�ϥ�GLUT�~��
float angle=0;///��N�ӳ��I
void hand()
{
    glPushMatrix();///TODO:�ƥ��x�}
        glScalef(0.5,0.1,0.1);///�ӲӪ�����
        glutSolidCube(1);///���
    glPopMatrix();///TODO:�٭�x�}
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );///�M��
    glPushMatrix();///�����u
        glTranslatef(-0.25,0,0);///�⥿�T�����u�A���b�ӤW
        glRotatef(angle,0,0,1);///TODO2:�n���angle
        glTranslatef(-0.25,0,0);///�N���त�ߡA��b������
        hand();///�W���u

        glPushMatrix();///TODO:�ƥ��x�}
            glTranslatef(-0.25,0,0);///�⥿�T�����u�A���b�ӤW
            glRotatef(angle,0,0,1);///TODO2:�n���angle
            glTranslatef(-0.25,0,0);///�N���त�ߡA��b������
            hand();///�U��y
        glPopMatrix();///TODO:�٭�x�}
    glPopMatrix();///TODO:�٭�x�}

    glPushMatrix();///�k���u
        glTranslatef(+0.25,0,0);///�⥿�T�����u�A���b�ӤW
        glRotatef(angle,0,0,1);///TODO2:�n���angle
        glTranslatef(+0.25,0,0);///�N���त�ߡA��b������
        hand();///�W���u

        glPushMatrix();///TODO:�ƥ��x�}
            glTranslatef(+0.25,0,0);///�⥿�T�����u�A���b�ӤW
            glRotatef(angle,0,0,1);///TODO2:�n���angle
            glTranslatef(+0.25,0,0);///�N���त�ߡA��b������
            hand();///�U��y
        glPopMatrix();///TODO:�٭�x�}
    glPopMatrix();///TODO:�٭�x�}
    glutSwapBuffers();///�洫�⭿��Buffers
    angle++;


}

int main(int argc, char**argv)///???�H�e�Oint main()
{
    glutInit(&argc,argv);///(1)GLUT��l�]�w
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)��ܼҦ�
    glutCreateWindow("08160891�ڬOJOJO");///(3)�}��


    glutIdleFunc(display);///TODO:idle�ܶ����ɭԡA�N���e�e��
    glutDisplayFunc(display);///(4)���@�U�n��ܪ��禡(display��ܨ禡)

    glutMainLoop();///(5)�D�n�j��
}
