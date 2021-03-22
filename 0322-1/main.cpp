#include <GL/glut.h>///(0)ㄏノGLUT本
#include <stdio.h>///TODO
float vx[2000],vy[2000];///非称帮郴翴单单璶礶ざ-1~+1
int N=0;///ΤN郴翴
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );///睲

    glBegin(GL_LINE_LOOP);
    for(int i=0;i<N;i++)
    {
        glVertex2f(vx[i],vy[i]);
    }

    glEnd();
    glutSwapBuffers();///ユ传ㄢBuffers
}
void mouse(int buttin,int state,int x,int y)
{
}

void motion(int x,int y)
{
    printf("%d %d\n",x,y);///р郴翴癘癬ㄓ单单璶礶
    vx[N]=(x-150)/150.0;
    vy[N]=-(y-150)/150.0;
    N++;
    display();
}
int main(int argc, char**argv)///???玡琌int main()
{
    glutInit(&argc,argv);///(1)GLUT﹍砞﹚
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);///(2)陪ボ家Α
    glutCreateWindow("08160891и琌JOJO");///(3)秨怠

    glutDisplayFunc(display);///(4)单璶陪ボㄧΑ(display陪ボㄧΑ)
    glutMouseFunc(mouse);///TODO:(1)mouse菲公祘Α
    glutMotionFunc(motion);///TODO:(1)mouse菲公祘Α
    glutMainLoop();///(5)璶癹伴
}
