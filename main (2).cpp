#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

const double PI = 3.141592654;
int frameNumber = 0;

float angle=-40.0f;
float angle1=40.0f;
float angle2=0.0f;
void cloud()
{
    glPushMatrix();
        glTranslatef(angle2,0.0,0);

    //glColor3f(3.0, 1.0, 0.6);
    glPushMatrix();
  glScalef(40,40,0);
     glPushMatrix();
    glColor3f(3.0, 1.5, 1.0);
        glTranslated(0.3,0.65,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
        glPushMatrix();
    glColor3f(3.0, 1.5, 1.0);
        glTranslated(0.37,0.66,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
           glPushMatrix();
    glColor3f(3.0, 1.5, 1.0);
        glTranslated(0.38,0.69,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
    glPushMatrix();
    glColor3f(3.0, 1.5, 1.0);
        glTranslated(0.3,0.73,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
    glPushMatrix();
    glColor3f(3.0, 1.5, 1.0);
        glTranslated(0.25,0.70,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
    glPushMatrix();
    glColor3f(3.0, 1.5, 1.0);
        glTranslated(0.20,0.68,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
     glPushMatrix();
    glColor3f(3.0, 1.5, 1.0);
        glTranslated(0.20,0.70,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
    glPushMatrix();
    glColor3f(3.0, 1.5, 1.0);
        glTranslated(0.20,0.66,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
    glPushMatrix();
    glColor3f(3.0, 1.5, 1.0);
        glTranslated(0.18,0.68,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
        glPushMatrix();
    glColor3f(3.0, 1.5, 1.0);
        glTranslated(0.14,0.70,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
         glPushMatrix();
    glColor3f(3.0, 1.5, 1.0);
        glTranslated(0.10,0.73,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
     glPushMatrix();
    glColor3f(3.0, 1.5, 1.0);
        glTranslated(0.15,0.73,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
         glPushMatrix();
    glColor3f(3.0, 1.5, 1.0);
        glTranslated(0.10,0.65,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
       glPushMatrix();
    glColor3f(3.0, 1.5, 1.0);
        glTranslated(0.05,0.70,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
       glPushMatrix();
    glColor3f(3.0, 1.5, 1.0);
        glTranslated(0.02,0.67,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
     glPushMatrix();
    glColor3f(3.0, 1.5, 1.0);
        glTranslated(0.01,0.64,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
        glPushMatrix();
    glColor3f(3.0, 1.5, 1.0);
        glTranslated(-0.04,0.70,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
    glPushMatrix();
       glColor3f(3.0, 1.5, 1.0);
        glTranslated(-0.07,0.65,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
     glPushMatrix();
       glColor3f(3.0, 1.5, 1.0);
        glTranslated(-0.07,0.69,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
      glPushMatrix();
       glColor3f(3.0, 1.5, 1.0);
        glTranslated(-0.11,0.74,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
        glPushMatrix();
       glColor3f(3.0, 1.5, 1.0);
        glTranslated(-0.12,0.74,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
     glPushMatrix();
       glColor3f(3.0, 1.5, 1.0);
        glTranslated(-0.16,0.70,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
        glPushMatrix();
       glColor3f(3.0, 1.5, 1.0);
        glTranslated(0.05,0.75,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
    glPushMatrix();
       glColor3f(3.0, 1.5, 1.0);
        glTranslated(0.09,0.78,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();


        //
        glPushMatrix();

    glPushMatrix();
       glColor3f(3.0, 1.5, 1.0);
        glTranslated(-0.5,0.88,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
    glPushMatrix();
       glColor3f(3.0, 1.5, 1.0);
        glTranslated(-0.45,0.86,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
    glPushMatrix();
       glColor3f(3.0, 1.5, 1.0);
        glTranslated(-0.52,0.83,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
        glPushMatrix();
       glColor3f(3.0, 1.5, 1.0);
        glTranslated(-0.59,0.87,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
     glPushMatrix();
       glColor3f(3.0, 1.5, 1.0);
        glTranslated(-0.61,0.83,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
    glPushMatrix();
       glColor3f(3.0, 1.5, 1.0);
        glTranslated(-0.64,0.85,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
    glPushMatrix();
       glColor3f(3.0, 1.5, 1.0);
        glTranslated(-0.67,0.88,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
     glPushMatrix();
       glColor3f(3.0, 1.5, 1.0);
        glTranslated(-0.64,0.82,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
           glPushMatrix();
       glColor3f(3.0, 1.5, 1.0);
        glTranslated(-0.65,0.92,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
           glPushMatrix();
       glColor3f(3.0, 1.5, 1.0);
        glTranslated(-0.70,0.80,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
        glPushMatrix();
       glColor3f(3.0, 1.5, 1.0);
        glTranslated(-0.70,0.84,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
              glPushMatrix();
       glColor3f(3.0, 1.5, 1.0);
        glTranslated(-0.68,0.89,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
         glPushMatrix();
       glColor3f(3.0, 1.5, 1.0);
        glTranslated(-0.72,0.90,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
        glPushMatrix();
       glColor3f(3.0, 1.5, 1.0);
        glTranslated(-0.74,0.88,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
        glPushMatrix();
       glColor3f(3.0, 1.5, 1.0);
        glTranslated(-0.75,0.83,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
        glPushMatrix();
       glColor3f(3.0, 1.5, 1.0);
        glTranslated(-0.56,0.94,0.0);
        glutSolidSphere (0.05, 30, 30);
        glPopMatrix();
          glPopMatrix();

            glPopMatrix();
               glPopMatrix();



}
void sun()
{
    //dipty
    //glColor3f(1.0, 1.0, 0.6);
   glPushMatrix();
    glColor3f(1.0, 1.0, 0.6); //set ball colour
        glTranslated(0.1,31,0.0); //moving it toward the screen a bit on creation
        glutSolidSphere (2, 30, 30); //create ball.
        glPopMatrix();
}

void sky()
{
    glColor3f (0.0, 0.8, 1.0);
	//glColor3f (0.3,1.44,2.55);
	glBegin(GL_POLYGON);

      glVertex3f(0.0f,0.6f,0.0f);
       glColor3f(1.0, 1.0, 0.6);
      //glColor3f (1.0f,1.0f, 1.0f);
        glColor3f(1.0, 1.0, 0.6);
      glVertex3f(0.0f,1.0f,0.0f);
        glColor3f(1.0, 1.0, 0.6);
      glVertex3f(1.0f,1.0f,0.0f);
          glColor3f(1.0, 1.0, 0.6);
      glVertex3f(1.0f,0.6f,0.0f);
        glColor3f (1.0f,1.0f, 1.0f);
        glColor3f(1.0, 1.0, 0.6);
      glVertex3f(0.0f,0.6f,0.0f);

        glColor3f(1.0, 1.0, 0.6);
      glVertex3f(0.0f,1.0f,0.0f);
      glColor3f(1.0, 1.0, 0.6);
     // glColor3f (1.0f,1.0f, 1.0f);
      glVertex3f(-1.0f,1.0f,0.0f);
       glColor3f(1.0, 1.0, 0.6);

      glColor3f(0.4, 0.8, 1.0);

          glColor3f(1.0, 1.0, 0.6);
      glColor3f (1.0f,1.0f, 1.0f);
        glColor3f(1.0, 1.0, 0.6);
      glVertex3f(-1.0f,0.6f,0.0f);
        glColor3f(1.0, 1.0, 0.6);
      glColor3f (1.0f,1.0f, 1.0f);
        glColor3f(1.0, 1.0, 0.6);
    glEnd();

}


void road()
{

    ///////////road////////
glPushMatrix();


  glColor3f (0.412, 0.412, 0.412);

   glBegin (GL_POLYGON);
   glVertex2f(40.0,-3.0);
   glVertex2f(40.0,-22.0);
   glVertex2f(-40.0,-22.0);
   glVertex2f(-40.0,-3.0);
   glEnd();



   glColor3f (0.804, 0.522, 0.247);

   glBegin (GL_POLYGON);
   glVertex2f(40.0,-2.0);
   glVertex2f(40.0,-3.0);
   glVertex2f(-40.0,-3.0);
   glVertex2f(-40.0,-2.0);
   glEnd();

   glColor3f (0.804, 0.522, 0.247);

   glBegin (GL_POLYGON);
   glVertex2f(40.0,-22.0);
   glVertex2f(40.0,-23.0);
   glVertex2f(-40.0,-23.0);
   glVertex2f(-40.0,-22.0);
   glEnd();



/////////Strip 1///////////
   glColor3f (1.0, 1.0, 1.0);

   glBegin (GL_POLYGON);
   glVertex2f(38.0,-11.0);
   glVertex2f(38.0,-13.5);
   glVertex2f(33.0,-13.5);
   glVertex2f(33.0,-11.0);
   glEnd();

   /////////Strip 2///////////

   glColor3f (1.0, 1.0, 1.0);

   glBegin (GL_POLYGON);
   glVertex2f(28.0,-11.0);
   glVertex2f(28.0,-13.5);
   glVertex2f(23.0,-13.5);
   glVertex2f(23.0,-11.0);
   glEnd();

   /////////Strip 3///////////

    glColor3f (1.0, 1.0, 1.0);

   glBegin (GL_POLYGON);
   glVertex2f(18.0,-11.0);
   glVertex2f(18.0,-13.5);
   glVertex2f(13.0,-13.5);
   glVertex2f(13.0,-11.0);
   glEnd();
   /////////Strip 4///////////

   glColor3f (1.0, 1.0, 1.0);

   glBegin (GL_POLYGON);
   glVertex2f(8.0,-11.0);
   glVertex2f(8.0,-13.5);
   glVertex2f(3.0,-13.5);
   glVertex2f(3.0,-11.0);
   glEnd();

   /////////Strip 5///////////

   glColor3f (1.0, 1.0, 1.0);

   glBegin (GL_POLYGON);
   glVertex2f(-2.0,-11.0);
   glVertex2f(-2.0,-13.5);
   glVertex2f(-7.0,-13.5);
   glVertex2f(-7.0,-11.0);
   glEnd();

   /////////Strip 6///////////

   glColor3f (1.0, 1.0, 1.0);

   glBegin (GL_POLYGON);
   glVertex2f(-12.0,-11.0);
   glVertex2f(-12.0,-13.5);
   glVertex2f(-17.0,-13.5);
   glVertex2f(-17.0,-11.0);
   glEnd();

   /////////Strip 7///////////

   glColor3f (1.0, 1.0, 1.0);

   glBegin (GL_POLYGON);
   glVertex2f(-22.0,-11.0);
   glVertex2f(-22.0,-13.5);
   glVertex2f(-27.0,-13.5);
   glVertex2f(-27.0,-11.0);
   glEnd();

   /////////Strip 8///////////

   glColor3f (1.0, 1.0, 1.0);

   glBegin (GL_POLYGON);
   glVertex2f(-32.0,-11.0);
   glVertex2f(-32.0,-13.5);
   glVertex2f(-37.0,-13.5);
   glVertex2f(-37.0,-11.0);
   glEnd();

glPopMatrix();

}

void building1()
{

    glColor3f (0.412, 0.412, 0.412);

   glBegin (GL_POLYGON);
   glVertex2f(32.0,0.0);
   glVertex2f(32.0,35.0);
   glVertex2f(20.0,35.0);
   glVertex2f(20.0,0.0);
   glEnd();

}
void window_building1()
{
    glPushMatrix();
    glTranslatef(9.7,0.0,0.0);
    glScalef(1.0, 1.3, 0.0);

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(19.5,1.0);
   glVertex2f(19.5,3.0);
   glVertex2f(16.5,3.0);
   glVertex2f(16.5,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(16.0,1.0);
   glVertex2f(16.0,3.0);
   glVertex2f(13.0,3.0);
   glVertex2f(13.0,1.0);
   glEnd();
   glPopMatrix();


    glPushMatrix();
    glTranslatef(9.7, 4.0 ,0.0);
    glScalef(1.0, 1.3, 0.0);

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(19.5,1.0);
   glVertex2f(19.5,3.0);
   glVertex2f(16.5,3.0);
   glVertex2f(16.5,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(16.0,1.0);
   glVertex2f(16.0,3.0);
   glVertex2f(13.0,3.0);
   glVertex2f(13.0,1.0);
   glEnd();
   glPopMatrix();


    glPushMatrix();
    glTranslatef(9.7,8.0,0.0);
    glScalef(1.0, 1.3, 0.0);

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(19.5,1.0);
   glVertex2f(19.5,3.0);
   glVertex2f(16.5,3.0);
   glVertex2f(16.5,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(16.0,1.0);
   glVertex2f(16.0,3.0);
   glVertex2f(13.0,3.0);
   glVertex2f(13.0,1.0);
   glEnd();
   glPopMatrix();


    glPushMatrix();
    glTranslatef(9.7,12.0,0.0);
    glScalef(1.0, 1.3, 0.0);

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(19.5,1.0);
   glVertex2f(19.5,3.0);
   glVertex2f(16.5,3.0);
   glVertex2f(16.5,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(16.0,1.0);
   glVertex2f(16.0,3.0);
   glVertex2f(13.0,3.0);
   glVertex2f(13.0,1.0);
   glEnd();
   glPopMatrix();


    glPushMatrix();
    glTranslatef(9.7,16.0,0.0);
    glScalef(1.0, 1.3, 0.0);

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(19.5,1.0);
   glVertex2f(19.5,3.0);
   glVertex2f(16.5,3.0);
   glVertex2f(16.5,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(16.0,1.0);
   glVertex2f(16.0,3.0);
   glVertex2f(13.0,3.0);
   glVertex2f(13.0,1.0);
   glEnd();
   glPopMatrix();


    glPushMatrix();
    glTranslatef(9.7,20.0,0.0);
    glScalef(1.0, 1.3, 0.0);

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(19.5,1.0);
   glVertex2f(19.5,3.0);
   glVertex2f(16.5,3.0);
   glVertex2f(16.5,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(16.0,1.0);
   glVertex2f(16.0,3.0);
   glVertex2f(13.0,3.0);
   glVertex2f(13.0,1.0);
   glEnd();
   glPopMatrix();

    glPushMatrix();
    glTranslatef(9.7,24.0,0.0);
    glScalef(1.0, 1.3, 0.0);

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(19.5,1.0);
   glVertex2f(19.5,3.0);
   glVertex2f(16.5,3.0);
   glVertex2f(16.5,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(16.0,1.0);
   glVertex2f(16.0,3.0);
   glVertex2f(13.0,3.0);
   glVertex2f(13.0,1.0);
   glEnd();
   glPopMatrix();

    glPushMatrix();
    glTranslatef(9.7,28.0,0.0);
    glScalef(1.0, 1.3, 0.0);

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(19.5,1.0);
   glVertex2f(19.5,3.0);
   glVertex2f(16.5,3.0);
   glVertex2f(16.5,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(16.0,1.0);
   glVertex2f(16.0,3.0);
   glVertex2f(13.0,3.0);
   glVertex2f(13.0,1.0);
   glEnd();
   glPopMatrix();

}


void building2()
{
    ////2////

    glColor3f (1.000, 0.627, 0.478);

   glBegin (GL_POLYGON);
   glVertex2f(39.0,0.0);
   glVertex2f(39.0,30.0);
   glVertex2f(30.0,30.0);
   glVertex2f(30.0,0.0);
   glEnd();

}

void window_building2()
{

/////window 2////////////
glPushMatrix();
    glPushMatrix();
   glColor3f (1.0, 1.0, 1.0);


   glBegin (GL_POLYGON);
   glVertex2f(38.0,1.0);
   glVertex2f(38.0,3.0);
   glVertex2f(37.0,3.0);
   glVertex2f(37.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(36.0,1.0);
   glVertex2f(36.0,3.0);
   glVertex2f(35.0,3.0);
   glVertex2f(35.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(34.0,1.0);
   glVertex2f(34.0,3.0);
   glVertex2f(33.0,3.0);
   glVertex2f(33.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(32.0,1.0);
   glVertex2f(32.0,3.0);
   glVertex2f(31.0,3.0);
   glVertex2f(31.0,1.0);
   glEnd();
   glPopMatrix();

glPushMatrix();
   glTranslatef(0.0, 4.0,0.0);
   glColor3f (1.0, 1.0, 1.0);


   glBegin (GL_POLYGON);
   glVertex2f(38.0,1.0);
   glVertex2f(38.0,3.0);
   glVertex2f(37.0,3.0);
   glVertex2f(37.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(36.0,1.0);
   glVertex2f(36.0,3.0);
   glVertex2f(35.0,3.0);
   glVertex2f(35.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(34.0,1.0);
   glVertex2f(34.0,3.0);
   glVertex2f(33.0,3.0);
   glVertex2f(33.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(32.0,1.0);
   glVertex2f(32.0,3.0);
   glVertex2f(31.0,3.0);
   glVertex2f(31.0,1.0);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(0.0, 8.0,0.0);
   glColor3f (1.0, 1.0, 1.0);


   glBegin (GL_POLYGON);
   glVertex2f(38.0,1.0);
   glVertex2f(38.0,3.0);
   glVertex2f(37.0,3.0);
   glVertex2f(37.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(36.0,1.0);
   glVertex2f(36.0,3.0);
   glVertex2f(35.0,3.0);
   glVertex2f(35.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(34.0,1.0);
   glVertex2f(34.0,3.0);
   glVertex2f(33.0,3.0);
   glVertex2f(33.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(32.0,1.0);
   glVertex2f(32.0,3.0);
   glVertex2f(31.0,3.0);
   glVertex2f(31.0,1.0);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(0.0, 12.0,0.0);
   glColor3f (1.0, 1.0, 1.0);


   glBegin (GL_POLYGON);
   glVertex2f(38.0,1.0);
   glVertex2f(38.0,3.0);
   glVertex2f(37.0,3.0);
   glVertex2f(37.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(36.0,1.0);
   glVertex2f(36.0,3.0);
   glVertex2f(35.0,3.0);
   glVertex2f(35.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(34.0,1.0);
   glVertex2f(34.0,3.0);
   glVertex2f(33.0,3.0);
   glVertex2f(33.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(32.0,1.0);
   glVertex2f(32.0,3.0);
   glVertex2f(31.0,3.0);
   glVertex2f(31.0,1.0);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(0.0, 16.0,0.0);
   glColor3f (1.0, 1.0, 1.0);


   glBegin (GL_POLYGON);
   glVertex2f(38.0,1.0);
   glVertex2f(38.0,3.0);
   glVertex2f(37.0,3.0);
   glVertex2f(37.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(36.0,1.0);
   glVertex2f(36.0,3.0);
   glVertex2f(35.0,3.0);
   glVertex2f(35.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(34.0,1.0);
   glVertex2f(34.0,3.0);
   glVertex2f(33.0,3.0);
   glVertex2f(33.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(32.0,1.0);
   glVertex2f(32.0,3.0);
   glVertex2f(31.0,3.0);
   glVertex2f(31.0,1.0);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(0.0, 20.0,0.0);
   glColor3f (1.0, 1.0, 1.0);


   glBegin (GL_POLYGON);
   glVertex2f(38.0,1.0);
   glVertex2f(38.0,3.0);
   glVertex2f(37.0,3.0);
   glVertex2f(37.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(36.0,1.0);
   glVertex2f(36.0,3.0);
   glVertex2f(35.0,3.0);
   glVertex2f(35.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(34.0,1.0);
   glVertex2f(34.0,3.0);
   glVertex2f(33.0,3.0);
   glVertex2f(33.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(32.0,1.0);
   glVertex2f(32.0,3.0);
   glVertex2f(31.0,3.0);
   glVertex2f(31.0,1.0);
   glEnd();
   glPopMatrix();


   glPushMatrix();
   glTranslatef(0.0, 24.0,0.0);
   glColor3f (1.0, 1.0, 1.0);


   glBegin (GL_POLYGON);
   glVertex2f(38.0,1.0);
   glVertex2f(38.0,3.0);
   glVertex2f(37.0,3.0);
   glVertex2f(37.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(36.0,1.0);
   glVertex2f(36.0,3.0);
   glVertex2f(35.0,3.0);
   glVertex2f(35.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(34.0,1.0);
   glVertex2f(34.0,3.0);
   glVertex2f(33.0,3.0);
   glVertex2f(33.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(32.0,1.0);
   glVertex2f(32.0,3.0);
   glVertex2f(31.0,3.0);
   glVertex2f(31.0,1.0);
   glEnd();
   glPopMatrix();

   glPopMatrix();
}


void building3()
{

////3////
   glColor3f (0.545, 0.000, 0.000);

   glBegin (GL_POLYGON);
   glVertex2f(12.0,0.0);
   glVertex2f(12.0,32.0);
   glVertex2f(2.0,32.0);
   glVertex2f(2.0,0.0);
   glEnd();
}

void window_building3()
{
   /////window 2////////////


    glPushMatrix();
    glTranslatef(-28.0, 0.0, 0.0);



    glPushMatrix();

   glColor3f (1.0, 1.0, 1.0);


   glBegin (GL_POLYGON);
   glVertex2f(38.0,1.0);
   glVertex2f(38.0,3.0);
   glVertex2f(37.0,3.0);
   glVertex2f(37.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(36.0,1.0);
   glVertex2f(36.0,3.0);
   glVertex2f(35.0,3.0);
   glVertex2f(35.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(34.0,1.0);
   glVertex2f(34.0,3.0);
   glVertex2f(33.0,3.0);
   glVertex2f(33.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(32.0,1.0);
   glVertex2f(32.0,3.0);
   glVertex2f(31.0,3.0);
   glVertex2f(31.0,1.0);
   glEnd();
   glPopMatrix();

glPushMatrix();
   glTranslatef(0.0, 4.0,0.0);
   glColor3f (1.0, 1.0, 1.0);


   glBegin (GL_POLYGON);
   glVertex2f(38.0,1.0);
   glVertex2f(38.0,3.0);
   glVertex2f(37.0,3.0);
   glVertex2f(37.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(36.0,1.0);
   glVertex2f(36.0,3.0);
   glVertex2f(35.0,3.0);
   glVertex2f(35.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(34.0,1.0);
   glVertex2f(34.0,3.0);
   glVertex2f(33.0,3.0);
   glVertex2f(33.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(32.0,1.0);
   glVertex2f(32.0,3.0);
   glVertex2f(31.0,3.0);
   glVertex2f(31.0,1.0);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(0.0, 8.0,0.0);
   glColor3f (1.0, 1.0, 1.0);


   glBegin (GL_POLYGON);
   glVertex2f(38.0,1.0);
   glVertex2f(38.0,3.0);
   glVertex2f(37.0,3.0);
   glVertex2f(37.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(36.0,1.0);
   glVertex2f(36.0,3.0);
   glVertex2f(35.0,3.0);
   glVertex2f(35.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(34.0,1.0);
   glVertex2f(34.0,3.0);
   glVertex2f(33.0,3.0);
   glVertex2f(33.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(32.0,1.0);
   glVertex2f(32.0,3.0);
   glVertex2f(31.0,3.0);
   glVertex2f(31.0,1.0);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(0.0, 12.0,0.0);
   glColor3f (1.0, 1.0, 1.0);


   glBegin (GL_POLYGON);
   glVertex2f(38.0,1.0);
   glVertex2f(38.0,3.0);
   glVertex2f(37.0,3.0);
   glVertex2f(37.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(36.0,1.0);
   glVertex2f(36.0,3.0);
   glVertex2f(35.0,3.0);
   glVertex2f(35.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(34.0,1.0);
   glVertex2f(34.0,3.0);
   glVertex2f(33.0,3.0);
   glVertex2f(33.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(32.0,1.0);
   glVertex2f(32.0,3.0);
   glVertex2f(31.0,3.0);
   glVertex2f(31.0,1.0);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(0.0, 16.0,0.0);
   glColor3f (1.0, 1.0, 1.0);


   glBegin (GL_POLYGON);
   glVertex2f(38.0,1.0);
   glVertex2f(38.0,3.0);
   glVertex2f(37.0,3.0);
   glVertex2f(37.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(36.0,1.0);
   glVertex2f(36.0,3.0);
   glVertex2f(35.0,3.0);
   glVertex2f(35.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(34.0,1.0);
   glVertex2f(34.0,3.0);
   glVertex2f(33.0,3.0);
   glVertex2f(33.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(32.0,1.0);
   glVertex2f(32.0,3.0);
   glVertex2f(31.0,3.0);
   glVertex2f(31.0,1.0);
   glEnd();
   glPopMatrix();

   glPushMatrix();
   glTranslatef(0.0, 20.0,0.0);
   glColor3f (1.0, 1.0, 1.0);


   glBegin (GL_POLYGON);
   glVertex2f(38.0,1.0);
   glVertex2f(38.0,3.0);
   glVertex2f(37.0,3.0);
   glVertex2f(37.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(36.0,1.0);
   glVertex2f(36.0,3.0);
   glVertex2f(35.0,3.0);
   glVertex2f(35.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(34.0,1.0);
   glVertex2f(34.0,3.0);
   glVertex2f(33.0,3.0);
   glVertex2f(33.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(32.0,1.0);
   glVertex2f(32.0,3.0);
   glVertex2f(31.0,3.0);
   glVertex2f(31.0,1.0);
   glEnd();
   glPopMatrix();


   glPushMatrix();
   glTranslatef(0.0, 24.0,0.0);
   glColor3f (1.0, 1.0, 1.0);


   glBegin (GL_POLYGON);
   glVertex2f(38.0,1.0);
   glVertex2f(38.0,3.0);
   glVertex2f(37.0,3.0);
   glVertex2f(37.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(36.0,1.0);
   glVertex2f(36.0,3.0);
   glVertex2f(35.0,3.0);
   glVertex2f(35.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(34.0,1.0);
   glVertex2f(34.0,3.0);
   glVertex2f(33.0,3.0);
   glVertex2f(33.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(32.0,1.0);
   glVertex2f(32.0,3.0);
   glVertex2f(31.0,3.0);
   glVertex2f(31.0,1.0);
   glEnd();
   glPopMatrix();

   glPopMatrix();

}


void building4()
{
////4////
   glColor3f (0.373, 0.620, 0.627);

   glBegin (GL_POLYGON);
   glVertex2f(22.0,0.0);
   glVertex2f(22.0,27.0);
   glVertex2f(10.0,27.0);
   glVertex2f(10.0,0.0);
   glEnd();

}

void window_building4()
{

//////building window 4////////
   glPushMatrix();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(21.3,1.0);
   glVertex2f(21.3,3.0);
   glVertex2f(20.0,3.0);
   glVertex2f(20.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(19.5,1.0);
   glVertex2f(19.5,3.0);
   glVertex2f(16.5,3.0);
   glVertex2f(16.5,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(16.0,1.0);
   glVertex2f(16.0,3.0);
   glVertex2f(13.0,3.0);
   glVertex2f(13.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(12.5,1.0);
   glVertex2f(12.5,3.0);
   glVertex2f(11.0,3.0);
   glVertex2f(11.0,1.0);
   glEnd();
   glPopMatrix();



   glPushMatrix();
    glTranslatef(0.0, 3.0, 0.0);

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(21.3,1.0);
   glVertex2f(21.3,3.0);
   glVertex2f(20.0,3.0);
   glVertex2f(20.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(19.5,1.0);
   glVertex2f(19.5,3.0);
   glVertex2f(16.5,3.0);
   glVertex2f(16.5,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(16.0,1.0);
   glVertex2f(16.0,3.0);
   glVertex2f(13.0,3.0);
   glVertex2f(13.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(12.5,1.0);
   glVertex2f(12.5,3.0);
   glVertex2f(11.0,3.0);
   glVertex2f(11.0,1.0);
   glEnd();
   glPopMatrix();


   glPushMatrix();
    glTranslatef(0.0, 6.0, 0.0);

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(21.3,1.0);
   glVertex2f(21.3,3.0);
   glVertex2f(20.0,3.0);
   glVertex2f(20.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(19.5,1.0);
   glVertex2f(19.5,3.0);
   glVertex2f(16.5,3.0);
   glVertex2f(16.5,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(16.0,1.0);
   glVertex2f(16.0,3.0);
   glVertex2f(13.0,3.0);
   glVertex2f(13.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(12.5,1.0);
   glVertex2f(12.5,3.0);
   glVertex2f(11.0,3.0);
   glVertex2f(11.0,1.0);
   glEnd();
   glPopMatrix();


   glPushMatrix();
    glTranslatef(0.0, 9.0, 0.0);

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(21.3,1.0);
   glVertex2f(21.3,3.0);
   glVertex2f(20.0,3.0);
   glVertex2f(20.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(19.5,1.0);
   glVertex2f(19.5,3.0);
   glVertex2f(16.5,3.0);
   glVertex2f(16.5,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(16.0,1.0);
   glVertex2f(16.0,3.0);
   glVertex2f(13.0,3.0);
   glVertex2f(13.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(12.5,1.0);
   glVertex2f(12.5,3.0);
   glVertex2f(11.0,3.0);
   glVertex2f(11.0,1.0);
   glEnd();
   glPopMatrix();


glPushMatrix();
    glTranslatef(0.0, 12.0, 0.0);

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(21.3,1.0);
   glVertex2f(21.3,3.0);
   glVertex2f(20.0,3.0);
   glVertex2f(20.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(19.5,1.0);
   glVertex2f(19.5,3.0);
   glVertex2f(16.5,3.0);
   glVertex2f(16.5,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(16.0,1.0);
   glVertex2f(16.0,3.0);
   glVertex2f(13.0,3.0);
   glVertex2f(13.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(12.5,1.0);
   glVertex2f(12.5,3.0);
   glVertex2f(11.0,3.0);
   glVertex2f(11.0,1.0);
   glEnd();
   glPopMatrix();


   glPushMatrix();
    glTranslatef(0.0, 15.0, 0.0);

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(21.3,1.0);
   glVertex2f(21.3,3.0);
   glVertex2f(20.0,3.0);
   glVertex2f(20.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(19.5,1.0);
   glVertex2f(19.5,3.0);
   glVertex2f(16.5,3.0);
   glVertex2f(16.5,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(16.0,1.0);
   glVertex2f(16.0,3.0);
   glVertex2f(13.0,3.0);
   glVertex2f(13.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(12.5,1.0);
   glVertex2f(12.5,3.0);
   glVertex2f(11.0,3.0);
   glVertex2f(11.0,1.0);
   glEnd();

   glPopMatrix();


   glPushMatrix();
    glTranslatef(0.0, 18.0, 0.0);

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(21.3,1.0);
   glVertex2f(21.3,3.0);
   glVertex2f(20.0,3.0);
   glVertex2f(20.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(19.5,1.0);
   glVertex2f(19.5,3.0);
   glVertex2f(16.5,3.0);
   glVertex2f(16.5,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(16.0,1.0);
   glVertex2f(16.0,3.0);
   glVertex2f(13.0,3.0);
   glVertex2f(13.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(12.5,1.0);
   glVertex2f(12.5,3.0);
   glVertex2f(11.0,3.0);
   glVertex2f(11.0,1.0);
   glEnd();

   glPopMatrix();

   glPushMatrix();
    glTranslatef(0.0, 21.0, 0.0);

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(21.3,1.0);
   glVertex2f(21.3,3.0);
   glVertex2f(20.0,3.0);
   glVertex2f(20.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(19.5,1.0);
   glVertex2f(19.5,3.0);
   glVertex2f(16.5,3.0);
   glVertex2f(16.5,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(16.0,1.0);
   glVertex2f(16.0,3.0);
   glVertex2f(13.0,3.0);
   glVertex2f(13.0,1.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);
   glBegin (GL_POLYGON);
   glVertex2f(12.5,1.0);
   glVertex2f(12.5,3.0);
   glVertex2f(11.0,3.0);
   glVertex2f(11.0,1.0);
   glEnd();

   glPopMatrix();



}


void supermarket()
{

    glColor3d (0.467, 0.533, 0.600);

   glBegin (GL_POLYGON);
   glVertex2f(-8.0,0.0);
   glVertex2f(-8.0,15.0);
   glVertex2f(-32.0,15.0);
   glVertex2f(-32.0,0.0);
   glEnd();

//////////////1/////////
glColor3f (1.0, 0.0, 0.0);

   glBegin (GL_POLYGON);
   glVertex2f(-5.0,15.0);
   glVertex2f(-5.0,20.0);
   glVertex2f(-35.0,20.0);
   glVertex2f(-35.0,15.0);
   glEnd();

///////////2//////////////
   glColor3f (0.412, 0.412, 0.412);

   glBegin (GL_POLYGON);
   glVertex2f(-9.9,20.0);
   glVertex2f(-9.9,25.0);
   glVertex2f(-30.0,25.0);
   glVertex2f(-30.0,20.0);
   glEnd();


   ///////////3////////////

   glColor3f (0.184, 0.310, 0.310);

   glBegin (GL_POLYGON);
   glVertex2f(-15.0,0.0);
   glVertex2f(-15.0,15.0);
   glVertex2f(-25.0,15.0);
   glVertex2f(-25.0,0.0);
   glEnd();

   glColor3f (0.561, 0.737, 0.560);

   glBegin (GL_POLYGON);
   glVertex2f(-16.7,0.0);
   glVertex2f(-16.7,10.0);
   glVertex2f(-23.0,10.0);
   glVertex2f(-23.0,0.0);
   glEnd();

   glColor3d (1.0, 1.0, 1.0);

   glBegin (GL_POLYGON);
   glVertex2f(-8.0,0.0);
   glVertex2f(-8.0,14.0);
   glVertex2f(-14.0,14.0);
   glVertex2f(-14.0,0.0);
   glEnd();

   glColor3f (1.0, 1.0, 1.0);

   glBegin (GL_POLYGON);
   glVertex2f(-26.0,0.0);
   glVertex2f(-26.0,14.0);
   glVertex2f(-32.0,14.0);
   glVertex2f(-32.0,0.0);
   glEnd();

}


void tree1()
{
    ///////Stick////////
    glPushMatrix();
    glScalef(1.2, 1.2, 0.0);
    glColor3f (0.6, 0.2, 0.0);

   glBegin (GL_POLYGON);
   glVertex2f(-1.0,0.0);
   glVertex2f(-1.,6.0);
   glVertex2f(-1.9,6.0);
   glVertex2f(-1.9,0.0);
   glEnd();

   glColor3f(0.2, 0.6, 0.0);
   glBegin (GL_TRIANGLES);
   glVertex2f(0.2,4.0);
   glVertex2f(-1.5,9.0);
   glVertex2f(-3.0,4.0);
   glEnd();

   glColor3f(0.2, 0.6, 0.0);
   glTranslatef(-0.1,2.5,0.0);
   glBegin (GL_TRIANGLES);
   glVertex2f(0.2,4.0);
   glVertex2f(-1.5,9.0);
   glVertex2f(-3.0,4.0);
   glEnd();

   glColor3f(0.2, 0.6, 0.0);
   glTranslatef(0.0001,2.6,0.0);
   glBegin (GL_TRIANGLES);
   glVertex2f(0.2,4.0);
   glVertex2f(-1.5,9.0);
   glVertex2f(-3.0,4.0);
   glEnd();
   glPopMatrix();

}

void tree2()
{

    glTranslatef(-33.5, 0.0, 0.0);
    void tree1();

    glPushMatrix();
    glScalef(0.5, 0.5, 0.0);
    glColor3f (0.6, 0.2, 0.0);

   glBegin (GL_POLYGON);
   glVertex2f(-1.0,0.0);
   glVertex2f(-1.,6.0);
   glVertex2f(-1.9,6.0);
   glVertex2f(-1.9,0.0);
   glEnd();

   glColor3f(0.2, 0.6, 0.0);
   glBegin (GL_TRIANGLES);
   glVertex2f(0.2,4.0);
   glVertex2f(-1.5,9.0);
   glVertex2f(-3.0,4.0);
   glEnd();

   glColor3f(0.2, 0.6, 0.0);
   glTranslatef(-0.1,2.5,0.0);
   glBegin (GL_TRIANGLES);
   glVertex2f(0.2,4.0);
   glVertex2f(-1.5,9.0);
   glVertex2f(-3.0,4.0);
   glEnd();

   glColor3f(0.2, 0.6, 0.0);
   glTranslatef(0.0001,2.6,0.0);
   glBegin (GL_TRIANGLES);
   glVertex2f(0.2,4.0);
   glVertex2f(-1.5,9.0);
   glVertex2f(-3.0,4.0);
   glEnd();
   glPopMatrix();

}

void tree3()
{
 glTranslatef(-2.0, 0.0, 0.0);
   glPushMatrix();
    glScalef(0.5, 0.5, 0.0);
    glColor3f (0.6, 0.2, 0.0);

   glBegin (GL_POLYGON);
   glVertex2f(-1.0,0.0);
   glVertex2f(-1.,6.0);
   glVertex2f(-1.9,6.0);
   glVertex2f(-1.9,0.0);
   glEnd();

   glColor3f(0.2, 0.6, 0.0);
   glBegin (GL_TRIANGLES);
   glVertex2f(0.2,4.0);
   glVertex2f(-1.5,9.0);
   glVertex2f(-3.0,4.0);
   glEnd();

   glColor3f(0.2, 0.6, 0.0);
   glTranslatef(-0.1,2.5,0.0);
   glBegin (GL_TRIANGLES);
   glVertex2f(0.2,4.0);
   glVertex2f(-1.5,9.0);
   glVertex2f(-3.0,4.0);
   glEnd();

   glColor3f(0.2, 0.6, 0.0);
   glTranslatef(0.0001,2.6,0.0);
   glBegin (GL_TRIANGLES);
   glVertex2f(0.2,4.0);
   glVertex2f(-1.5,9.0);
   glVertex2f(-3.0,4.0);
   glEnd();
   glPopMatrix();
}

void tree4()
{
    glTranslatef(-2.0, 0.0, 0.0);
   glPushMatrix();
    glScalef(0.5, 0.5, 0.0);
    glColor3f (0.6, 0.2, 0.0);

   glBegin (GL_POLYGON);
   glVertex2f(-1.0,0.0);
   glVertex2f(-1.,6.0);
   glVertex2f(-1.9,6.0);
   glVertex2f(-1.9,0.0);
   glEnd();

   glColor3f(0.2, 0.6, 0.0);
   glBegin (GL_TRIANGLES);
   glVertex2f(0.2,4.0);
   glVertex2f(-1.5,9.0);
   glVertex2f(-3.0,4.0);
   glEnd();

   glColor3f(0.2, 0.6, 0.0);
   glTranslatef(-0.1,2.5,0.0);
   glBegin (GL_TRIANGLES);
   glVertex2f(0.2,4.0);
   glVertex2f(-1.5,9.0);
   glVertex2f(-3.0,4.0);
   glEnd();

   glColor3f(0.2, 0.6, 0.0);
   glTranslatef(0.0001,2.6,0.0);
   glBegin (GL_TRIANGLES);
   glVertex2f(0.2,4.0);
   glVertex2f(-1.5,9.0);
   glVertex2f(-3.0,4.0);
   glEnd();
   glPopMatrix();
}


void bus_stand()
 {
     glPushMatrix();
  glColor3f (0.545, 0.000, 0.000);
  glTranslatef(-6.0, 0.0, 0.0);
   glBegin (GL_POLYGON);
   glVertex2f(10.0,-20.0);
   glVertex2f(7.0 ,-25.0);
   glVertex2f(30.0, -25.0);
   glVertex2f(27.0, -20.0);
   glEnd();
   glPopMatrix();
}


void khamba()
{
glPushMatrix();
   glColor3f (0.0,0.0,0.0);
   glTranslatef(5.0,-15.0,0.0);
    glBegin (GL_POLYGON);
   glVertex2f(1.0,-24.0);
   glVertex2f(-1.0,-24.0);
   glVertex2f(-1.0,-10.0);
   glVertex2f(1.0,-10.0);
   glEnd();
glPopMatrix();


glPushMatrix();
   glColor3f (0.0,0.0,0.0);
   glTranslatef(20.0,-15.0,0.0);
    glBegin (GL_POLYGON);
   glVertex2f(1.0,-24.0);
   glVertex2f(-1.0,-24.0);
   glVertex2f(-1.0,-10.0);
   glVertex2f(1.0,-10.0);
   glEnd();
glPopMatrix();

}



void drawDisk(double radius) {
	int d;
	glBegin(GL_POLYGON);
	for (d = 0; d < 32; d++)
	{
	    double angle = 2*PI/32 * d;
		glVertex2d( radius*cos(angle), radius*sin(angle));
	}
	glEnd();
}



void bus()
{

 glPushMatrix();
    if(angle1>-30)
    {
        glTranslatef(angle1,0.0,0);
    }
   else if(angle1==0)
    {
        glTranslatef(0,0.0,0);
    }
    else if(angle1<-30)
    {
        glTranslatef(angle1,0.0,0);
    }

    glPushMatrix();
    glTranslatef(18,-19,0);

   glPushMatrix();
   glColor3d (0.961, 0.871, 0.702);
   glBegin (GL_POLYGON);
   glVertex2f(0.0,0.0);
   glVertex2f(0,13);
   glVertex2f(20.0,13);
   glVertex2f(20,0.0);
   glEnd();
   glPopMatrix();

   ///window///
    glPushMatrix();
    glColor3d (0, 0, 0);
    glTranslatef(12.8,5,0);
    glRectf(1,5.5,6.5,0);
    glPopMatrix();

    glPushMatrix();
    glColor3d (0, 0, 0);
    glTranslatef(8.5,5,0);
    glRectf(0,5.5,5,0);
    glPopMatrix();


    glPushMatrix();
    glColor3d (0, 0, 0);
    glTranslatef(3.2,5,0);
    glRectf(0,5.5,5,0);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0.4,1,0);
    glColor3d (0, 0, 0);
    glBegin (GL_POLYGON);
    glVertex2f(0.0,8);
    glVertex2f(0,10);
    glVertex2f(2.3,10);
    glVertex2f(2.3,8);
    glEnd();
    glPopMatrix();

    ///door///

    glPushMatrix();
    glColor3d (0, 0, 0);
    glTranslatef(-1.7,0.5,0);
    glRectf(2.0,8,4.3,0);
    glPopMatrix();
    glPopMatrix();


///1st wheel///
glPushMatrix();
glTranslatef(23.0, -18.0, 0);
glScalef(.8, .8, 0);
    int i;
	glColor3f(0,0,0);
	drawDisk(2); ///wheel size
	glColor3f(0.75f, 0.75f, 0.75f);
	drawDisk(1);
	glColor3f(0,0,0);
	drawDisk(0.6);
	glRotatef(frameNumber*20,0,0,1);
	glBegin(GL_LINES);
	for (i = 0; i < 10; i++)
    {
        glVertex2f(0,0);
        glVertex2d(cos(i*2*PI/10), sin(i*2*PI/10));
    }

	glEnd();
glPopMatrix();

///2nd wheel///
glPushMatrix();
glTranslatef(32.0, -18.0, 0);
glScalef(.8, .8, 0);
    int j;
	glColor3f(0,0,0);
	drawDisk(2); ///wheel size
	glColor3f(0.75f, 0.75f, 0.75f);
	drawDisk(1);
	glColor3f(0,0,0);
	drawDisk(0.6);
	glRotatef(frameNumber*20,0,0,1);
	glBegin(GL_LINES);
	for (j = 0; j < 10; j++)
    {
        glVertex2f(0,0);
        glVertex2d(cos(j*2*PI/10), sin(j*2*PI/10));
    }

	glEnd();
glPopMatrix();

///3rd wheel///
glPushMatrix();
glTranslatef(35.5, -18.0, 0);
    glScalef(.8, .8, 0);
    int k;
	glColor3f(0,0,0);
	drawDisk(2); ///wheel size
	glColor3f(0.75f, 0.75f, 0.75f);
	drawDisk(1);
	glColor3f(0,0,0);
	drawDisk(0.6);
	glRotatef(frameNumber*20,0,0,1);
	glBegin(GL_LINES);
	for (k = 0; k < 10; k++)
    {
        glVertex2f(0,0);
        glVertex2d(cos(k*2*PI/10), sin(k*2*PI/10));
    }

	glEnd();
glPopMatrix();

glPopMatrix();

}



void person()
{
     glPushMatrix();
    if(angle<12)
    {
        glTranslatef(0.0,angle,0);
    }
   else
    {
        glTranslatef(0.0,12,0);
    }
glPushMatrix();
glColor3f (0.0, 1.0, 0.0);
glScalef(10.0,10.0,0);
glTranslatef(-1.0,-3,0);

   ///leg///
	glColor3f (0.0, 0.0, 0.0);
glPushMatrix();
glTranslatef(0,-0.3,0);
	glBegin(GL_POLYGON);
	glVertex2f(-0.1f,0.0f);
	glVertex2f(-0.1f,0.45f);
	glVertex2f(-0.27f,0.45f);
	glVertex2f(-0.27f,0.0f);
	glEnd();
	glPopMatrix();
	///yellow///
	glColor3f (0.0, 0.0, 0.0);

glTranslatef(-.0001,-0.1,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-0.1f,0.0f);
	glVertex2f(-0.1f,0.1f);
	glVertex2f(-0.27f,0.1f);
	glVertex2f(-0.27f,0.0f);
	glEnd();
    ///body///
	glColor3f (0.118, 0.565, 1.000);

glTranslatef(-.0001,0.1,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(-0.1f,0.0f);
	glVertex2f(-0.1f,0.25f);
	glVertex2f(-0.27f,0.25f);
	glVertex2f(-0.27f,0.0f);
	glEnd();
	///neck///
		glColor3f (0.8, 0.7, 0.7);

glTranslatef(-0.195,0.25,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0.04f,0.0f);
	glVertex2f(0.04f,0.1f);
	glVertex2f(-0.02f,0.1f);
	glVertex2f(-0.02f,0.0f);
	glEnd();

	///hand left///
	glColor3f (0.8, 1.0, 0.6);
glTranslatef(-0.1,-0.3,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0.02f,0.0f);
	glVertex2f(0.02f,0.3f);
	glColor3f (0.0, 1.0, 1.0);
	glVertex2f(-0.03f,0.3f);
	glVertex2f(-0.03f,0.0f);
	glEnd();

	///hand right///
	glColor3f (0.8, 1.0, 0.6);
glTranslatef(0.232,-0.001,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0.02f,0.0f);
	glVertex2f(0.02f,0.3f);
	glColor3f (0.0, 1.0, 1.0);
	glVertex2f(-0.03f,0.3f);
	glVertex2f(-0.03f,0.0f);
	glEnd();

    ///mid triangle///
	glColor3f (0.8,0.498039, 0.196078);
glTranslatef(-0.15,-0.45,0.0);
    glBegin(GL_TRIANGLES);
	glVertex2f(0.01f,0.0f);
	glVertex2f(0.05f,0.0f);
	glVertex2f(0.03f,0.4f);
	glEnd();

	///right triangle///
	glColor3f (0.0, 0.5, 0.0);
glTranslatef(0.11,0.45,0.0);

	glBegin(GL_TRIANGLES);
	glVertex2f(0.01f,0.0f);
	glVertex2f(0.04f,0.0f);
	glVertex2f(0.01f,0.2f);

	glEnd();
	///left triangle///
	glColor3f (0.0, 0.5, 0.0);
glTranslatef(-0.212,0.001,0.0);

	glBegin(GL_TRIANGLES);
	glVertex2f(0.01f,0.0f);
	glVertex2f(0.04f,0.2f);
	glVertex2f(0.04f,0.0f);

	glEnd();

      glColor3f (1.0, 0.8, 0.6);
glTranslatef(0.13,0.4,0.0);
glutSolidSphere(0.1,500,550);

      ///hat///
	glColor3f (0.502, 0.000, 0.000);
glTranslatef(0.045,0.05,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0.02f,0.0f);
	glVertex2f(0.02f,0.06f);
	glVertex2f(-0.127f,0.06f);
	glVertex2f(-0.127f,0.0f);
	glEnd();
	glColor3f (0.502, 0.000, 0.000);
glTranslatef(-0.03,0.07,0.0);
glutSolidSphere(0.055,50,50);
      /// left shoe///
	glColor3f (0.0, 0.0, 0.0);

glTranslatef(-0.05,-0.99,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0.02f,0.0f);
	glVertex2f(0.02f,0.07f);
	glVertex2f(-0.07f,0.07f);
	glVertex2f(-0.07f,0.0f);


	glEnd();
	 /// right shoe///
	glColor3f (0.0, 0.0, 0.0);

glTranslatef(0.125,-0.001,0.0);
	glBegin(GL_POLYGON);
	glVertex2f(0.02f,0.0f);
	glVertex2f(0.02f,0.07f);
	glVertex2f(-0.07f,0.07f);
	glVertex2f(-0.07f,0.0f);


	glEnd();


glPopMatrix();
glPopMatrix();
}




void init(void)

{
    glClear(GL_COLOR_BUFFER_BIT);
	glClearColor (0.529, 0.808, 0.922, 0.0);
	glMatrixMode(GL_PROJECTION);
	glOrtho(-40, 40, -40, 40, -40, 40);
	glMatrixMode(GL_MODELVIEW);
}

void doFrame(int v) {
    frameNumber++;
    glutPostRedisplay();
    glutTimerFunc(30,doFrame,0);
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);

glPushMatrix();
    glTranslatef(0,-25,0);
    glScalef(60,65,0);
    sky();
glPopMatrix();
    sun();
    cloud();
    road();

glPushMatrix();
glTranslatef(0.0,-2,0.0);
    building1();
    building2();
    building3();
    building4();

    window_building1();
    window_building2();
    window_building3();
    window_building4();


    bus();
    if(angle>=12)
    {

    }
    else{
        person();
    }

    supermarket();
    tree1();
    tree2();
    tree3();
    tree4();

    bus_stand();
    khamba();
glPopMatrix();

    glutSwapBuffers();
	glFlush();

}

void update1(int value)
{
   angle1-=0.27f;

   /* if(angle1>-40)
    {
       angle1-=40;

    }
*/

    glutPostRedisplay();
    glutTimerFunc(25,update1,0);

}

void update(int value)
{
   angle+=0.2f;

   /* if(angle>-8)
    {
       angle-=8;

    }*/


    glutPostRedisplay();
    glutTimerFunc(25,update,0);

}

void update2(int value)
{
   angle2+=0.2f;

    if(angle2>42)
    {
       angle2-=40;

    }

    glutPostRedisplay();
    glutTimerFunc(25,update2,0);

}


int main()
{
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (1350, 690);
	glutInitWindowPosition (0, 0);
	glutCreateWindow ("CSC455");
	init();
	glutDisplayFunc(display);
	glutTimerFunc(200,doFrame,0);
	glutTimerFunc(25,update,0);
	glutTimerFunc(25,update1,0);
    glutTimerFunc(25,update2,0);
	glutMainLoop();
	return 0;   /* ANSI C requires main to return int. */
}

