#include <windows.h>
#ifdef __APPLE_CC__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
float mg=0;
float re=0;
float x =-90,y=1;//sun
float a =0,b=0;//sun
float a1 = -10.0;//sheep
float xa = 0;
float sa = 120.0;//sarfing
float b1 = -17.5;//ball
float b2 = -29.5;//ball
float m1=0;//human
static GLfloat s1 =-8,s2 =-8;//bird
float f1 =-40.2 ;
float ha=0;

void spinDisplay(void)

{
    a1+=0.07;
    if(a1>=145)
        a1=-100.0;

        sa-=0.07;
    if(sa<=-100)
        sa=120.0;

        m1+=0.02;
    if(m1>=18)
        m1=18;

        f1+=0.008;
    if(f1>=-39.7)
        f1=-40.2;

         b1-=0.05;
    if(b1<=-29.5)
        b1=-17.5;

        b2+=0.05;
    if(b2>=-17.5)
        b2=-175;

         s1+=0.1;//feather1
        if(s1>=12)
        s1=-8;


        s2+=0.1;  // feather2
        if(s2>=12)
        s2=-8;

	glutPostRedisplay();

}
void body()//child
{
glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(12,0);
glVertex2f(15,0);
glVertex2f(15,-2);
glVertex2f(12,-2);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0,0.5,0.1);
glVertex2f(12,0);
glVertex2f(12,-2);
glVertex2f(10,-2);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0,0.5,0.1);
glVertex2f(15,0);
glVertex2f(15,-2);
glVertex2f(17,-2);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0,0.5,0.1);
glVertex2f(10,-2);
glVertex2f(17,-2);
glVertex2f(17,-10);
glVertex2f(10,-10);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(10,-2);
glVertex2f(10,-4.5);
glVertex2f(9.5,-5);
glVertex2f(7,-5);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(9.5,-5);
glVertex2f(7,-5);
glVertex2f(10,-8);
glVertex2f(10.9,-7);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(17,-2);
glVertex2f(17,-4);
glVertex2f(18,-5);
glVertex2f(20,-5);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(18,-5);
glVertex2f(20,-5);
glVertex2f(17.5,-8);
glVertex2f(17,-7);
glEnd();
}
void hand()
{

glPushMatrix();
glColor3f(1,0.7,0.5);
glutSolidSphere(1, 50, 50);
glPopMatrix();
}
 void body2()
 {
glBegin(GL_POLYGON);
glColor3f(0,0.1,0.7);
glVertex2f(6.5,-15);
glVertex2f(11,-19);
glVertex2f(3,-19);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0,0.1,0.7);
glVertex2f(11,-19);
glVertex2f(3,-19);
glVertex2f(3,-25);
glVertex2f(11,-25);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(11,-19);
glVertex2f(11,-21.2);
glVertex2f(14,-18);
glVertex2f(12,-18);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(14,-18);
glVertex2f(12,-18);
glVertex2f(11.5,-15);
glVertex2f(13,-15);
glEnd();
 }
void sarfhair()
{
glPushMatrix();
glColor3f(0,0,0);
glutSolidSphere(2.7, 46, 50);
glPopMatrix();
}
void sarfhead()
{
glPushMatrix();
glColor3f(1,0.7,0.5);
glutSolidSphere(2.7, 50, 50);
glPopMatrix();
}

void sarfingkid1()
{

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(-26,2);
glVertex2f(-26,7);
glVertex2f(-33,7);
glVertex2f(-33,2);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(-33,7);
glVertex2f(-33,5);
glVertex2f(-37,3.5);
glVertex2f(-34.5,3.5);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(1,0.7,0.5);
glVertex2f(-26,7);
glVertex2f(-33,7);
glVertex2f(-30,9);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(-26,7);
glVertex2f(-23,4);
glVertex2f(-24,3);
glVertex2f(-26,4.2);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(-28.5,7);
glVertex2f(-28.5,9.5);
glVertex2f(-31,9.5);
glVertex2f(-31,7);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.5,0.1,0.1);
glVertex2f(-26,2);
glVertex2f(-25.5,-3.5);
glVertex2f(-29.5,-3);
glVertex2f(-29.5,2);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.5,0.1,0.1);
glVertex2f(-29.5,2);
glVertex2f(-30,-3);
glVertex2f(-33.5,-3.5);
glVertex2f(-33,2);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(-27,-3);
glVertex2f(-29,-3);
glVertex2f(-29,-5);
glVertex2f(-27,-5);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(-26,-5);
glVertex2f(-29,-5);
glVertex2f(-29,-6);
glVertex2f(-26,-6);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(-30.5,-3);
glVertex2f(-32,-3);
glVertex2f(-32,-5);
glVertex2f(-30.5,-5);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(-30.5,-5);
glVertex2f(-33,-5);
glVertex2f(-33,-6);
glVertex2f(-30.5,-6);
glEnd();
}

void mudhouse()
{
glBegin(GL_POLYGON);
glColor3f(0.9,0.7,0.1);
glVertex2f(-15,-7);
glVertex2f(-25,-7);
glVertex2f(-25,-4);
glVertex2f(-15,-4);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.9,0.7,0.1);
glVertex2f(-15.5,-2);
glVertex2f(-16.5,-2);
glVertex2f(-16.5,-4);
glVertex2f(-15.5,-4);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.9,0.7,0.1);
glVertex2f(-24.5,-4);
glVertex2f(-23.5,-4);
glVertex2f(-23.5,0);
glVertex2f(-24.5,0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.9,0.7,0.1);
glVertex2f(-17,-1);
glVertex2f(-23,-1);
glVertex2f(-23,-4);
glVertex2f(-17,-4);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.9,0.7,0.1);
glVertex2f(-18,-1);
glVertex2f(-22,-1);
glVertex2f(-22,1);
glVertex2f(-18,1);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.9,0.6,0.2);
glVertex2f(-19,-2);
glVertex2f(-19,0);
glVertex2f(-21,0);
glVertex2f(-21,-2);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.9,0.6,0.2);
glVertex2f(-20,1);
glVertex2f(-20,4);
glVertex2f(-20.2,4);
glVertex2f(-20.2,1);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0,0);
glVertex2f(-19,4);
glVertex2f(-20.5,4);
glVertex2f(-20.5,6);
glVertex2f(-19,6);
glEnd();
}

void flag()
{
glBegin(GL_POLYGON);
glColor3f(1,0,0);
glVertex2f(-17,4);
glVertex2f(-19,4);
glVertex2f(-19,6);
glVertex2f(-17,6);
glEnd();
}

void sarfboat()
{
glBegin(GL_TRIANGLES);
glColor3f(0.7,0,0.3);
glVertex2f(-33.5,7);
glVertex2f(-30,3);
glVertex2f(-37,3);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.7,0,0.3);
glVertex2f(-30,3);
glVertex2f(-37,3);
glVertex2f(-37,-7);
glVertex2f(-30,-7);
glEnd();

}
 void ball()
 {
glPushMatrix();
glColor3f(1,0.9,0);
glutSolidSphere(2.7, 50, 50);
glPopMatrix();
 }

