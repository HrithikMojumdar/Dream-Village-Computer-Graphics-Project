#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>


void delay(){
    for(int i=0;i<100000000;i++);
}
void circle(GLfloat rx, GLfloat ry, GLfloat x, GLfloat y)
{
    int i=0;
    float angle;
    GLfloat PI= 2.0f * 3.1416;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
    for(i=0;i<100;i++)
    {
        angle = 2 * PI * i/100;
        glVertex2f(x+(cos(angle)*rx),y+(sin(angle)* ry));
    }
    glEnd();
}

void boat(int x1, int y1, int boatLength)
{
    int x2 = x1 + boatLength, y2 = y1, x3 = x2+(boatLength/2)-1,y3 = y2+boatLength/2, x4 = x2, y4 = y3-1, x5 = x1, y5 = y4, x6=x1-boatLength/2-1,y6=y3;

    glBegin(GL_POLYGON);
        glColor3d(1,0,0);
         glColor3ub(85, 28, 22);
        glVertex2d(x1,y1);
        glVertex2d(x2,y2);
        glVertex2d(x3,y3);
        glVertex2d(x4,y4);
        glVertex2d(x5,y5);
        glVertex2d(x6,y6);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3d(1,1,1);

        glColor3ub(160, 155, 136);
        glVertex2d(x3,y3);
        glVertex2d(x4,y4);
        glVertex2d(x5,y5);
        glVertex2d(x6,y6);
        glVertex2d(x1,y6+.7);
        glVertex2d(x2,y3+.7);
    glEnd();
    glColor3d(.90,1,1);
    glRectf(x5-.2,y5+1,x5+.2,y5+12);

    glBegin(GL_TRIANGLES);
        glColor3d(0,.1,1);
        glVertex2d(x5+.5,y5+11);
        glVertex2d(x5+.5,y5+2.5);
        glVertex2d(x4-3,y5+2.3);
    glEnd();

    glBegin(GL_LINES);
        glColor3d(1,0,0);
        glLineWidth(20);
        glVertex2d(x5+.5,y5+11);
        glVertex2d(x5+.2,y5+11);

        glVertex2d(x5+.5,y5+2.5);
        glVertex2d(x5+.2,y5+2.5);

        glVertex2d(x4-3,y5+2.3);
        glVertex2d(x4-2.8,y5+2);
    glEnd();


}


void train()
{
    glBegin(GL_QUADS);

    //back cabin
    glColor3ub(58, 90, 145);
    //top
    glVertex2d(61,55);
    glVertex2d(70,55);
    glVertex2d(69,59);
    glVertex2d(62,59);
    //front
    glVertex2d(61,55);
    glVertex2d(61,52);
    glVertex2d(70,52);
    glVertex2d(70,55);
    //front plate
    glColor3ub(225, 43, 145);
    glVertex2d(61.2,52);
    glVertex2d(61.2,48);
    glVertex2d(69.8,48);
    glVertex2d(69.8,52);
    //front plate small for aesthetics
    glColor3ub(22, 23, 145);
    glVertex2d(63,51);
    glVertex2d(63,49);
    glVertex2d(68.4,49);
    glVertex2d(68.4,51);

    //joint
    glColor3f(1,0,0);
    glVertex2d(65.1,48);
    glVertex2d(66.1,48);
    glVertex2d(66,46);
    glColor3f(1,.9,.30);
    glVertex2d(65,46);
    //joint shadow
    glColor3f(1,.9,0);
    glVertex2d(64.8,48);
    glVertex2d(65.1,48);
    glVertex2d(65,46);
    glVertex2d(64.7,46);


    //front cabin
    glColor3ub(58, 90, 145);
    //top
    glVertex2d(61,43);
    glVertex2d(70,43);
    glVertex2d(69,46);
    glVertex2d(62,46);
    //front
    glVertex2d(61,43);
    glVertex2d(61,39);
    glVertex2d(70,39);
    glVertex2d(70,43);

    //front plate
    glColor3ub(225, 43, 145);
    glVertex2d(61.2,40);
    glVertex2d(61.2,35);
    glVertex2d(69.8,35);
    glVertex2d(69.8,40);

    //front plate small for aesthetics
    glColor3ub(22, 23, 145);
    glVertex2d(63,39);
    glVertex2d(63,36);
    glVertex2d(68.4,36);
    glVertex2d(68.4,39);

    glEnd();
    //top plate front cabin
    glColor3f(1,0,0);
    circle(0.5,0.7,62,42);
    circle(0.5,0.7,69,42);
    //front plate
    glColor3f(1,1,1);
    circle(0.5,0.7,64,37.5);
    circle(0.5,0.7,65.5,37.5);
    circle(0.5,0.7,67.3,37.5);

    //rear cabin
    glColor3f(1,1,1);
    circle(0.3,0.5,63.5,50.2);
    circle(0.3,0.5,65,50.2);
    circle(0.3,0.5,66.5,50.2);
    circle(0.3,0.5,67.7,50.2);

}

