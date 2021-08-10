#include <GL/glut.h>
#include<windows.h>
#include <stdlib.h>
#include <math.h>
/*GLfloat	txx	=  0.0;
GLfloat	ty	=  0.0;
static float	clodMove	=  0.0;
static float	boatMove	=  0.0;
static float	birdMove	=  0.0;
static float	cycleMove=  0.0;*/




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

void river()
{
    glColor3ub(36, 51, 94);
    glBegin(GL_QUADS);
        glVertex2d(70, 2);
        glVertex2d(85, 70);
        glVertex2d(98.5, 70);
        glVertex2d(98.5, 2);

    glEnd();
    glFlush();

}

void road()
{
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
        glVertex2d(70, 2);
        glVertex2d(85, 70);
        glVertex2d(75, 70);
        glVertex2d(60, 2);

    glEnd();
    //left side footpath
    /*glColor3f(0,0.5,0);
    circle(4,8,60,10);
    circle(4,8,63,23);
    circle(4,8,66,36);
    circle(4,8,69,49);
    circle(4,8,72,62);*/

    //right side footpath
    glColor3ub(90, 51, 90);
    circle(4,8,74,9);
    circle(4,8,77,21);
    circle(4,8,80,34);
    circle(4,8,83,47);
    circle(4,8,86,60);

    //lest border
    glBegin(GL_QUADS);
        glColor3ub(119,136,149);
        glVertex2f(62,2);
        glVertex2f(77,66);
        glVertex2f(75,70);
        glVertex2f(60,2);

    glEnd();


    glFlush();


}


void sky()
{
   // glColor3ub(6, 0, 43);
   // glColor3ub(135, 206, 255);
    glColor3ub(14, 138, 239);
    glBegin(GL_POLYGON);
        glVertex2d(1.5,65);
        glVertex2d(1.5, 98);
        glVertex2d(98.5, 98);
        glVertex2d(98.5, 70.5);
        glVertex2d(75, 70);
        glVertex2d(74, 65);
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



    glFlush();

}

void homes()
{
    glColor3f(0,1,0);
    glColor3ub(190, 190, 190);
    glBegin(GL_POLYGON);
        glVertex2d(1.5,65);
        glVertex2d(74,65);
        glVertex2d(60,2);
        glVertex2d(1.5,2);
    glEnd();


    glFlush();
}
void border()
{   glColor3f(1,1,1);
    glRectf(.8,1,99.5,1.5);
    glRectf(0.8,1,1,99.5);
    glRectf(0.8,99.5,99.5,99);
    glRectf(99.1,99.5,99.5,1);
    glFlush();

}

/*void house(int x, int y)
{
    //side roof
    glColor3f(0,0,0);
    glBegin(GL_TRIANGLES);
        glVertex2d(2,60);
        glVertex2d(4,64);
        glVertex2d(6,58);

    glEnd();


    glColor3f(1,0.7,.11);
    glBegin(GL_QUADS);
        //wall right
        glColor3f(.19,0.3,.30);
        glVertex2f(5.5, 53);
        glVertex2f(9.3, 55.5);
        glVertex2f(9.3, 59);
        glVertex2f(5.5, 58.5);
        //door
        glColor3f(.9,0.9,0.90);
        glVertex2f(7.5,54.5);
        glVertex2f(8.25,55);
        glVertex2f(8.25,57.5);
        glVertex2f(7.5,57.5);

        //right roof
        glColor3f(1,0.7,.11);
        glVertex2d(4,64);
        glVertex2d(8,65);
        glVertex2d(10,59);
        glVertex2d(6,58);

        //wall left
        glColor3f(.91,0.3,.31);
        glVertex2f(2.3, 55);
        glVertex2f(5.5, 53);
        glVertex2f(5.5, 58.5);
        glVertex2f(2.5, 60);

        //window left
        glColor3f(1,1,1);
        glVertex2f(3.5,56.5);
        glVertex2f(4.2,56);
        glVertex2f(4.2,58.3);
        glVertex2f(3.5,58.7);
    glEnd();

    glFlush();
}
*/
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

void display()
{
    glClearColor(0.0,0.0,0.0,0);
    border();
    road();
    river();
    sky();
    homes();
    house1(10,60);
    house2(35,60);
    house1(60,60);
    house2(5,40);
    house1(30,40);
    house2(54,40);
    house1(2,18);
    house2(25,18);
    house1(45,18);

    bird1(90,95);
    bird2(5,75);

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