void head()//child
{
glPushMatrix();
glColor3f(1,0.7,0.5);
glutSolidSphere(3, 50, 50);
glPopMatrix();
}

void head2()//child
{
glPushMatrix();
glColor3f(0,0,0);
glutSolidSphere(3, 50, 50);
glPopMatrix();
}

 void hair()
 {
glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(9.6,4);
glVertex2f(12.5,6.5);
glVertex2f(14.5,6.5);
glVertex2f(17.2,4);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(17.2,4);
glVertex2f(17.2,2);
glVertex2f(16.2,2);
glVertex2f(16.2,4);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(9.6,4);
glVertex2f(9.6,2);
glVertex2f(10.6,2);
glVertex2f(10.6,4);
glEnd();


glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(11.5,3.5);
glVertex2f(11.5,3);
glVertex2f(12,3);
glVertex2f(12,3.5);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(14,3.5);
glVertex2f(14,3);
glVertex2f(14.5,3);
glVertex2f(14.5,3.5);
glEnd();

glBegin(GL_LINES);
glColor3f(0,0,0);
glVertex2f(12.6,1.5);
glVertex2f(12.6,2.8);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex2f(12.2,0.8);
glVertex2f(13.5,1);
glVertex2f(12.2,1);
glVertex2f(13.5,0.8);
glEnd();

 }
GLfloat br=0, bg=0, bb=0;
GLfloat br1=1, bg1=1, bb1=1;

void bird()
{
      glPushMatrix();
      glRotatef(s2,0,0,1);
      glBegin(GL_TRIANGLES);
      glColor3f(br,bg,bb);
      glVertex2f(0.1,0.7);
        glColor3f(br1,bg1,bb1);
      glVertex2f(0.4,0.3);
      glVertex2f(0.4,0.1);
      glEnd();
      glPopMatrix();

      glPushMatrix();
      glRotatef(s1,1,1,-1);
      glBegin(GL_TRIANGLES);
     glColor3f(br,bg,bb);
      glVertex2f(0.7,0.7);
        glColor3f(br1,bg1,bb1);
      glVertex2f(0.4,0.3);
      glVertex2f(0.4,0.1);
   glEnd();
   glPopMatrix();

   glBegin(GL_POLYGON);
      glColor3f(br,bg,bb);
      glVertex2f(0.4,0.1);
      glColor3f(br1,bg1,bb1);
      glVertex2f(0.5,0.2);
      glVertex2f(0.4,0.45);
      glVertex2f(0.3,0.2);
      glEnd();

      glBegin(GL_TRIANGLES);
     glColor3f(br,bg,bb);
      glVertex2f(0.4,0.1);
        glColor3f(br1,bg1,bb1);
      glVertex2f(0.3,0);
      glVertex2f(0.5,0);
   glEnd();


}
GLfloat str=0.5, stg=0.5, stb=0.5;
GLfloat str1=0.6, stg1=0, stb1=0.2;
GLfloat str2=0.7, stg2=0.7, stb2=0.9;
GLfloat str3=0.9, stg3=1, stb3=1;

void Steamer()
{
glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2f(-47,6);
glVertex2f(-46,7);
glVertex2f(-60.5,7);
glVertex2f(-59,6);
glEnd();

glBegin(GL_QUADS);
glColor3f(str,stg,stb);
glVertex2f(-60.5,7);
glVertex2f(-65,11);
glVertex2f(-42,11);
glVertex2f(-46,7);
glEnd();

glBegin(GL_QUADS);
glColor3f(str1,stg1,stb1);
glVertex2f(-65,11);
glVertex2f(-42,11);
glVertex2f(-39.5,13);
glVertex2f(-68,13);
glEnd();

glBegin(GL_QUADS);
glColor3f(str2,stg2,stb2);
glVertex2f(-45,13);
glVertex2f(-62,13);
glVertex2f(-62,18);
glVertex2f(-45,18);
glEnd();

glBegin(GL_LINE_STRIP);
glColor3f(0,0,0);
glLineWidth(2.5);
glVertex2f(-45,13);
glVertex2f(-62,13);
glVertex2f(-62,18);
glVertex2f(-45,18);
glVertex2f(-45,13);
glEnd();

glPushMatrix();
glColor3f(0.1,0.3,0);
glTranslatef(-60, 9, 12);
glutSolidSphere(1, 50, 50);
glPopMatrix();

glPushMatrix();
glColor3f(0.6,0,0.2);
glTranslatef(-60, 9, 12);
glutSolidSphere(0.5, 50, 50);
glPopMatrix();

glPushMatrix();
glColor3f(0.1,0.3,0);
glTranslatef(-56, 9, 12);
glutSolidSphere(1, 50, 50);
glPopMatrix();

glPushMatrix();
glColor3f(0.6,0,0.2);
glTranslatef(-56, 9, 12);
glutSolidSphere(0.5, 50, 50);
glPopMatrix();

glPushMatrix();
glColor3f(0.1,0.3,0);
glTranslatef(-52, 9, 12);
glutSolidSphere(1, 50, 50);
glPopMatrix();

glPushMatrix();
glColor3f(0.6,0,0.2);
glTranslatef(-52, 9, 12);
glutSolidSphere(0.5, 50, 50);
glPopMatrix();

glPushMatrix();
glColor3f(0.1,0.3,0);
glTranslatef(-48, 9, 12);
glutSolidSphere(1, 50, 50);
glPopMatrix();

glPushMatrix();
glColor3f(0.6,0,0.2);
glTranslatef(-48, 9, 12);
glutSolidSphere(0.5, 50, 50);
glPopMatrix();

glBegin(GL_QUADS);
glColor3f(str3,stg3,stb3);
glVertex2f(-60,14);
glVertex2f(-60,17);
glVertex2f(-57,17);
glVertex2f(-57,14);
glEnd();

glBegin(GL_LINE_STRIP);
glColor3f(0,0,0);
glVertex2f(-60,14);
glVertex2f(-60,17);
glVertex2f(-57,17);
glVertex2f(-57,14);
glVertex2f(-60,14);
glEnd();

glBegin(GL_QUADS);
glColor3f(str3,stg3,stb3);
glVertex2f(-55,14);
glVertex2f(-55,17);
glVertex2f(-52,17);
glVertex2f(-52,14);
glEnd();

glBegin(GL_LINE_STRIP);
glColor3f(0,0,0);
glVertex2f(-55,14);
glVertex2f(-55,17);
glVertex2f(-52,17);
glVertex2f(-52,14);
glVertex2f(-55,14);
glEnd();

glBegin(GL_QUADS);
glColor3f(str3,stg3,stb3);
glVertex2f(-50,14);
glVertex2f(-50,17);
glVertex2f(-47,17);
glVertex2f(-47,14);
glEnd();

glBegin(GL_LINE_STRIP);
glColor3f(0,0,0);
glVertex2f(-50,14);
glVertex2f(-50,17);
glVertex2f(-47,17);
glVertex2f(-47,14);
glVertex2f(-50,14);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2f(-52,18);
glVertex2f(-52,21);
glColor3f(1,1,1);
glVertex2f(-48.5,21);
glVertex2f(-48.5,18);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2f(-54,18);
glVertex2f(-54,21);
glColor3f(1,1,1);
glVertex2f(-57.5,21);
glVertex2f(-57.5,18);
glEnd();
}
void steam()
{
    //steam
glPushMatrix();
glColor3f(0.3,0.4,0.7);
glTranslatef(-50,23, 12);
glutSolidSphere(1, 50, 50);
glPopMatrix();

glPushMatrix();
glColor3f(0.3,0.4,0.6);
glTranslatef(-50,22.5, 12);
glutSolidSphere(1, 50, 50);
glPopMatrix();

glPushMatrix();
glColor3f(0.3,0.4,0.6);
glTranslatef(-50.3,22, 12);
glutSolidSphere(1, 50, 50);
glPopMatrix();

glPushMatrix();
glColor3f(0.3,0.4,0.6);
glTranslatef(-50.4,23, 12);
glutSolidSphere(1, 50, 50);
glPopMatrix();

glPushMatrix();
glColor3f(0.3,0.4,0.7);
glTranslatef(-56.1,23, 12);
glutSolidSphere(1, 50, 50);
glPopMatrix();

glPushMatrix();
glColor3f(0.3,0.4,0.6);
glTranslatef(-56.1,22.5, 12);
glutSolidSphere(1, 50, 50);
glPopMatrix();

glPushMatrix();
glColor3f(0.3,0.4,0.6);
glTranslatef(-56.5,22.8, 12);
glutSolidSphere(1, 50, 50);
glPopMatrix();

glPushMatrix();
glColor3f(0.3,0.4,0.6);
glTranslatef(-56.5,22.1, 12);
glutSolidSphere(1, 50, 50);
glPopMatrix();
}