void boat2()
{
    int x1=92,  y1=40;
    int x2=x1+2,y2=y1+4,x3=x2,y3=y2+7,x4=x1,y4=y3+4,x5=x4-2,y5=y3,x6=x5,y6=y2;
   glBegin(GL_POLYGON);
        glColor3d(.91,.90,.91);
        glColor3ub(160, 155, 136);
        glColor3ub(45, 28, 22);
        glVertex2d(x1,y1);
        glVertex2d(x2,y2);
        glVertex2d(x3,y3);
        glVertex2d(x4,y4);
        glVertex2d(x5,y5);
        glVertex2d(x6,y6);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3d(.1,0.2,0.2);
        glColor3ub(160, 155, 136);
         glVertex2d(x1,y1);
        glVertex2d(x2,y2);
        glVertex2d(x2-.7,y2);

        glVertex2d(x3,y3);
        glVertex2d(x4,y4);
        glVertex2d(x3-.7,y3);

        glVertex2d(x1,y1);
        glVertex2d(x6,y6);
        glVertex2d(x6+.7,y6);

        glVertex2d(x4,y4);
        glVertex2d(x5,y5);
        glVertex2d(x5+.7,y5);

        glVertex2d(x1,y1);
        glVertex2d(x1+1,y1+2);
        glVertex2d(x1-1,y1+2);

        glVertex2d(x4,y4);
        glVertex2d(x4+1,y4-2);
        glVertex2d(x4-1,y4-2);


    glEnd();


    glColor3ub(160, 155, 136);
    glRectf(x3,y3,x2-.7,y2);
    glRectf(x6,y6,x5+.7,y5);

    glRectf(x2-.7,y2-1,x6+.7,y2-1.5);
    glRectf(x2-.7,y2,x6+.7,y2+.5);
    glRectf(x2-.7,y2+2,x6+.7,y2+2.5);
    glRectf(x2-.7,y2+4,x6+.7,y2+4.5);
    glRectf(x2-.7,y2+6,x6+.7,y2+6.5);
    glRectf(x2-.7,y2+7.5,x6+.7,y2+8);


    glBegin(GL_QUADS);
        glVertex2d(x1-.2,y2+.2);
        glVertex2d(x1+.2,y2);
        glVertex2d(x2+1,y2+14);
        glVertex2d(x2+1,y2+14.4);

        glVertex2d(x1+.2,y2-.4);
        glVertex2d(x1+.6,y2-.2);
        glVertex2d(x1+1.4,y1-.6);
        glVertex2d(x1+1,y1-1);



        glVertex2d(x1+1.4,y1-.6);
        glVertex2d(x1+1,y1-1);
        glVertex2d(x1+.4,y1-1.6);
        glVertex2d(x1+2.1,y1-1.6);

    glEnd();

    glBegin(GL_LINES);
        glColor3f(1,0,0);
        glLineWidth(50);
        glVertex2d(x1-.4,y2);
        glVertex2d(x1-.4,y3);


        glVertex2d(x1-.4,y3);
        glVertex2d(x4,y4);

        glVertex2d(x1-.4,y2);
        glVertex2d(x1,y1);


    glEnd();

    glBegin(GL_TRIANGLES);
         glColor3ub(160, 15, 16);
        glVertex2d(x4+.1, y4);
        glVertex2d(x2+.8, y2+14);
        glVertex2d(x1, y2+1);
    glEnd();



}




void tree1(float x1, float y1)
{
    float x2 = x1+4,y2=y1, x3=x1+2,y3=y1+5;
    glColor3ub(11, 70, 11);
    glBegin(GL_TRIANGLES);
        glVertex2d(x1, y1);
        glVertex2d(x2, y2);
        glVertex2d(x3, y3);
    glEnd();
    glBegin(GL_QUADS);
        glVertex2d(x1+1.5, y1);
        glVertex2d(x1, y1-4);
        glVertex2d(x2, y1-4);
        glVertex2d(x2-1.5, y1);

        glVertex2d(x1+1.5, y1-4);
        glVertex2d(x1, y1-8);
        glVertex2d(x2, y1-8);
        glVertex2d(x2-1.5, y1-4);
        glColor3ub(68, 43, 2);
        glVertex2d(x1+1.5, y1-8);
        glVertex2d(x1+1, y1-14);
        glVertex2d(x2-1, y1-14);
        glVertex2d(x2-1.5, y1-8);


    glEnd();


}

