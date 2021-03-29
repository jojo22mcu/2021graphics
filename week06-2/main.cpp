#include <GL/glut.h>///(0)使用GLUT外掛
float angle=0;///有N個頂點
void hand()
{
    glPushMatrix();///TODO:備份矩陣
        glScalef(0.5,0.1,0.1);///細細長長的
        glutSolidCube(1);///方塊
    glPopMatrix();///TODO:還原矩陣
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );///清空
    glPushMatrix();///左手臂
        glTranslatef(-0.25,0,0);///把正確的手臂，掛在肩上
        glRotatef(angle,0,0,1);///TODO2:要轉動angle
        glTranslatef(-0.25,0,0);///將旋轉中心，放在正中心
        hand();///上手臂

        glPushMatrix();///TODO:備份矩陣
            glTranslatef(-0.25,0,0);///把正確的手臂，掛在肩上
            glRotatef(angle,0,0,1);///TODO2:要轉動angle
            glTranslatef(-0.25,0,0);///將旋轉中心，放在正中心
            hand();///下手肘
        glPopMatrix();///TODO:還原矩陣
    glPopMatrix();///TODO:還原矩陣

    glPushMatrix();///右手臂
        glTranslatef(+0.25,0,0);///把正確的手臂，掛在肩上
        glRotatef(angle,0,0,1);///TODO2:要轉動angle
        glTranslatef(+0.25,0,0);///將旋轉中心，放在正中心
        hand();///上手臂

        glPushMatrix();///TODO:備份矩陣
            glTranslatef(+0.25,0,0);///把正確的手臂，掛在肩上
            glRotatef(angle,0,0,1);///TODO2:要轉動angle
            glTranslatef(+0.25,0,0);///將旋轉中心，放在正中心
            hand();///下手肘
        glPopMatrix();///TODO:還原矩陣
    glPopMatrix();///TODO:還原矩陣
    glutSwapBuffers();///交換兩倍的Buffers
    angle++;


}

int main(int argc, char**argv)///???以前是int main()
{
    glutInit(&argc,argv);///(1)GLUT初始設定
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)顯示模式
    glutCreateWindow("08160891我是JOJO");///(3)開窗


    glutIdleFunc(display);///TODO:idle很閒的時候，就重畫畫面
    glutDisplayFunc(display);///(4)等一下要顯示的函式(display顯示函式)

    glutMainLoop();///(5)主要迴圈
}