GLfloat sr=0, sg=.7, sb=1;
GLfloat sr1=0, sg1=.3, sb1=.9;
GLfloat sr2=1, sg2=1, sb2=1;

void sky()
{
glBegin(GL_QUADS);
glColor3f(sr2,sg2,sb2);
glVertex2f(80,15);
glVertex2f(-80,15);
glColor3f(sr,sg,sb);
glVertex2f(-80,35);
glVertex2f(80,35);
glEnd();

glBegin(GL_QUADS);
glColor3f(sr,sg,sb);
glVertex2f(80,35);
glVertex2f(-80,35);
glColor3f(sr1,sg1,sb1);
glVertex2f(-80,45);
glVertex2f(80,45);
glEnd();
}
GLfloat rr=1,rg=0.8,rb=0.4;
void reflection()
{
glBegin(GL_POLYGON);
glColor3f(rr,rg,rb);
glVertex2f(20.5,11.5);
glVertex2f(23.5,11.5);
glVertex2f(23,12);
glVertex2f(21,12);
glEnd();

glBegin(GL_POLYGON);
glColor3f(rr,rg,rb);
glVertex2f(18,9);
glVertex2f(26,9);
glVertex2f(26,8);
glVertex2f(18,8);
glEnd();

glBegin(GL_POLYGON);//1
glColor3f(rr,rg,rb);
glVertex2f(18,10);
glVertex2f(26,10);
glVertex2f(24,11);
glVertex2f(20,11);
glEnd();

glBegin(GL_POLYGON);//1
glColor3f(rr,rg,rb);
glVertex2f(18,7);
glVertex2f(26,7);
glVertex2f(24,6);
glVertex2f(20,6);
glEnd();

glBegin(GL_POLYGON);//1
glColor3f(rr,rg,rb);
glVertex2f(20.5,5.5);
glVertex2f(23.5,5.5);
glVertex2f(23,4.8);
glVertex2f(21,4.8);
glEnd();

}

GLfloat snr=1, sng=.6, snb=.1;
GLfloat snr1=1, sng1=.7, snb1=0;
GLfloat snr2=1, sng2=0.8, snb2=0.4;
GLfloat snr3=1, sng3=.9, snb3=.3;
GLfloat snr4=1, sng4=1, snb4=0.2;
void sun()
{

glPushMatrix();
glColor3f(snr,sng,snb);
glTranslatef(20, 35, 12);
glutSolidSphere(4, 50, 50);
glPopMatrix();

glPushMatrix();
glColor3f(snr1,sng1,snb1);
glTranslatef(20, 35, 12);
glutSolidSphere(3.5, 50, 50);
glPopMatrix();

glPushMatrix();
glColor3f(snr2,sng2,snb2);
glTranslatef(20, 35, 12);
glutSolidSphere(3, 50, 50);
glPopMatrix();

glPushMatrix();
glColor3f(snr3,sng3,snb3);
glTranslatef(20, 35, 12);
glutSolidSphere(2.5, 50, 50);
glPopMatrix();

glPushMatrix();
glColor3f(snr4,sng4,snb4);
glTranslatef(20, 35, 12);
glutSolidSphere(2, 50, 50);
glPopMatrix();
}
GLfloat ser=0,seg=0.85,seb=0.9;
GLfloat ser1=0,seg1=0.8,seb1=1;
GLfloat ser2=0.1,seg2=0.7,seb2=1;