void tree2(float x1, float y1)
{
    float x2 = x1+5,y2=y1, x3=x1+2.5,y3=y1+6;
    glColor3ub(11, 50, 11);
    glBegin(GL_TRIANGLES);
        glVertex2d(x1, y1);
        glVertex2d(x2, y2);
        glVertex2d(x3, y3);
    glEnd();
    glBegin(GL_QUADS);
        glVertex2d(x1+2, y1);
        glVertex2d(x1, y1-5);
        glVertex2d(x2, y1-5);
        glVertex2d(x2-2, y1);

        glVertex2d(x1+2, y1-5);
        glVertex2d(x1, y1-10);
        glVertex2d(x2, y1-10);
        glVertex2d(x2-2, y1-5);
        glColor3ub(68, 43, 2);
        glVertex2d(x1+2, y1-10);
        glVertex2d(x1+1.5, y1-18);
        glVertex2d(x2-1.5, y1-18);
        glVertex2d(x2-2, y1-10);
    glEnd();

}

void tree3(float x1, float y1)
{
    float x2 = x1+2,y2=y1, x3=x1+1,y3=y1+3;
    glColor3ub(11, 70, 11);
    glBegin(GL_TRIANGLES);
        glVertex2d(x1, y1);
        glVertex2d(x2, y2);
        glVertex2d(x3, y3);
    glEnd();
    glBegin(GL_QUADS);
        glVertex2d(x1+.5, y1);
        glVertex2d(x1, y1-3);
        glVertex2d(x2, y1-3);
        glVertex2d(x2-.5, y1);

        glVertex2d(x1+.5, y1-3);
        glVertex2d(x1, y1-6);
        glVertex2d(x2, y1-6);
        glVertex2d(x2-.5, y1-3);

        glVertex2d(x1+.5, y1-6);
        glVertex2d(x1, y1-9);
        glVertex2d(x2, y1-9);
        glVertex2d(x2-.5, y1-6);

        glVertex2d(x1+.5, y1-9);
        glVertex2d(x1, y1-12);
        glVertex2d(x2, y1-12);
        glVertex2d(x2-.5, y1-9);

        glColor3ub(68, 43, 2);
        glColor3ub(68, 43, 2);
        glVertex2d(x1+.7, y1-12);
        glVertex2d(x1+.4, y1-20);
        glVertex2d(x2-.4, y1-20);
        glVertex2d(x2-.7, y1-12);


    glEnd();


}


void tree4(float x1, float y1)
{
    float x2 = x1+2,y2=y1, x3=x1+1,y3=y1+2;
    glColor3ub(11, 70, 11);
    glBegin(GL_TRIANGLES);
        glVertex2d(x1, y1);
        glVertex2d(x2, y2);
        glVertex2d(x3, y3);
    glEnd();
    glBegin(GL_QUADS);
        glVertex2d(x1+.5, y1);
        glVertex2d(x1, y1-2);
        glVertex2d(x2, y1-2);
        glVertex2d(x2-.5, y1);

        glVertex2d(x1+.5, y1-2);
        glVertex2d(x1, y1-4);
        glVertex2d(x2, y1-4);
        glVertex2d(x2-.5, y1-2);

        glVertex2d(x1+.5, y1-4);
        glVertex2d(x1, y1-6);
        glVertex2d(x2, y1-6);
        glVertex2d(x2-.5, y1-4);

        glVertex2d(x1+.5, y1-6);
        glVertex2d(x1, y1-8);
        glVertex2d(x2, y1-8);
        glVertex2d(x2-.5, y1-6);

        glVertex2d(x1+.5, y1-8);
        glVertex2d(x1, y1-10);
        glVertex2d(x2, y1-10);
        glVertex2d(x2-.5, y1-8);

        glColor3ub(68, 43, 2);
        glVertex2d(x1+.7, y1-10);
        glVertex2d(x1+.5, y1-17);
        glVertex2d(x2-.5, y1-17);
        glVertex2d(x2-.7, y1-10);


    glEnd();


}
void house1(int x, int y)
{
    glColor3f(0,0,0);
    glBegin(GL_TRIANGLES);
        glVertex2d(x, y);//2.60
        glVertex2d(x+2,y+4);//4,64
        glVertex2d(x+4,y-2);//6,58
    glEnd();

    glColor3f(1,0.7,.11);
    glBegin(GL_QUADS);
        //wall right
        glColor3f(.19,0.3,.30);
        glVertex2f(x+3.5, y-7);//55,53
        glVertex2f(x+7.3, y-4.5);//9.3,55.5
        glVertex2f(x+7.3, y-1);//9.3,59
        glVertex2f(x+3.5, y-1.5);//5.5,58.5
        //door
        glColor3f(.9,0.9,0.90);
        glVertex2f(x+5.5,y-5.5);//7.5,54.5
        glVertex2f(x+6.25,y-5);//8.25,55
        glVertex2f(x+6.25,y-2.5);//8.25,57.5
        glVertex2f(x+5.5,y-2.5);//7.5,57.5



        //right roof
        glColor3f(1,0.7,.11);
        glVertex2d(x+2,y+4);//4,64
        glVertex2d(x+6,y+5);//8,65
        glVertex2d(x+8,y-1);//10,59
        glVertex2d(x+4,y-2);//6,58

        //wall left
        glColor3f(.91,0.3,.31);
        glVertex2f(x +0.3, y-5);//2.3,55
        glVertex2f(x + 3.5, y-7);//5.5,53
        glVertex2f(x + 3.5, y-1.5);//5.5,58.5
        glVertex2f(x+0.5, y);//2.5,60

        //window left
        glColor3f(1,1,1);
        glVertex2f(x+1.5,y-3.5); //3.5,56.5
        glVertex2f(x+2.2,y-4);//4.2,56
        glVertex2f(x+2.2,y-1.7);//4.2,58.3
        glVertex2f(x+1.5,y-1.3);//3.5,58.7
    glEnd();
    glFlush();
}

