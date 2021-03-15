#include <GL/glut.h>///(0)使用GLUT外掛
#include <stdio.h>///TODO

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );///清空

   // glutSolidTeapot(0.3);///實心茶壺(改變大小)
   glBegin(GL_POLYGON);///不規則形
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

    glutSwapBuffers();///交換兩倍的Buffers
}

void mouse(int button,int state,int x,int y)///TODO
{
    if(state==GLUT_DOWN)
    {
        printf("    glVertex3f((%d-150)/150.0,-(%d-150)/150.0,0);\n",x,y);
    }

}///TODO:印出來

int main(int argc, char**argv)///???以前是int main()
{
    glutInit(&argc,argv);///(1)GLUT初始設定
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)顯示模式
    glutCreateWindow("08160891我是JOJO");///(3)開窗

    glutDisplayFunc(display);///(4)等一下要顯示的函式(display顯示函式)
    glutMouseFunc(mouse);///TODO:(1)mouse滑鼠的程式
    glutMainLoop();///(5)主要迴圈
}