GLfloat ssr=0.8,ssg=0.8,ssb=0.8;
GLfloat ssr1=0.9,ssg1=0.8,ssb1=.7;
GLfloat ssr2=0.9,ssg2=0.8,ssb2=.5;
void sea()
{
glBegin(GL_POLYGON);//1
glColor3f(ssr,ssg,ssb);
glVertex2f(60,6);
glVertex2f(80,15);
glVertex2f(80,-20);
glVertex2f(60,-20);
glEnd();

//seashore
glBegin(GL_POLYGON);//1
glColor3f(ssr,ssg,ssb);
glVertex2f(60,6);
glVertex2f(80,15);
glColor3f(ssr1,ssg1,ssb1);
glVertex2f(80,-20);
glVertex2f(60,-20);
glEnd();

glBegin(GL_POLYGON);
glColor3f(ssr1,ssg1,ssb1);
glVertex2f(80,-20);
glVertex2f(60,-20);
glColor3f(ssr2,ssg2,ssb2);
glVertex2f(60,-55);
glVertex2f(80,-55);
glEnd();

glBegin(GL_POLYGON);//2
glColor3f(ssr,ssg,ssb);
glVertex2f(60,5.95);
glVertex2f(50,3.5);
glColor3f(ssr1,ssg1,ssb1);
glVertex2f(50,-20);
glVertex2f(60,-20);
glEnd();

glBegin(GL_POLYGON);
glColor3f(ssr1,ssg1,ssb1);
glVertex2f(50,-20);
glVertex2f(60,-20);
glColor3f(ssr2,ssg2,ssb2);
glVertex2f(60,-55);
glVertex2f(50,-55);
glEnd();

glBegin(GL_POLYGON);//3
glColor3f(ssr,ssg,ssb);
glVertex2f(50,3.5);
glVertex2f(40,1);
glColor3f(ssr1,ssg1,ssb1);
glVertex2f(40,-20);
glVertex2f(50,-20);
glEnd();

glBegin(GL_POLYGON);
glColor3f(ssr1,ssg1,ssb1);
glVertex2f(50,-20);
glVertex2f(40,-20);
glColor3f(ssr2,ssg2,ssb2);
glVertex2f(40,-55);
glVertex2f(50,-55);
glEnd();

glBegin(GL_POLYGON);//4
glColor3f(ssr,ssg,ssb);
glVertex2f(40,0.8);
glColor3f(ssr1,ssg1,ssb1);
glVertex2f(34,-0.5);
glVertex2f(30,-2.5);
glVertex2f(30,-20);
glVertex2f(40,-20);
glEnd();

glBegin(GL_POLYGON);
glColor3f(ssr1,ssg1,ssb1);
glVertex2f(40,-20);
glVertex2f(30,-20);
glColor3f(ssr2,ssg2,ssb2);
glVertex2f(30,-55);
glVertex2f(40,-55);
glEnd();

glBegin(GL_POLYGON);//5
glColor3f(ssr1,ssg1,ssb1);
glVertex2f(30,-2.5);
glVertex2f(0,-16);
glVertex2f(0,-20);
glVertex2f(30,-20);
glEnd();

glBegin(GL_POLYGON);
glColor3f(ssr1,ssg1,ssb1);
glVertex2f(30,-20);
glVertex2f(0,-20);
glColor3f(ssr2,ssg2,ssb2);
glVertex2f(0,-55);
glVertex2f(30,-55);
glEnd();

glBegin(GL_POLYGON);//6
glColor3f(ssr1,ssg1,ssb1);
glVertex2f(0,-16);
glVertex2f(-5,-17);
glVertex2f(-15,-20.5);
glVertex2f(0,-20);
glEnd();

glBegin(GL_POLYGON);
glColor3f(ssr1,ssg1,ssb1);
glVertex2f(-15,-20.5);
glVertex2f(0,-16);
glColor3f(ssr2,ssg2,ssb2);
glVertex2f(0,-55);
glVertex2f(-15,-55);
glEnd();

glBegin(GL_POLYGON);//7
glColor3f(ssr1,ssg1,ssb1);
glVertex2f(-15,-20.5);
glVertex2f(-40,-29.5);
glColor3f(ssr2,ssg2,ssb2);
glVertex2f(-40,-55);
glVertex2f(-15,-55);
glEnd();

glBegin(GL_POLYGON);//8
glColor3f(ssr1,ssg1,ssb1);
glVertex2f(-40,-29.5);
glColor3f(ssr2,ssg2,ssb2);
glVertex2f(-80,-55);
glVertex2f(-40,-55);
glEnd();


  //Sea
glBegin(GL_POLYGON);//1
glColor3f(ser,seg,seb);glVertex2f(80,15);
glColor3f(ser,seg,seb);glVertex2f(60,15);
glColor3f(ser2,seg2,seb2);glVertex2f(60,6);
glColor3f(ser2,seg2,seb2);glVertex2f(80,7.5);
glEnd();

glBegin(GL_QUADS);//2
glColor3f(ser,seg,seb);glVertex2f(50,15);
glColor3f(ser2,seg2,seb2);glVertex2f(50,3);
glColor3f(ser2,seg2,seb2);glVertex2f(40,.5);
glColor3f(ser,seg,seb);glVertex2f(40,15);
glEnd();

glBegin(GL_QUADS);//3
glColor3f(ser,seg,seb);glVertex2f(60,15);
glColor3f(ser,seg,seb);glVertex2f(50,15);
glColor3f(ser2,seg2,seb2);glVertex2f(50,3.5);
glColor3f(ser2,seg2,seb2);glVertex2f(60,6);
glEnd();

glBegin(GL_POLYGON);//4
glColor3f(ser,seg,seb);glVertex2f(40,15);
glColor3f(ser,seg,seb);glVertex2f(30,15);
glColor3f(ser2,seg2,seb2);glVertex2f(30,-2.5);
glColor3f(ser2,seg2,seb2);glVertex2f(34,-0.5);
glColor3f(ser2,seg2,seb2);glVertex2f(40,0.8);
glEnd();

glBegin(GL_QUADS);//5
glColor3f(ser,seg,seb);glVertex2f(30,15);
glColor3f(ser,seg,seb);glVertex2f(0,15);
glColor3f(ser2,seg2,seb2);glVertex2f(0,-16);
glColor3f(ser2,seg2,seb2);glVertex2f(30,-2.5);
glEnd();

glBegin(GL_POLYGON);//6
glColor3f(ser,seg,seb);glVertex2f(0,15);
glColor3f(ser,seg,seb);glVertex2f(-15,15);
glColor3f(ser2,seg2,seb2);glVertex2f(-15,-20.5);
glColor3f(ser2,seg2,seb2);glVertex2f(-5,-17);
glColor3f(ser2,seg2,seb2);glVertex2f(0,-16);
glEnd();

glBegin(GL_POLYGON);//7
glColor3f(ser,seg,seb);glVertex2f(-15,15);
glColor3f(ser,seg,seb);glVertex2f(-40,15);
glColor3f(ser2,seg2,seb2);glVertex2f(-40,-29.5);
glColor3f(ser2,seg2,seb2);glVertex2f(-15,-20.5);
glEnd();

glBegin(GL_POLYGON);//8
glColor3f(ser,seg,seb);glVertex2f(-40,15);
glColor3f(ser,seg,seb);glVertex2f(-80,15);
glColor3f(ser2,seg2,seb2);glVertex2f(-80,-55);
glColor3f(ser2,seg2,seb2);glVertex2f(-40,-29.5);
glEnd();

}

void umbrella()
 {
glBegin(GL_TRIANGLES);//umbrella 3
glColor3f(0.2,0.2,0.9);
glVertex2f(68,4);
glVertex2f(61,-4);
glVertex2f(65,-4);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.7,1,0);
glVertex2f(68,4);
glVertex2f(65,-4);
glVertex2f(68.5,-4);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.8,0.1,0.4);
glVertex2f(68,4);
glVertex2f(68.5,-4);
glVertex2f(74,-4);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.6,0.2,0.7);
glVertex2f(68,4);
glVertex2f(72,-4);
glVertex2f(76.5,-4);
glEnd();

