#include <GL/glut.h>///(0)使用GLUT外掛
#include <stdio.h>
int N=0, vx[3000],vy[3000];///準備一堆頂點，等等要畫，介於-1~+1
float angle=0;///有N個頂點
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );///清空

   glPushMatrix();///TODO:備份矩陣
        glRotatef(angle,0,0,1);///TODO:旋轉
        glScalef(0.5,0.1,0.1);///調成細長的
        glColor3f(0.3,0.3,1.0);///藍藍的
        glutSolidCube(1);///方塊

    glPopMatrix();///TODO:還原矩陣
    glutSwapBuffers();///交換兩倍的Buffers
}
void keyboard( unsigned char key,int x,int y)
{

}
void motion(int x,int y)
{
    angle++;///TODO:////TODO:只要mouse在motion時，就會增加角度
    display();///TODO:增加後，重畫畫面
    //printf("%d %d\n",x,y);///把頂點記起來，等等要畫
   // vx[N]=(x-150)/150.0;
    ///vy[N]=-(y-150)/150.0;
   //// N++;
    //////display();
}
void mouse(int button,int state,int x,int y)
{

}
int main(int argc, char**argv)///???以前是int main()
{
    glutInit(&argc,argv);///(1)GLUT初始設定
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)顯示模式
    glutCreateWindow("08160891我是JOJO");///(3)開窗
    glutKeyboardFunc(keyboard);
    glutDisplayFunc(display);///(4)等一下要顯示的函式(display顯示函式)
    glutMouseFunc(mouse);///TODO:(1)mouse滑鼠的程式
    glutMotionFunc(motion);///TODO:(1)mouse滑鼠的程式
    glutMainLoop();///(5)主要迴圈
}