void house2(int x, int y)
{
    glColor3f(0,0,0);
    glBegin(GL_TRIANGLES);
        glVertex2d(x, y);//2.60
        glVertex2d(x+2,y+4);//4,64
        glVertex2d(x+4,y-2);//6,58
    glEnd();

    glColor3f(1,0.7,.11);
    glBegin(GL_QUADS);
        //wall right
        glColor3f(.3,0.1,.30);
        glVertex2f(x+3.5, y-7);//55,53
        glVertex2f(x+7.3, y-4.5);//9.3,55.5
        glVertex2f(x+7.3, y-1);//9.3,59
        glVertex2f(x+3.5, y-1.5);//5.5,58.5
        //door
        glColor3f(1,0.44,0.40);
        glVertex2f(x+5.5,y-5.5);//7.5,54.5
        glVertex2f(x+6.25,y-5);//8.25,55
        glVertex2f(x+6.25,y-2.5);//8.25,57.5
        glVertex2f(x+5.5,y-2.5);//7.5,57.5
        //right roof
        glColor3f(1,0.4,.31);
        glVertex2d(x+2,y+4);//4,64
        glVertex2d(x+6,y+5);//8,65
        glVertex2d(x+8,y-1);//10,59
        glVertex2d(x+4,y-2);//6,58
        //wall left
        glColor3f(.41,0.5,.31);
        glVertex2f(x +0.3, y-5);//2.3,55
        glVertex2f(x + 3.5, y-7);//5.5,53
        glVertex2f(x + 3.5, y-1.5);//5.5,58.5
        glVertex2f(x+0.5, y);//2.5,60

        //window left
        glColor3f(1,.0,.1);
        glVertex2f(x+1.5,y-3.5); //3.5,56.5
        glVertex2f(x+2.2,y-4);//4.2,56
        glVertex2f(x+2.2,y-1.7);//4.2,58.3
        glVertex2f(x+1.5,y-1.3);//3.5,58.7
    glEnd();
    glFlush();
}