glBegin(GL_TRIANGLES);//umbrella 2
glColor3f(0.2,0.2,0.9);
glVertex2f(63.5,-5);
glVertex2f(50,-16);
glVertex2f(57,-16);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.7,1,0);
glVertex2f(63.5,-5);
glVertex2f(57,-16);
glVertex2f(62,-16);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.8,0.1,0.4);
glVertex2f(63.5,-5);
glVertex2f(62,-16);
glVertex2f(69,-16);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.6,0.2,0.7);
glVertex2f(63.5,-5);
glVertex2f(69,-16);
glVertex2f(76,-16);
glEnd();

glBegin(GL_TRIANGLES);//umbrella 1
glColor3f(0.2,0.2,0.9);
glVertex2f(60,-13.5);
glVertex2f(41,-30);
glVertex2f(52,-30);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.7,1,0);
glVertex2f(60,-13.5);
glVertex2f(58,-30);
glVertex2f(52,-30);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.8,0.1,0.4);
glVertex2f(60,-13.5);
glVertex2f(58,-30);
glVertex2f(68,-30);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(0.6,0.2,0.7);
glVertex2f(60,-13.5);
glVertex2f(66,-30);
glVertex2f(78,-30);
glEnd();
 }

GLfloat cr=1,cg=0.3,cb=0.2;
GLfloat cr1=1,cg1=0.5,cb1=.1;
GLfloat dr=0,dg=1,db=0.2;

void chair()
 {

glBegin(GL_QUADS);//sit 1 down
glColor3f(cr,cg,cb);
glVertex2f(52,-42.5);
glVertex2f(53.5,-35.5);
glColor3f(cr1,cg1,cb1);
glVertex2f(69.5,-35);
glVertex2f(73,-42);
glEnd();

glBegin(GL_QUADS);//chair leg 2
glColor3f(0.7,0.2,0.1);
glVertex2f(73.5,-25);
glVertex2f(73.5,-30);
glVertex2f(72.5,-30);
glVertex2f(72.5,-25);
glEnd();

glBegin(GL_QUADS);//up
glColor3f(cr1,cg1,cb1);
glVertex2f(69.5,-35);
glVertex2f(73,-42);
glColor3f(cr,cg,cb);
glVertex2f(80,-30);
glVertex2f(74.5,-27.5);
glEnd();

glBegin(GL_LINES);
glColor3f(0.7,0.2,0.1);
glLineWidth(15000);
glVertex2f(69.5,-35);
glVertex2f(73,-42);
glEnd();

glBegin(GL_QUADS);//chair leg
glColor3f(0.7,0.2,0.1);
glVertex2f(73,-42);
glVertex2f(72,-42);
glVertex2f(72,-46);
glVertex2f(73,-46);
glEnd();

glBegin(GL_QUADS);
glColor3f(0.7,0.2,0.1);
glVertex2f(52,-42.5);
glVertex2f(53,-42.5);
glVertex2f(53,-46.5);
glVertex2f(52,-46.5);
glEnd();

glBegin(GL_QUADS);//umbrella stick 1
glColor3f(0.7,0.2,0.1);
glVertex2f(59,-46.5);
glVertex2f(59,-28);
glVertex2f(60,-28);
glVertex2f(60,-46.5);
glEnd();


glBegin(GL_QUADS);//sit 2 down
glColor3f(cr,cg,cb);
glVertex2f(59,-25);
glVertex2f(57.5,-20);
glColor3f(cr1,cg1,cb1);
glVertex2f(70,-20);
glVertex2f(73.5,-25);
glEnd();

glBegin(GL_QUADS);//up
glColor3f(cr1,cg1,cb1);
glVertex2f(73.5,-25);
glVertex2f(70,-20);
glColor3f(cr,cg,cb);
glVertex2f(74,-13);
glVertex2f(80,-13);
glEnd();

glBegin(GL_LINES);
glColor3f(0.7,0.2,0.1);
glLineWidth(15000);
glVertex2f(73.5,-25);
glVertex2f(70,-20);
glEnd();

glBegin(GL_QUADS);//sit 3 down
glColor3f(cr,cg,cb);
glVertex2f(65,-6);
glVertex2f(66.5,-9);
glColor3f(cr1,cg1,cb1);
glVertex2f(78.5,-9);
glVertex2f(75,-6);
glEnd();

glBegin(GL_QUADS);//umbrella stick 3
glColor3f(0.7,0.2,0.1);
glVertex2f(68,-4);
glVertex2f(69,-4);
glVertex2f(69,-10);
glVertex2f(68,-10);
glEnd();

glBegin(GL_QUADS);//up
glColor3f(cr1,cg1,cb1);
glVertex2f(78.5,-9);
glVertex2f(75,-6);
glColor3f(cr,cg,cb);
glVertex2f(76.5,-2);
glVertex2f(80,-2);
glEnd();

glBegin(GL_LINES);
glColor3f(0.7,0.2,0.1);
glLineWidth(15000);
glVertex2f(78.5,-9);
glVertex2f(75,-6);
glEnd();

glBegin(GL_QUADS);//chair leg 3
glColor3f(0.7,0.2,0.1);
glVertex2f(78.5,-9);
glVertex2f(78.5,-12);
glVertex2f(77.5,-12);
glVertex2f(77.5,-9);
glEnd();

glBegin(GL_POLYGON);//drinks
glColor3f(dr,dg,db);
glVertex2f(61.5,-48);
glVertex2f(62,-50);
glVertex2f(62.3,-50.8);
glVertex2f(63.6,-51.8);
glVertex2f(63.8,-52);
glVertex2f(64.3,-51.8);
glVertex2f(65.5,-50.8);
glVertex2f(66,-50);
glVertex2f(66,-48);
glEnd();

glPushMatrix();
glColor3f(1,0.9,0.5);
glTranslatef(63.8, -48, 12);
glutSolidSphere(2, 50, 50);
glPopMatrix();

glPushMatrix();
glColor3f(0.8,0.5,0.4);
glTranslatef(63.8, -48, 12);
glutSolidSphere(0.5, 50, 50);
glPopMatrix();


 }

GLfloat hr1=1, hg1=.7, hb1=.5;
GLfloat hr2=1, hg2=0, hb2=0;
GLfloat hr3=0.8, hg3=.9, hb3=.1;

