
#include <GL/glut.h>///(0)使用GLUT外掛
#include <stdio.h>///TODO
float teapotX=0,teapotY=0;///TODO2:茶壺的座標

void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );///清空

   glPushMatrix();///TODO2:矩陣備份
        glTranslatef(teapotX,teapotY,0);
        glutSolidTeapot(0.3);
    glPopMatrix();///TODO2:矩陣還原
    glEnd();
    glutSwapBuffers();///交換兩倍的Buffers
}

void motion(int x,int y)///TODO2:motion的函式
{
    teapotX=(x-150)/150.0;///TODO2:換算座標
    teapotY=-(y-150)/150.0;
    display();
}
int main(int argc, char**argv)///???以前是int main()
{
    glutInit(&argc,argv);///(1)GLUT初始設定
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)顯示模式
    glutCreateWindow("08160891我是JOJO");///(3)開窗

    glutDisplayFunc(display);///(4)等一下要顯示的函式(display顯示函式)
    //glutMouseFunc(mouse);///TODO:(1)mouse滑鼠的程式
    glutMotionFunc(motion);///TODO:(1)mouse滑鼠的程式
    glutMainLoop();///(5)主要迴圈
}