void bird1(int x, int y)
{
    //feater
    glColor3ub(206, 69, 19);
    glBegin(GL_QUADS);
        glVertex2f(x,y);
        glColor3f(.2, 1.0, .10);
        glVertex2f(x+5,y);
        glColor3f(1, .90, .160);
        glVertex2f(x+3.5,y-2.5);
        glColor3f(1.0, .20, .90);
        glVertex2f(x+1.5,y-2.5);

        //tail
    glEnd();
    //body
    glColor3ub(255, 9, 6);
    circle(2.5,2,x+2.55,y-4.55);

    glBegin(GL_TRIANGLES);
        //lips
        glColor3ub(55, 220, 60);
        glVertex2f(x-1.3,y-5);
        glVertex2f(x+.8,y-3.1);
        glColor3f(1, .20, .160);
        glVertex2f(x+.8,y-6);

        //tail
        glColor3ub(0, 220, 60);
        glVertex2f(x+4.8,y-5);
        glColor3f(1, .20, .160);
        glVertex2f(x+7,y-5);
        glColor3f(1, .60, .90);
        glVertex2f(x+7,y-1);
    glEnd();
    //eye
    glColor3ub(0, 0, .10);
    circle(.3,.41,x+.1,y-4.6);

    //legs
    glBegin(GL_QUADS);
        glColor3f(.01,80,.12);
        glVertex2f(x+1.5,y-6.5);
        glVertex2f(x+1.5,y-8);
        glVertex2f(x+2,y-8);
        glVertex2f(x+2,y-6.5);



        glColor3f(.01,90,.12);
        glVertex2f(x+2.5,y-6.5);
        glVertex2f(x+2.5,y-8);
        glVertex2f(x+3,y-8);
        glVertex2f(x+3,y-6.5);
    glEnd();
    glFlush();
}
void bird2(int x, int y)
{
    //feater
    glColor3ub(206, 69, 19);
    glBegin(GL_QUADS);
        glVertex2f(x,y);
        glColor3f(.9, 1.0, .10);
        glVertex2f(x+5,y);
        glColor3f(1, 0, .160);
        glVertex2f(x+3.5,y-2.5);
        glColor3f(1.0, 0.0, 1.0);
        glVertex2f(x+1.5,y-2.5);


    glEnd();
    //body
    glColor3f(1, 1, 0);
    circle(2.5,2,x+2.55,y-4.55);

    glBegin(GL_TRIANGLES);
        //lips
        glColor3ub(55, 220, 60);
        glVertex2f(x+4.5,y-3.3);
        glVertex2f(x+4.5,y-5.8);
        glColor3f(1, .290, .160);
        glVertex2f(x+6,y-4.4);

        //tail
        glColor3ub(0, 220, 60);
        glVertex2f(x+.7,y-5.3);
        glColor3f(1, .20, .160);
        glVertex2f(x-2,y-2);
        glColor3f(1, .9, .90);
        glVertex2f(x-2,y-5.5);
    glEnd();
    //eye
    glColor3ub(0, 0, .10);
    circle(.3,.41,x+5,y-4.4);

    //legs
    glBegin(GL_QUADS);
        glColor3f(.01,80,.12);
        glVertex2f(x+1.7,y-6.5);
        glVertex2f(x+1.7,y-8);
        glVertex2f(x+2.2,y-8);
        glVertex2f(x+2.2,y-6.5);



        glColor3f(.01,90,.12);
        glVertex2f(x+2.7,y-6.5);
        glVertex2f(x+2.7,y-8);
        glVertex2f(x+3.2,y-8);
        glVertex2f(x+3.2,y-6.5);
    glEnd();
    glFlush();
}


void river()
{
    glColor3ub(1, 42, 104);

    circle(3,5,77.5,50);
    circle(3,5,78,42);
    circle(3,5,78.5,35);
    circle(3,5,79.5,27);
    circle(3,5,80,20);
    circle(3,5,80.5,14);
    circle(3,5,80.5,7);


    glBegin(GL_QUADS);
        glVertex2d(75, 55);
        glVertex2d(80, 2);
        glVertex2d(98.5, 2);
        glVertex2d(98.5, 55);

    glEnd();
    boat(76,40,7);
    boat(77,20,6);
   boat2();
    glColor3f(1,0,0);

    glFlush();

}





void rightTriangle(float x, float y, float distance,float height)
{
    glBegin(GL_TRIANGLES);
        glVertex2d(x,y);
        glVertex2d(x+.5,y-distance);
        glVertex2d(x-height,(y+y-distance)/2);
    glEnd();
}