void human()
{
    //Human 1
glPushMatrix();//head
glColor3f(0,0,0);
glTranslatef(18, -26.7, 12);
glutSolidSphere(3.7, 50, 50);
glPopMatrix();

glBegin(GL_POLYGON);//leg
glColor3f(hr1,hg1,hb1);
glVertex2f(14,-55);
glVertex2f(16,-55);
glVertex2f(16,-50);
glVertex2f(14,-50);
glEnd();

glBegin(GL_POLYGON);
glColor3f(hr1,hg1,hb1);
glVertex2f(19,-55);
glVertex2f(19,-50);
glVertex2f(21,-50);
glVertex2f(21,-55);
glEnd();

glBegin(GL_POLYGON);//pant
glColor3f(hr2,hg2,hb2);
glVertex2f(13,-40);
glVertex2f(20,-40);
glVertex2f(17,-50);
glVertex2f(13,-50);
glEnd();

glBegin(GL_POLYGON);
glColor3f(hr2,hg2,hb2);
glVertex2f(23,-40);
glVertex2f(23,-50);
glVertex2f(19,-50);
glVertex2f(17,-40);
glEnd();

glBegin(GL_POLYGON);//t-shirt
glColor3f(hr3,hg3,hb3);
glVertex2f(13,-40);
glVertex2f(23,-40);
glVertex2f(23,-32);
glVertex2f(13,-32);

glBegin(GL_POLYGON);
glColor3f(hr3,hg3,hb3);
glVertex2f(23,-32);
glVertex2f(25.5,-35);
glVertex2f(24,-37);
glVertex2f(23,-35);
glEnd();

glBegin(GL_POLYGON);//neck
glColor3f(hr1,hg1,hb1);
glVertex2f(16,-32);
glVertex2f(20,-32);
glVertex2f(20,-30);
glVertex2f(16,-30);
glEnd();

glBegin(GL_POLYGON);//hand
glColor3f(hr1,hg1,hb1);
glVertex2f(25.5,-35);
glVertex2f(24.1,-37);
glVertex2f(27.5,-39);
glVertex2f(27,-37);
glEnd();

glBegin(GL_POLYGON);
glColor3f(hr1,hg1,hb1);
glVertex2f(27.5,-39);
glVertex2f(27,-37);
glVertex2f(27.5,-33);
glVertex2f(29.5,-31);
glEnd();

glBegin(GL_POLYGON);
glColor3f(hr1,hg1,hb1);
glVertex2f(25,-34);
glVertex2f(23,-32);
glVertex2f(28,-31);
glVertex2f(31,-31);
glEnd();

 glBegin(GL_POLYGON);//camera
glColor3f(0,0,0);
glVertex2f(30,-33);
glVertex2f(30,-31);
glVertex2f(26,-31);
glVertex2f(26,-33);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(28.5,-30);
glVertex2f(29.5,-30);
glVertex2f(29.5,-33);
glVertex2f(28.5,-33);
glEnd();

glPushMatrix();//flash
glColor3f(1,1,1);
glTranslatef(29, -30.5, 12);
glutSolidSphere(0.3, 50, 50);
glPopMatrix();
}

void mudgirl()
{

glBegin(GL_POLYGON);
glColor3f(0.9,0,0.9);
glVertex2f(-3,2);
glVertex2f(-3,-5);
glVertex2f(-10,-5);
glVertex2f(-10,2);
glVertex2f(-8,4);
glVertex2f(-6,4);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,.7,.5);
glVertex2f(-6,3);
glVertex2f(-8,3);
glVertex2f(-8,5);
glVertex2f(-6,5);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,.7,.5);
glVertex2f(-12,-5);
glVertex2f(-13,-5);
glVertex2f(-13.4,-6);
glVertex2f(-13.4,-7);
glVertex2f(-12,-7);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,.7,.5);
glVertex2f(-3,-6);
glVertex2f(-13,-6);
glVertex2f(-13,-9);
glVertex2f(-1,-9);
glVertex2f(1,-10);
glVertex2f(1,-8);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.4,1,0.8);
glVertex2f(-3,-5);
glVertex2f(-12,-5);
glVertex2f(-12,-8.5);
glVertex2f(-3,-8.5);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(-3,5);
glVertex2f(-5,4.5);
glVertex2f(-5,7);
glVertex2f(-7,10);
glVertex2f(-9.5,10);
glVertex2f(-7.5,11);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(1,0,0);
glVertex2f(-4,6.5);
glVertex2f(-9.8,11.5);
glVertex2f(-5,10.8);
glEnd();

glBegin(GL_QUADS);
glColor3f(1,0,0);
glVertex2f(-3.5,10);
glVertex2f(-6.5,12.5);
glVertex2f(-7.5,11.25);
glVertex2f(-4.5,8.5);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,.7,.5);
glVertex2f(-5.2,2);
glVertex2f(-5.2,-2);
glVertex2f(-7.2,-2);
glVertex2f(-7.2,2);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,.7,.5);
glVertex2f(-7.22,0);
glVertex2f(-7,-2);
glVertex2f(-13,-2);
glVertex2f(-13,-1);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,.7,.5);
glVertex2f(-13,-2);
glVertex2f(-13,-1);
glVertex2f(-14,-1.5);
glVertex2f(-14,-3.5);
glEnd();
}
void mudgirlenl()
{
glBegin(GL_TRIANGLES);
glColor3f(1,.7,.5);
glVertex2f(-1.5,0.2);
glVertex2f(-2,-1.5);
glVertex2f(-1.2,-1.3);
glEnd();

glBegin(GL_TRIANGLES);
glColor3f(1,0,0);
glVertex2f(0,-1.6);
glVertex2f(0,-2.1);
glVertex2f(-1.5,-1.5);
glEnd();

glBegin(GL_QUADS);
glColor3f(0,0,0);
glVertex2f(-1.5,.9);
glVertex2f(-1,.9);
glVertex2f(-1,1.4);
glVertex2f(-1.5,1.4);
glEnd();
}

void sarfing()
{
glBegin(GL_POLYGON);
glColor3f(0.2,0.2,0.4);
glVertex2f(-7,20);
glVertex2f(-7,10);
glVertex2f(-15,10);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.9,0,0.4);
glVertex2f(-7,10);
glVertex2f(-15,10);
glVertex2f(-20,0);
glVertex2f(-7,0);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.2,0.2,0.4);
glVertex2f(-7,0);
glVertex2f(-20,0);
glVertex2f(-25,-9.5);
glVertex2f(-7,-10.5);
glEnd();