void leftTriangle(float x, float y, float distance,float height)
{
    glBegin(GL_TRIANGLES);
        glVertex2d(x,y);
        glVertex2d(x,y-distance);
        glVertex2d(x+height,(y+y-distance)/2);
    glEnd();
}
void road()
{
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
        glVertex2d(75, 2);
        glVertex2d(70, 60);
        glVertex2d(60, 60);
        glVertex2d(60, 2);

    glEnd();
    //railpath right side footpath
    glBegin(GL_POLYGON);
     glColor3ub(22, 58, 21);
        glVertex2d(70, 60);
        glVertex2d(75, 55);
        glVertex2d(80, 2);
        glVertex2d(75, 2);
    glEnd();

    //triangles
    glColor3ub(22, 58, 21);
    rightTriangle(70,60,2,3);
    rightTriangle(70.3,58,2,3);
    rightTriangle(70.6,56,2,3);
    rightTriangle(70.9,54,2,3);
    rightTriangle(71,52,2,2.5);
    rightTriangle(71.2,50,2,2.5);
    rightTriangle(71.4,48,2,2.3);
    float x =71.6, y=46.0;
    int i;
    for(i=1; i<23; i++){
        rightTriangle(x, y, 2.0,2.0);
        x += 0.2;
        y -= 2;
    }

    //leftt side
    glColor3ub(22, 58, 21);
    leftTriangle(60,60,2,3);
    leftTriangle(60,58,2,3);
    leftTriangle(60,56,2,3);
    leftTriangle(60,54,2,2.4);
    leftTriangle(60,52,2,2.2);
    leftTriangle(60,50,2,2);
    leftTriangle(60,48,1,1.5);
    leftTriangle(60,47,1,1.5);

    //left
    //leftTriangle(60,41,1,1.3);
    //leftTriangle(60,40,1,1.3);
    //leftTriangle(60,39,1,1.3);
    float a=41.5;
    for(int j=0;j<15;j++){
        leftTriangle(60,a,1,1);
           a = a -1;
    }
    //leftTriangle(60,21,1,1);
     a=21;
    for(int j=0;j<14;j++){
        leftTriangle(60,a,1,1);
           a = a -1;

    }
    leftTriangle(60,3,1,1);




    //railroad
    glColor3f(0,0,0);
   // glColor3ub(104, 92, 62);
    glRectf(64,59,66,58);
    glRectf(63.5,57,66.5,56);
    glRectf(63,55,67,54);
    glRectf(62.5,53,67.5,52);
    glRectf(62,51,68,50);
    glRectf(61.5,49,68.5,48);
    glRectf(61.3,47,69,46);
    glRectf(61.2,45,69.3,44);
    glRectf(61.1,43,69.5,42);
    glRectf(61,41,69.7,40);
    glRectf(61,39,69.8,38);
    glRectf(61.1,37,69.9,36);
    glRectf(61.05,35,70,34);
    glRectf(61,33,70.2,32);
    glRectf(61,31,70.4,30);
    glRectf(61,29,70.6,28);
    glRectf(61,27,70.8,26);
    glRectf(61,25,71,24);
    glRectf(61,23,71.2,22);
    glRectf(61,21,71.4,20);
    glRectf(61,19,71.6,18);
    glRectf(61,17,71.8,16);
    glRectf(61,15,72,14);
    glRectf(61,13,72.2,12);
    glRectf(61,11,72.5,10);
    glRectf(61,9,72.7,8);
    glRectf(61,7,72.9,6);
    glRectf(61,5,73,4);
    glRectf(61,3,73.3,2);

    //glColor3ub(40, 40, 39);

 //rail pati
    glBegin(GL_POLYGON);
    glColor3ub(104, 92, 62);
    glVertex2d(62.5,2);
    glVertex2d(62.5,45);
    glVertex2d(63,45);
    glVertex2d(63,2);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(104, 92, 62);
    glVertex2d(62.5,45);
    glVertex2d(64.5,60);
    glVertex2d(64.8,60);
    glVertex2d(63,45);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(104, 92, 62);
    glVertex2d(71,2);
    glVertex2d(70.5,2);
    glVertex2d(68,45);
    glVertex2d(68.5,45);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(104, 92, 62);
    glVertex2d(65.4,60);
    glVertex2d(65,60);
    glVertex2d(68,45);
    glVertex2d(68.5,45);
    glEnd();



    /*lColor3ub(58, 43, 145);
    glRectf(61,42,70,46);
    glColor3ub(62, 48, 127);
    glRectf(61,42,70,38);
    glColor3f(1,1,0);
    //glRectf(62,40,69,36);*/



    //train();

}


void sky()
{
    glColor3ub(14, 138, 239);
    glBegin(GL_POLYGON);
        glVertex2d(1.5,60);
        glVertex2d(1.5, 98);
        glVertex2d(98.5, 98);
        glVertex2d(98.5, 60);
    glEnd();
    glBegin(GL_QUADS);
        glVertex2d(70,60);
        glVertex2d(75,55);
        glVertex2d(98.5,55);
        glVertex2d(98.5,60);
    glEnd();

    glColor3ub(255, 0, 0);
    circle(4,9,75,85);
    //cloud left to right
    glColor3f(1, 1, 1);

    //1
    circle(3,5,5,88);
    circle(3,5,8,91);
    circle(3,5,12,92);
    circle(3,5,12,87);
    circle(3,5,7,85);
    //2
    circle(3,5,30,88);
    circle(3,5,33,91);
    circle(3,5,37,92);
    circle(3,5,37,87);
    circle(3,5,32,85);
    //3
    circle(4,5,55,88);
    circle(4,5,58,91);
    circle(4,5,62,92);
    circle(4,5,62,87);
    circle(4,5,57,85);
    //4
    circle(2,3,90,80);
    circle(2,3,92,82);
    circle(2,3,95,84);
    circle(2,3,95,80);
    circle(2,3,92,79);
    circle(2,3,90,80);

    bird1(90,95);
    bird2(7,75);

    //glFlush();

}