glBegin(GL_POLYGON);
glColor3f(0.6,0.6,0.6);
glVertex2f(-9,-16);
glVertex2f(-9,-25);
glColor3f(0.7,0,0);
glVertex2f(-12,-22);
glVertex2f(-12,-19);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.6,0.6,0.6);
glVertex2f(-9,-16);
glVertex2f(-9,-25);
glVertex2f(0,-25);
glVertex2f(0,-16);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.6,0.6,0.6);
glVertex2f(0,-25);
glVertex2f(0,-16);
glColor3f(0.7,0,0);
glVertex2f(10,-16);
glVertex2f(6,-25);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.3,0,0);
glVertex2f(-7,20);
glVertex2f(-6,20);
glVertex2f(-6,-20);
glVertex2f(-7,-20);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0,0,0);
glVertex2f(2,10);
glVertex2f(7,10);
glVertex2f(7,11);
glVertex2f(6,12);
glVertex2f(3,12);
glVertex2f(2,11);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(2,10);
glVertex2f(7,10);
glVertex2f(7,8);
glVertex2f(6,7);
glVertex2f(2.5,7);
glVertex2f(2,8);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(2.6,6);
glVertex2f(6,6);
glVertex2f(6,7);
glVertex2f(2.6,7);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(0.8,6);
glVertex2f(7,6);
glVertex2f(7,2);
glVertex2f(0,2);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(7,2);
glVertex2f(0,2);
glVertex2f(0,-1);
glVertex2f(6,-1);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.9,0,.3);
glVertex2f(0,-1);
glVertex2f(6,-1);
glVertex2f(6,-3);
glVertex2f(0,-3);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.9,0.3,0);
glVertex2f(4,6);
glVertex2f(7,6);
glVertex2f(7,2);
glVertex2f(4,2);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.9,0.3,0);
glVertex2f(7,2);
glVertex2f(4,2);
glVertex2f(4,-1);
glVertex2f(6,-1);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.9,0.3,0);
glVertex2f(0,5);
glVertex2f(2,6);
glVertex2f(3,4);
glVertex2f(3,-1);
glVertex2f(0,-1);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.9,0,0.3);
glVertex2f(0,-3);
glVertex2f(-1.5,-9);
glVertex2f(2,-9);
glVertex2f(3,-3);
glEnd();

glBegin(GL_POLYGON);
glColor3f(0.9,0,0.3);
glVertex2f(2,-3);
glVertex2f(6,-3);
glVertex2f(6,-5);
glVertex2f(5,-9);
glVertex2f(3,-9);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(-.5,-9);
glVertex2f(1,-9);
glVertex2f(1,-18);
glVertex2f(-0.5,-18);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(-2,-18);
glVertex2f(-0.5,-18);
glVertex2f(-0.5,-17);
glVertex2f(-2,-17);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(3.3,-9);
glVertex2f(4.5,-9);
glVertex2f(4.5,-18);
glVertex2f(3.3,-18);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(2,-18);
glVertex2f(4,-18);
glVertex2f(4,-17);
glVertex2f(2,-17);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(1,1.5);
glVertex2f(1,-1);
glVertex2f(6,4);
glVertex2f(4.5,6);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(1,1.5);
glVertex2f(1,-1);
glVertex2f(-5,2);
glVertex2f(-5,3.2);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(-5,4.2);
glVertex2f(-7,4.2);
glVertex2f(-7,2.2);
glVertex2f(-5,2.2);
glEnd();

glBegin(GL_POLYGON);
glColor3f(1,0.7,0.5);
glVertex2f(0.8,6);
glVertex2f(0.3,4);
glVertex2f(-4.5,3);
glVertex2f(-5.5,4);
glEnd();
}

void headmudk()
{
glPushMatrix();
glColor3f(1,0.7,0.5);
glutSolidSphere(2.7, 50, 50);
glPopMatrix();
}
void Draw()
{
sky();

glPushMatrix();
glTranslatef(a,b,0);
sun();
glPopMatrix();

glPushMatrix();
glTranslatef(x,y,0);
glScalef(6,1.6,0);
sun();
glPopMatrix();

sea();

glPushMatrix();
glTranslatef(0,re,0);
reflection();
glPopMatrix();

chair();
umbrella();

//bird
glPushMatrix();
glTranslatef(-6, 25, 0);
glScalef(6.6,6,0);
bird();
glPopMatrix();

glPushMatrix();
glTranslatef(14, 23, 0);
glScalef(6.6,6,0);
bird();
glPopMatrix();

glPushMatrix();
glTranslatef(9.45, 30.4, 0);
glScalef(6.6,6,0);
bird();
glPopMatrix();

glPopMatrix();
glPushMatrix();
glTranslatef(4.15, 28, 0);
glScalef(6.6,6,0);
bird();
glPopMatrix();

glPushMatrix();
glTranslatef(-1.30, 30.2, 0);
glScalef(5.6,6,0);
bird();
glPopMatrix();

glPushMatrix();//steamer
glTranslatef(a1,6.8,0);
Steamer();
glPopMatrix();

glPushMatrix();//steam
glTranslatef(a1,6.8,0);
steam();
glPopMatrix();

//hide
glPushMatrix();
glTranslatef(xa,0,0);

//child
glPushMatrix();
glTranslatef(-59,-10,0);
head();
glPopMatrix();


glPushMatrix();
glTranslatef(-72.5,-12.8,0);
hair();
glPopMatrix();

glPushMatrix();
glTranslatef(-72.5,-12.8,0);
body();
glPopMatrix();

glPushMatrix();
glTranslatef(-63,-20,0);
hand();
glPopMatrix();

glPushMatrix();
glTranslatef(-55.9,-20,0);
hand();
glPopMatrix();

glPushMatrix();
glTranslatef(-60,-32.5,0);
hand();
glPopMatrix();

glPushMatrix();
glTranslatef(-72,-17.6,0);
body2();
glPopMatrix();

glPushMatrix();
glTranslatef(-65,-31.5,0);
head2();
glPopMatrix();

glPushMatrix();
glTranslatef(-60,b1,0);
ball();
glPopMatrix();

//sarfingkid1
glPushMatrix();
glTranslatef(-4,-40.8,0);
sarfingkid1();
glPopMatrix();

glPushMatrix();
glTranslatef(-33.5,-28,0);
sarfhair();
glPopMatrix();

glPushMatrix();
glTranslatef(-33.5,-29.2,0);
sarfhead();
glPopMatrix();

glPushMatrix();
glTranslatef(-34.5,-28,0);
glScalef(.1,.1,0);
sarfhair();
glPopMatrix();

glPushMatrix();
glTranslatef(-32.3,-28,0);
glScalef(.1,.1,0);
sarfhair();
glPopMatrix();

glPushMatrix();
glTranslatef(-33.5,-29,0);
glScalef(.05,.3,0);
sarfhair();
glPopMatrix();

glPushMatrix();
glTranslatef(-33.5,-30.2,0);
glScalef(.3,.03,0);
sarfhair();
glPopMatrix();

glPushMatrix();
glTranslatef(-32,-72,0);
glRotatef(-85,0,0, 1.0);
sarfboat();
glPopMatrix();

glPushMatrix();
glTranslatef(-27,-38,0);
glScalef(.35,.35,0);
sarfhead();
glPopMatrix();

glPushMatrix();
glTranslatef(-10,-33,0);
headmudk();
glPopMatrix();

glPushMatrix();
glTranslatef(-3,-40,0);
mudgirl();
glPopMatrix();

glPushMatrix();
glTranslatef(sa,20,0);
glRotatef(-15,0,0, 1.0);
glScalef(.45,.45,0);
sarfing();
glPopMatrix();

glPopMatrix();
//hiding end

glPushMatrix();
glTranslatef(ha,0,0);
glPushMatrix();//human
glTranslatef(10,m1,0);
human();
glPopMatrix();
glPopMatrix();

glPushMatrix();
glTranslatef(-3,-40.2,0);
mudhouse();
glPopMatrix();

glPushMatrix();
glTranslatef(-3,f1,0);
flag();
glPopMatrix();

glPushMatrix();
glTranslatef(mg,0,0);
glPushMatrix();
glTranslatef(-11,-33,0);
mudgirlenl();
glPopMatrix();
glPopMatrix();

glFlush();
}
void Initialize()
{
glClearColor(0, 0, 0, 1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glOrtho(-80,80,-55,45,-160,160);
}

void keyDisplayAnimationDay(){
    mg=0;
rr=1,rg=0.8,rb=0.4;re=0;
     x = -1000;
    y = 1000;
    a=0,b=0;
    xa =0;
    ha=-10;

    //sky
sr=0, sg=.7, sb=1;
sr1=0, sg1=.3, sb1=.9;
sr2=1, sg2=1, sb2=1;
//sun
snr=1, sng=.6, snb=.1;
snr1=1, sng1=.7, snb1=0;
snr2=1, sng2=0.8, snb2=0.4;
snr3=1, sng3=.9, snb3=.3;
snr4=1, sng4=1, snb4=0.2;

 //bird
br=0, bg=0, bb=0;
br1=.3, bg1=.4, bb1=.5;

//steamer
str=0.5, stg=0.5, stb=0.5;
str1=0.6, stg1=0, stb1=0.2;
str2=0.7, stg2=0.7, stb2=0.9;
str3=0.9, stg3=1, stb3=1;

//sea
ser=0,seg=0.85,seb=0.9;
ser2=0.1,seg2=0.7,seb2=1;

//seashore
ssr=0.8,ssg=0.8,ssb=0.8;
ssr1=0.9,ssg1=0.8,ssb1=.7;
ssr2=0.8,ssg2=0.7,ssb2=.5;

//chair
cr=1,cg=0.3,cb=0.2;
cr1=1,cg1=0.5,cb1=.1;

//drinks
dr=0,dg=1,db=0.2;


 //human
 hr1=1, hg1=.7, hb1=.5;
hr2=1, hg2=0, hb2=0;
 hr3=0.8, hg3=.9, hb3=.1;


glutPostRedisplay();
}

void keyDisplayAnimationNight(){
    mg=-150;
    re=0;
rr=1,rg=1,rb=1;
xa=-250;
    x = -1000;
    y = 1000;
     a=0,b=0;
     ha=-130;

//sky
sr=0, sg=0.2, sb=0.4;
sr1=0, sg1=0, sb1=0;
sr2=0.3, sg2=0.1, sb2=0.3;
//sun
snr=1, sng=1, snb=1;
snr1=1, sng1=1, snb1=1;
snr2=1, sng2=1, snb2=1;
snr3=1, sng3=1, snb3=1;
snr4=1, sng4=1, snb4=1;
//bird
br=0, bg=0, bb=0;
br1=0, bg1=0, bb1=0;
//steamer
str=0.3, stg=0.3, stb=0.3;
str1=0.6, stg1=0, stb1=0.2;
str2=0.5, stg2=0.2, stb2=0.6;
str3=1, stg3=1, stb3=0.5;
//sea
ser=0.1,seg=0.3,seb=1;
ser2=0,seg2=0.2,seb2=0.4;
//seashore
ssr=0.5,ssg=0.2,ssb=0.2;
ssr1=0.6,ssg1=0.3,ssb1=0;
ssr2=0.8,ssg2=0.4,ssb2=0;
//chair
cr=1,cg=0,cb=0;
cr1=1,cg1=0.3,cb1=0;
//drinks
dr=0,dg=.9,db=0.3;
//human
hr1=1, hg1=.7, hb1=.5;
hr2=1, hg2=0, hb2=0;
 hr3=0.8, hg3=.9, hb3=.1;


		glutPostRedisplay();
}

void keyDisplayAnimationEvening()
{mg=-150;
    re=150;//sky
xa=-250;
    a=1000;
    x=-110;
    y=-41;
    ha=0;
sr=0.8, sg=0.3, sb=0;
sr1=1, sg1=0.7, sb1=0.1;
sr2=0.5, sg2=0.5, sb2=0.6;
//sun
snr=0.8, sng=.3, snb=.1;
snr1=.8, sng1=.3, snb1=.1;
snr2=.8, sng2=.3, snb2=.1;
snr3=.8, sng3=.3, snb3=.1;
snr4=.8, sng4=.3, snb4=.1;
//bird
br=1, bg=1, bb=1;
br1=0, bg1=0, bb1=0;

str=0.35, stg=0.4, stb=0.4;
str1=0.8, stg1=0, stb1=0;
str2=0.5, stg2=0.3, stb2=0.5;
str3=0.1, stg3=0.3, stb3=0.4;
//sea
ser1=0.2,seg1=0,seb1=.4;
ser=0.9,seg=0.5,seb=0;

ssr=0.7,ssg=0.2,ssb=0.2;
ssr1=0.8,ssg1=0.3,ssb1=0;
ssr2=0.8,ssg2=0.4,ssb2=0;

cr=0.5,cg=0,cb=0;
cr1=1,cg1=0.3,cb1=0;

dr=0,dg=.9,db=0.3;

hr1=1, hg1=.7, hb1=.5;
hr2=1, hg2=0, hb2=0;
 hr3=0.8, hg3=.9, hb3=.1;

 glutPostRedisplay();
}



void my_keyboard(unsigned char key, int x, int y){
	switch(key){
	case 'd':
		keyDisplayAnimationDay();
		break;

	case 'n':
		keyDisplayAnimationNight();
		break;

		case'e':
		keyDisplayAnimationEvening();
		break;

	default:
		break;
	}
}

void my_mouse(int button,int state,int x,int y){

	switch(button){
	case GLUT_LEFT_BUTTON:
		if(state == GLUT_DOWN)
		glutIdleFunc(spinDisplay);
		break;
	case GLUT_MIDDLE_BUTTON:
	case GLUT_RIGHT_BUTTON:
		if(state == GLUT_DOWN)
			glutIdleFunc(NULL);
		break;
	default:
		break;
	}
}

int main(int Argc, char** Argv)
{
glutInit(&Argc, Argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize(1350,690);
glutInitWindowPosition(10,10);
glutCreateWindow("Cox Bazar");
Initialize();
glutDisplayFunc(Draw);
glutKeyboardFunc(my_keyboard);
glutMouseFunc(my_mouse);
glutIdleFunc(spinDisplay);
glutMainLoop();
return 0;
}