void homes()
{
    //glColor3f(0,1,0);
    //glColor3ub(190, 190, 190);
    glColor3ub(22, 58, 21);
    glColor3ub(22, 49, 22);
    glBegin(GL_POLYGON);
        glVertex2d(1.5,60);
        glVertex2d(60,60);
        glVertex2d(60,2);
        glVertex2d(1.5,2);
    glEnd();

    glColor3ub(22, 49, 22);
    circle(2,3,8,60);
    circle(2,3,11,60);
    circle(1,2,13,60);


    circle(1,2,28,60);
    circle(2,3,30.5,60);
    circle(2,3,33.5,60);

    circle(1,2,51,60);
    circle(2,3,53.5,60);
    circle(2,3,56.5,60);


    /*footpath in the village #vertical 1
    glColor3ub(104, 92, 62);
    glBegin(GL_QUADS);
    glVertex2d(19,60);
    glVertex2d(22,60);
    glColor3ub(40, 40, 39);
    glVertex2d(18,7);
    glVertex2d(15,7);

     glColor3ub(33, 32, 30);
    glVertex2d(22,60);
    glVertex2d(22.5,60);
    glVertex2d(18.5,7);
    glVertex2d(18,7);
    glEnd();*/




    //footpath in the village #1
    glColor3ub(104, 92, 62);
    glBegin(GL_QUADS);
    glVertex2d(1.5,46);
    glVertex2d(1.5,42);
    glColor3ub(40, 40, 39);
    glVertex2d(60.5,42);
    glVertex2d(60.5,46);

    glVertex2d(60.5,42);
    glVertex2d(60.5,41.6);
    glVertex2d(60,41.6);
    glVertex2d(60,42);

    glColor3ub(33, 32, 30);
    glVertex2d(1.5,42);
    glVertex2d(1.5,41);
    glVertex2d(60,41);
    glVertex2d(60,42);
    glEnd();

    //footpath in the village #2
    glColor3ub(104, 92, 62);
    glBegin(GL_QUADS);
    glVertex2d(1.5,26);
    glVertex2d(1.5,22);
    glColor3ub(40, 40, 39);
    glVertex2d(60.5,22);
    glVertex2d(60.5,26);

    glVertex2d(60.5,22);
    glVertex2d(60.5,21.6);
    glVertex2d(60,21.6);
    glVertex2d(60,22);

    glColor3ub(33, 32, 30);
    glVertex2d(1.5,22);
    glVertex2d(1.5,21);
    glVertex2d(60,21);
    glVertex2d(60,22);
    glEnd();

    //footpath in the village #3
    glColor3ub(104, 92, 62);
    glBegin(GL_QUADS);
    glVertex2d(1.5,7);
    glVertex2d(1.5,4);
    glColor3ub(40, 40, 39);
    glVertex2d(60.5,4);
    glVertex2d(60.5,7);

    glVertex2d(60.5,4);
    glVertex2d(60.5,3.6);
    glVertex2d(60,3.6);
    glVertex2d(60,4);
    glColor3ub(33, 32, 30);
    glBegin(GL_QUADS);
    glVertex2d(1.5,4);
    glVertex2d(1.5,3);
    glVertex2d(60,3);
    glVertex2d(60,4);
    glEnd();


    house1(7,55);
    house2(27,55);
    house1(50,55);
    house1(4,35);
    house2(23,35);
    house1(47,35);
    house1(1.5,15);
    house2(21,15);
    house1(44,15);

    //2
    glColor3ub(68, 83, 2);
    circle(1,1,6,55);
    tree3(5,75);


    //trees 1
    glColor3ub(68, 83, 2);
    circle(1.5,1.5,4,49);
    tree1(2,63);


    //3
    glColor3ub(68, 83, 2);
    circle(1,1,16,55);
    tree3(15,75);

    //4
    glColor3ub(68, 83, 2);
    circle(1.5,1.5,18.5,49);
    tree2(16,67);
    //5
    glColor3ub(68, 83, 2);
    circle(1.5,1.5,24,49);
    tree1(22,63);
    //6
    glColor3ub(68, 83, 2);
    circle(1,1,27,57);
    tree3(26,77);

    //7
    glColor3ub(68, 83, 2);
    circle(1.5,1.5,37.5,49);
    tree2(35,67);
    //8
    glColor3ub(68, 83, 2);
    circle(1,1,41,55);
    tree3(40,75);
    //9
    glColor3ub(68, 83, 2);
    circle(1,1,45,55);
    tree3(44,75);

    //10
    glColor3ub(68, 83, 2);
    circle(1.5,1.5,48.5,49);
    tree2(46,67);
    //11
    glColor3ub(68, 83, 2);
    circle(1,1,59,50);
    tree3(58,70);


    //12 other side of rail
    glColor3ub(68, 83, 2);
    circle(1,1,72,54);
    tree4(71,71);


    //second row 12
    glColor3ub(68, 83, 2);
    circle(1,1,2.5,35);
    tree3(1.5,55);

    //13
    glColor3ub(68, 83, 2);
    circle(1,1,7,40.5);
    tree4(6,57);
    //14
    glColor3ub(68, 83, 2);
    circle(1,1,12,37.5);
    tree4(11,54);
    //15
    glColor3ub(68, 83, 2);
    circle(1,1,17,32);
    tree3(16,52);
    //16
    glColor3ub(68, 83, 2);
    circle(1,1,20.5,38);
    tree3(19.5,58);


    //16
    glColor3ub(68, 83, 2);
    circle(1.5,1.5,14.5,27.5);
    tree2(12,45);
    //17
    glColor3ub(68, 83, 2);
    circle(1.5,1.5,22.5,27.5);
    tree2(20,45);
    //18
    glColor3ub(68, 83, 2);
    circle(1,1,31,37);
    tree4(30,54);

    //##
    glColor3ub(68, 83, 2);
   // circle(1,1,31,37);
    tree4(35,54);
    //##
    glColor3ub(68, 83, 2);
   // circle(1,1,31,37);
    tree4(42,54);

    //19
    glColor3ub(68, 83, 2);
    circle(1,1,47,38);
    tree3(46,58);
    //20
    glColor3ub(68, 83, 2);
    circle(1,1,56,33);
    tree3(55,53);
    //21
    glColor3ub(68, 83, 2);
    circle(1.5,1.5,58,27.5);
    tree2(55.5,45);
    //third row

    //22
    glColor3ub(68, 83, 2);
    circle(1,1,3.8,20.5);
    tree4(2.8,37);
    //23
    glColor3ub(68, 83, 2);
    circle(1,1,10,13.5);
    tree4(9,30);
    //24
    glColor3ub(68, 83, 2);
    circle(1.5,1.5,13,9);
    tree1(11,23);
    //25
    glColor3ub(68, 83, 2);
    circle(1,1,16,15);
    tree3(15,35);
    //26
    glColor3ub(68, 83, 2);
    circle(1.5,1.5,19.5,8.5);
    tree2(17,26);

    //27
    glColor3ub(68, 83, 2);
    circle(1.5,1.5,30,9);
    tree1(28,23);
    //28
    glColor3ub(68, 83, 2);
    circle(1,1,34,9);
    tree3(33,29);
    //28
    glColor3ub(68, 83, 2);
    circle(1,1,44,19);
    tree3(43,39);
    //29
    glColor3ub(68, 83, 2);
    circle(1.5,1.5,53.5,8.5);
    tree2(51,26);


    //30
    glColor3ub(68, 83, 2);
    circle(1,1,59,10);
    tree3(58,30);
    //






    //big tree
    //root
    glColor3ub(68, 83, 2);
    circle(3.5,3,40,12);

    //body
    glColor3ub(68, 43, 2);
    glBegin(GL_QUADS);
        glVertex2d(39,36);
        glVertex2d(41,36);
        glVertex2d(42,11);
        glVertex2d(38,11);
    glEnd();
    //leaves
    glColor3ub(11, 70, 11);
    circle(3,4,35,37);
    circle(3,4,38,39);
    circle(3,4,40,37);
    circle(3,4,43,39);
    circle(3,4,44,35);
    circle(3,4,44,31);
    circle(3,4,40,33);
    circle(3,4,37,32);
    circle(3,4,35,34);

    //fruits
    glColor3ub(234, 7, 7);
    circle(.5,1,33,37);
    circle(.5,1,35,39);
    circle(.5,1,38,41);
    circle(.5,1,41,39);
    circle(.5,1,43,41);
    circle(.5,1,45,39);
    circle(.5,1,46,35);
    circle(.5,1,45,31);
    circle(.5,1,43,35);
    circle(.5,1,40,35);
    circle(.5,1,37,36);
    circle(.5,1,34,33);
    circle(.5,1,36,32);







}
void border()
{   glColor3f(1,1,1);
    glRectf(.8,1,99.5,1.5);
    glRectf(0.8,1,1,99.5);
    glRectf(0.8,99.5,99.5,99);
    glRectf(99.1,99.5,99.5,1);
    glFlush();

}




void display()
{

    //glClearColor(0.0,0.0,0.0,0);
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
    delay();
    border();
    road();
    sky();
    river();
    homes();
    glFlush();

}


void init()
{
    glClearColor(0, 0, 0, 10);
    glOrtho(0, 100.0, 0, 100.0 , 0, 100.0);
}

int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (1300, 650);
	glutInitWindowPosition (0, 0);
	glutCreateWindow ("Dream_Village");
	init();
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}

