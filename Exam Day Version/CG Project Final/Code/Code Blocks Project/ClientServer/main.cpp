#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif


#include<stdio.h>
//#include<GLUT/glut.h>
#include<string.h>
#include<stdlib.h>
#define monitor 1
#define upbox 2
#define boxbuses 3
#define fi 3
#define keys 5
float x=-18,y=34;
int i,flag=0,w=0,q=5,r=0,s=0,u=0;
float tr=0.0,t=0.0,t2=0.0,t3=0.0,t4=0.0,t1=0.0,t5=0.0;
float tr1=0.0;
float tr2=0.0;
float tr3=0.0;
float tr4=0.0;
float tr5=0.0;
void animated();
void anim();

void textures()
{
        //Simulation Heading
        char simulation[50]="CLIENT SERVER SIMULATION USING OPENGL";
        int len_simulation=strlen(simulation);
        glColor3f(1.0,0.0,0.0);
        glRasterPos3f(-25.0,47,0.0);
        for(i=0;i<len_simulation;i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,simulation[i]);


        //Client
        char client[20]="CLIENT";
        int len_client=strlen(client);
        glColor3f(1.0,0.0,0.0);
        glRasterPos3f(-27.0,41,0.0);
        for(i=0;i<len_client;i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,client[i]);

         //Server
        char server[20]="SERVER ";
        int len_server=strlen(server);
        glColor3f(1.0,0.0,0.0);
        glRasterPos3f(27,40,0.0);
        for(i=0;i<len_server;i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,server[i]);

        //www.google.com
        char google[30] = "(www.google.com)";
        int len_google=strlen(google);
        glColor3f(1.0,0.0,0.0);
        glRasterPos3f(23,38,0.0);
        for(i=0;i<len_google;i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,google[i]);

        //Client Socket
        char clientsoc[20] ="CLIENT";
        int len_clientsoc=strlen(clientsoc);
        glColor3f(1.0,0.0,0.0);
        glRasterPos3f(-30.0,-2.0,0.0);
        for(int i=0;i<len_clientsoc;i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,clientsoc[i]);
        char csocket[20] ="SOCKET";
        int len_csocket=strlen(csocket);
        glColor3f(1.0,0.0,0.0);
        glRasterPos3f(-30.5,-4.0,0.0);
        for(int i=0;i<len_csocket;i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,csocket[i]);

        //Server Socket
        char serversoc[20] ="SERVER";
        int len_serversoc=strlen(serversoc);
        glColor3f(1.0,0.0,0.0);
        glRasterPos3f(24.5,-2.0,00.0);
        for(i=0;i<len_serversoc;i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,serversoc[i]);
        char ssocket[20] ="SOCKET";
        int len_ssocket=strlen(ssocket);
        glColor3f(1.0,0.0,0.0);
        glRasterPos3f(24.0,-4.0,00.0);
        for(i=0;i<len_ssocket;i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,ssocket[i]);

        /*
         //Transmitter
        char transmitter[20]="TRANSMITTER";
        int len_transmitter=strlen(transmitter);
        glColor3f(1.0,0.0,0.0);
        glRasterPos3f(-33.0,-38,0.0);
        for(i=0;i<len_transmitter;i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,transmitter[i]);

        //Reciever
        char reciever[20]="RECEIVER";
        int len_reciever=strlen(reciever);
        glColor3f(1.0,0.0,0.0);
        glRasterPos3f(23.5,-38,00.0);
        for(i=0;i<len_reciever;i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,reciever[i]);
        */

        //Client Host
        char clienth[20] ="CLIENT";
        int len_clienth=strlen(clienth);
        glColor3f(1.0,0.0,0.0);
        glRasterPos3f(-30,-37,0.0);
        for(int i=0;i<len_clienth;i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,clienth[i]);
        char chost[20] ="HOST";
        int len_chost=strlen(chost);
        glColor3f(1.0,0.0,0.0);
        glRasterPos3f(-29.5,-39.0,0.0);
        for(int i=0;i<len_chost;i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,chost[i]);


        //Server Host
        char serverh[20] ="SERVER";
        int len_serverh=strlen(serverh);
        glColor3f(1.0,0.0,0.0);
        glRasterPos3f(24.5,-37,0.0);
        for(int i=0;i<len_serverh;i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,serverh[i]);
        char shost[20] ="HOST";
        int len_shost=strlen(shost);
        glColor3f(1.0,0.0,0.0);
        glRasterPos3f(25.5,-39.0,0.0);
        for(int i=0;i<len_shost;i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,shost[i]);

        glFlush();
}

//this is for the request connection
void ctrline()
{
        glLineWidth(2.0);
        glBegin(GL_LINES);
        glVertex3f(-22,34.0,10.0);
        glVertex3f(-20,34.0,10.0);
        glEnd();

}
//data packets to be sent from client to server

void file()
{
        glNewList(fi,GL_COMPILE_AND_EXECUTE);
        glBegin(GL_POLYGON);
        glColor3f(1.0,1.0,1.0);
        glVertex2f(-17.5,31.5);
        glVertex2f(-17.5,34.5);
        glVertex2f(-16.0,34.5);
        glVertex2f(-16.0,31.5);
        glEnd();
        glBegin(GL_LINES);
        glColor3f(1.0,0.0,0.0);
        glVertex2f(-16.3,32);
        glVertex2f(-17.3,32);
        glEnd();
        glBegin(GL_LINES);
        glColor3f(0.0,1.0,0.0);
        glVertex2f(-16.3,33);
        glVertex2f(-17.2,33);
        glEnd();
        glBegin(GL_POINTS);
        glPointSize(50.0);
        glColor3f(0.0,0.0,1.0);
        glVertex2f(-16.3,34);
        glVertex2f(-17.3,34);
        glEnd();
        glEndList();

}
void disp()
{
        //left side cpu........
        glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.1);
        glVertex3f(-27.0,15.0,0.0);
        glVertex3f(-19.0,15.0,0.0);
        glVertex3f(-19.0,40.0,0.0);
        glVertex3f(-27.0,40.0,0.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.0,2.0,4.0);
        glVertex3f(-30.0,12.0,3.0);
        glVertex3f(-22.0,12.0,3.0);
        glVertex3f(-19.0,15.0,0.0);
        glVertex3f(-27.0,15.0,0.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.2,0.4,0.0);
        glVertex3f(-30.0,12.0,3.0);
        glVertex3f(-26.0,15.0,0.0);
        glVertex3f(-26.0,40.0,0.0);
        glVertex3f(-30.0,37.0,3.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex3f(-22.0,12.0,3.0);
        glVertex3f(-22.0,37.0,3.0);
        glVertex3f(-19.0,40.0,0.0);
        glVertex3f(-19.0,15.0,0.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.3,0.3,0.3);
        glVertex3f(-30.0,37.0,3.0);
        glVertex3f(-22.0,37.0,3.0);
        glVertex3f(-19.0,40.0,0.0);
        glVertex3f(-27.0,40.0,0.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex3f(-30.0,12.0,3.0);
        glVertex3f(-22.0,12.0,3.0);
        glVertex3f(-22.0,37.0,3.0);
        glVertex3f(-30.0,37.0,0.0);
        glEnd();
        glBegin(GL_LINES);
        glColor3f(0.8,0.7,0.6);
        glVertex3f(-23.0,33.0,3.0);
        glVertex3f(-23.0,32.5,3.0);
        glVertex3f(-23.0,32.5,3.0);
        glVertex3f(-23.5,32.5,3.0);
        glVertex3f(-23.5,32.5,3.0);
        glVertex3f(-23.5,33.0,3.0);
        glVertex3f(-23.5,33.0,3.0);
        glVertex3f(-23.0,33.0,3.0);
        glEnd();
        glBegin(GL_LINES);
        glColor3f(0.7,0.63,0.84);
        glVertex3f(-29.0,35.0,3.0);
        glVertex3f(-23.0,35.0,3.0);
        glVertex3f(-23.0,35.0,3.0);
        glVertex3f(-23.0,34.0,3.0);
        glVertex3f(-23.0,34.0,3.0);
        glVertex3f(-29.0,34.0,3.0);
        glVertex3f(-29.0,34.0,3.0);
        glVertex3f(-29.0,35.0,3.0);
        glEnd();
        glBegin(GL_LINES);
        glColor3f(0.7,0.6,0.8);
        glVertex3f(-26.0,19.0,3.0);
        glVertex3f(-27.0,19.0,3.0);
        glVertex3f(-27.0,19.0,3.0);
        glVertex3f(-27.0,18.0,3.0);
        glVertex3f(-27.0,18.0,3.0);
        glVertex3f(-26.0,18.0,3.0);
        glVertex3f(-26.0,18.0,3.0);
        glVertex3f(-26.0,19.0,3.0);
        glEnd();
        glBegin(GL_LINES);
        glColor3f(0.5,0.7,0.8);
        glVertex3f(-22.0,12.0,3.0);
        glVertex3f(-22.0,37.0,3.0);
        glVertex3f(-22.0,37.0,3.0);
        glVertex3f(-19.0,40.0,3.0);
        glVertex3f(-19.0,40.0,3.0);
        glVertex3f(-19.0,15.0,3.0);
        glVertex3f(-19.0,15.0,3.0);
        glVertex3f(-22.0,12.0,3.0);
        glEnd();
        glBegin(GL_LINES);
        glColor3f(0.5,0.7,0.8);
        glVertex3f(-30.0,37.0,3.0);
        glVertex3f(-22.0,37.0,3.0);
        glVertex3f(-22.0,37.0,3.0);
        glVertex3f(-19.0,40.0,3.0);
        glVertex3f(-19.0,40.0,3.0);
        glVertex3f(-27.0,40.0,3.0);
        glVertex3f(-27.0,40.0,3.0);
        glVertex3f(-30.0,37.0,3.0);
        glEnd();
        glBegin(GL_LINES);
        glColor3f(0.5,0.7,0.8);
        glVertex3f(-30.0,12.0,3.0);
        glVertex3f(-22.0,12.0,3.0);
        glVertex3f(-22.0,12.0,3.0);
        glVertex3f(-22.0,37.0,3.0);
        glVertex3f(-22.0,37.0,3.0);
        glVertex3f(-30.0,37.0,3.0);
        glVertex3f(-30.0,37.0,3.0);
        glVertex3f(-30.0,12.0,3.0);
        glEnd();
        //cpu ends.......
        glNewList(monitor,GL_COMPILE_AND_EXECUTE);
        glBegin(GL_POLYGON);
        glColor3f(0.7,0.65,0.83); //stand
        glVertex3f(-43.50,26.0,-10.0);
        glVertex3f(-43.50,23.0,-10.0);
        glVertex3f(-40.0,23.0,-10.0);
        glVertex3f(-40.0,26.0,-10.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.2,0.3,.4); //stand
        glVertex2f(-44.5,23.0);
        glVertex2f(-39.0,23.0);
        glVertex2f(-39.0,22.0);
        glVertex2f(-44.5,22.0);
        glEnd();
        glBegin(GL_QUAD_STRIP);
        glColor3f(0.2,0.3,0.4);
        glVertex2f(-48.0,25.0);
        glVertex2f(-36.0,25.0);
        glVertex2f(-36.0,38.5);
        glVertex2f(-48.0,38.5);
        glVertex2f(-48.0,38.5);
        glVertex2f(-48.0,25.0);
        glVertex2f(-36.0,38.5);
        glVertex2f(-36.0,25.0);
        glEnd();

        glBegin(GL_POLYGON); //monitor
        glColor3f(0.6,0.73,0.83);
        glVertex2f(-47.0,26.0);
        glVertex2f(-37.0,26.0);
        glVertex2f(-37.0,38.0);
        glVertex2f(-47.0,38.0);
        glEnd();


        //SCREEN
        glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.3);
        glVertex2f(-46.5,27.0);
        glVertex2f(-37.5,27.0);
        glVertex2f(-37.5,37.0);
        glVertex2f(-46.5,37.0);
        glEnd();
        glEndList();
        //server starts.....................
        glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.1);
        glVertex3f(25.0,20.0,0.0);
        glVertex3f(40.0,17.0,0.0);
        glVertex3f(40.0,42.0,0.0);
        glVertex3f(25.0,45.0,0.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.2,0.4,0.0);
        glVertex3f(25.0,20.0,0.0);
        glVertex3f(40.0,17.0,0.0);
        glVertex3f(20.0,15.0,5.0);
        glVertex3f(35.0,12.0,5.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(1.0,0.4,0.4);
        glVertex3f(25.0,20.0,0.0);
        glVertex3f(25.0,45.0,0.0);
        glVertex3f(20.0,40.0,5.0);
        glVertex3f(20.0,15.0,5.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex3f(20.0,40.0,5.0);
        glVertex3f(25.0,45.0,0.0);
        glVertex3f(20.0,40.0,5.0);
        glVertex3f(20.0,15.0,5.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex3f(20.0,40.0,5.0);
        glVertex3f(25.0,45.0,0.0);
        glVertex3f(40.0,42.0,0.0);
        glVertex3f(35.0,37.0,5.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex3f(35.0,12.0,5.0);
        glVertex3f(35.0,37.0,5.0);
        glVertex3f(40.0,42.0,0.0);
        glVertex3f(40.0,17.0,0.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.0,0.0,0.0);
        glVertex3f(20.0,15.0,5.0);
        glVertex3f(35.0,12.0,5.0);
        glVertex3f(35.0,37.0,5.0);
        glVertex3f(20.0,40.0,5.0);
        glEnd();
        //lines at the front and side
        glBegin(GL_POLYGON);
        glColor3f(0.3,0.3,0.3);
        glVertex3f(20.0,40.0,5.0);
        glVertex3f(20.0,37.0,5.0);
        glVertex3f(35.0,34.0,5.0);
        glVertex3f(35.0,37.0,5.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.3,0.3,0.3);
        glVertex3f(40.0,39.0,0.0);
        glVertex3f(40.0,42.0,0.0);
        glVertex3f(35.0,37.0,5.0);
        glVertex3f(35.0,34.0,5.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.3,0.3,0.3);
        glVertex3f(20.0,36.0,5.0);
        glVertex3f(20.0,33.0,5.0);
        glVertex3f(35.0,30.0,5.0);
        glVertex3f(35.0,33.0,5.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.3,0.3,0.3);
        glVertex3f(40.0,38.0,0.0);
        glVertex3f(40.0,35.0,0.0);
        glVertex3f(35.0,30.0,5.0);
        glVertex3f(35.0,33.0,5.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.3,0.3,0.3);
        glVertex3f(20.0,32.0,5.0);
        glVertex3f(20.0,29.0,5.0);
        glVertex3f(35.0,26.0,5.0);
        glVertex3f(35.0,29.0,5.0);
        glEnd();

        glBegin(GL_POLYGON);
        glColor3f(0.3,0.3,0.3);
        glVertex3f(40.0,31.0,0.0);
        glVertex3f(40.0,34.0,0.0);
        glVertex3f(35.0,29.0,5.0);
        glVertex3f(35.0,26.0,5.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.3,0.3,0.3);
        glVertex3f(20.0,28.0,5.0);
        glVertex3f(20.0,25.0,5.0);
        glVertex3f(35.0,22.0,5.0);
        glVertex3f(35.0,25.0,5.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.3,0.3,0.3);
        glVertex3f(40.0,27.0,0.0);
        glVertex3f(40.0,30.0,0.0);
        glVertex3f(35.0,25.0,5.0);
        glVertex3f(35.0,22.0,5.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.3,0.3,0.3);
        glVertex3f(20.0,24.0,5.0);
        glVertex3f(20.0,21.0,5.0);
        glVertex3f(35.0,18.0,5.0);
        glVertex3f(35.0,21.0,5.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.3,0.3,0.3);
        glVertex3f(40.0,23.0,0.0);
        glVertex3f(40.0,26.0,0.0);
        glVertex3f(35.0,21.0,5.0);
        glVertex3f(35.0,18.0,5.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.3,0.3,0.3);
        glVertex3f(20.0,20.0,5.0);
        glVertex3f(20.0,15.0,5.0);
        glVertex3f(35.0,12.0,5.0);
        glVertex3f(35.0,17.0,5.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.3,0.3,0.3);
        glVertex3f(40.0,17.0,0.0);
        glVertex3f(40.0,22.0,0.0);
        glVertex3f(35.0,17.0,5.0);
        glVertex3f(35.0,12.0,5.0);
        glEnd();
        //Buses
        glEnable(GL_BLEND);
        glColor4f(0.6,0.7,0.8,0.6);
        glBegin(GL_QUAD_STRIP);
        glVertex2f(-19.0,35.0);
        glVertex2f(-19.0,33.0);
        glVertex2f(20.0,35.0);
        glVertex2f(20.0,33.0);
        glEnd();
        glBegin(GL_QUAD_STRIP);
        glVertex2f(-19.0,16.0);
        glVertex2f(-19.0,20.0);
        glVertex2f(20.0,16.0);
        glVertex2f(20.0,20.0);
        glEnd();
        glDisable(GL_BLEND);
        //server ends


        //upbox
        glNewList(upbox,GL_COMPILE_AND_EXECUTE);
        glBegin(GL_POLYGON);
        glColor3f(0.6,0.5,0.4);
        glVertex3f(25.0,2.0,0.0);
        glVertex3f(25.0,-3.0,0.0);
        glVertex3f(35.0,-3.0,0.0);
        glVertex3f(35.0,2.0,0.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(0.4,0.5,0.3);
        glVertex3f(23.0,-5.0,5.0);
        glVertex3f(33.0,-5.0,5.0);
        glVertex3f(25.0,-3.0,0.0);
        glVertex3f(25.0,-3.0,5.0);
        glEnd();
        glBegin(GL_POLYGON);
        //change here
        glColor3f(1.0,1.0,0.0);
        glVertex3f(25.0,2.0,0.0);
        glVertex3f(25.0,-3.0,0.0);
        glVertex3f(23.0,-5.0,5.0);
        glVertex3f(23.0,0.0,5.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(1.0,1.0,0.0);
        //glColor3f(0.7,0.8,0.6);
        glVertex3f(23.0,0.0,5.0);
        glVertex3f(33.0,0.0,5.0);
        glVertex3f(35.0,2.0,0.0);
        glVertex3f(25.0,2.0,0.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(1.0,1.0,0.0);
        //glColor3f(0.7,0.7,0.6);
        glVertex3f(33.0,0.0,5.0);
        glVertex3f(33.0,-5.0,5.0);
        glVertex3f(35.0,-3.0,0.0);
        glVertex3f(35.0,2.0,5.0);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3f(1.0,1.0,0.0);
        //glColor3f(0.3,0.5,0.4);
        glVertex3f(23.0,-5.0,5.0);
        glVertex3f(33.0,-5.0,5.0);
        glVertex3f(33.0,0.0,5.0);
        glVertex3f(23.0,0.0,5.0);
        glEnd();
        glEndList();
        glPushMatrix();
        glScalef(0.0,0.5,0.0);
        glCallList(2);
        glPopMatrix();
        glPushMatrix();
        glTranslatef(-55.0,0.0,0.0);
        glCallList(2);
        glPopMatrix();
        glPushMatrix();
        glTranslatef(-55.0,-35.0,0.0);
        glCallList(2);
        glPopMatrix();
        glPushMatrix();
        glTranslatef(0.0,-35.0,0.0);
        glCallList(2);
        glPopMatrix();

        //buses for boxes
        glNewList(boxbuses,GL_COMPILE_AND_EXECUTE);
        glEnable(GL_BLEND);
        //glColor4f(0.6,0.7,0.8,0.5);
        glColor3f(0.0,0.0,0.0);
        glBegin(GL_QUAD_STRIP);
        glVertex2f(-22.0,-1.0);
        glVertex2f(-22.0,-5.0);
        glVertex2f(23.0,-1.0);
        glVertex2f(23.0,-5.0);
        glEnd();
        glDisable(GL_BLEND);
        glEndList();
        glPushMatrix();
        glTranslatef(0.0,-35.0,0.0);
        glCallList(3);
        glPopMatrix();


}
void display()
{
        glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
        //glRotatef(90,1.0,1.0,1.0);
        glPushMatrix();
        glColor3f(1.0,1.0,0.0);
        glTranslatef(0.0+tr,0.0,10.0);
        ctrline();
        glPopMatrix();
        glPushMatrix();
        glColor3f(0.0,1.0,0.0);
        glTranslatef(47.0-tr1,0.0,10.0);
        ctrline();
        glPopMatrix();
        glPushMatrix();
        glColor3f(1.0,0.0,1.0);
        glTranslatef(-3.0+tr2,-15.0,10.0);
        file();
        glPopMatrix();
        glPushMatrix();
        glTranslatef(-5.0+tr2,-15.0,0.0);
        glCallList(fi);
        glPopMatrix();
        glPushMatrix();
        glTranslatef(-7.0+tr2,-15.0,0.0);
        glCallList(fi);
        glPopMatrix();
        glPushMatrix();
        glTranslatef(-9.0+tr2,-15.0,0.0);
        glCallList(fi);
        glPopMatrix();
        glLineWidth(.1);




        //Retrieve Data
        if(flag==1)
        {
            glPushMatrix();
            glTranslatef(-5.0+t,-36.5,0.0);
            glColor3f(1.0,1.0,1.0);
            ctrline();
            glPopMatrix();
            glPushMatrix();
            glTranslatef(41.0-t1,-71,0.0);
            glCallList(fi);
            glPopMatrix();
            glPushMatrix();
            if(flag==1 && r<5)r++;
            glTranslatef(r,r,0);
            char retr[10]="RETR";
            int len_retr=strlen(retr);
            glColor3f(1.0,0.0,0.0);
            glRasterPos3f(-5,-2,0.0);
            for(int i=0;i<len_retr;i++)
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,retr[i]);
            glPopMatrix();

        //glutIdleFunc(animated);
        //glutIdleFunc(animated);
        }


        //Store Data
        if(flag==2)
        {
            glPushMatrix();
            glTranslatef(-6.0+t2,-36.5,0.0);
            glColor3f(1.0,1.0,1.0);
            ctrline();
            glPopMatrix();
            glPushMatrix();
            glTranslatef(-5+t3,-71,0.0);
            glCallList(fi);
            glPopMatrix();
            glPushMatrix();
            if(flag==2 && s<5) s++;
            glTranslatef(s,s,0);
            char store[10]="STR";
            int len_store=strlen(store);
            glColor3f(1.0,0.0,0.0);
            glRasterPos3f(-5,-2,0.0);
            for(i=0;i<len_store;i++)
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,store[i]);
            glPopMatrix();

        //glutIdleFunc(animate);
        }
        //List Data
        if(flag==3)
        {
            glPushMatrix();
            glTranslatef(-4.0+t4,-36.5,0.0);
            glColor3f(1.0,1.0,1.0);
            ctrline();
            glPopMatrix();
            glPushMatrix();
            glTranslatef(41.0-t5,-71,0.0);
            glCallList(fi);
            glPopMatrix();
            glPushMatrix();
            if(flag==3 && u<5) u++;
            glTranslatef(u,u,0);
            char list_data[10]="LIST";
            int len_list_data=strlen(list_data);
            glColor3f(1.0,0.0,0.0);
            glRasterPos3f(-5,-2,0.0);
            for(int i=0;i<len_list_data;i++)
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,list_data[i]);
            glPopMatrix();
        //glutIdleFunc(animate);
        }

        //glEnable(GL_BLEND);
        disp();
        //glDisable(GL_BLEND);
        textures();
        if(tr1>=48)
        {
            char data[10]="DATA";
            int len_data=strlen(data);
            glColor3f(1.0,0.0,0.0);
            glRasterPos3f(-46,32,0.0);
            for(int i=0;i<len_data;i++)
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,data[i]);
        //textures("DATA SENT",-45,32,0.0,);
        }
        if(tr2>=48)
        {
            char datasent[20]="DATA SENT";
            int len_datasent=strlen(datasent);
            glColor3f(1.0,0.0,0.0);
            glRasterPos3f(-46,32,0.0);
            for(int i=0;i<len_datasent;i++)
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,datasent[i]);
        //textures("DATA SENT",-45,32,0.0,);
        }

        //To display Retrieving Data
         if(flag==1)
        {
            char datarecv[20]="RECEIVING DATA";
            int len_datarecv=strlen(datarecv);
            glColor3f(1.0,0.0,0.0);
            glRasterPos3f(-46,30,0.0);
            for(int i=0;i<len_datarecv;i++)
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,datarecv[i]);
        }


         //To display Storing Data
         if(flag==2)
        {
            char datastr[20]="STORING DATA";
            int len_datastr=strlen(datastr);
            glColor3f(1.0,0.0,0.0);
            glRasterPos3f(-46,30,0.0);
            for(int i=0;i<len_datastr;i++)
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,datastr[i]);
        }


         //To display Listing Data
        if(flag==3)
        {
            char datalist[20]="LISTING DATA";
            int len_datalist=strlen(datalist);
            glColor3f(1.0,0.0,0.0);
            glRasterPos3f(-46,30,0.0);
            for(int i=0;i<len_datalist;i++)
            glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,datalist[i]);

        }

        //glPopMatrix();
        glPushMatrix();

        if(w<5) w++;
        glTranslatef(w,w,0);
        char commands[50]="COMMAND FROM CLIENT TO SERVER";
        int len_commands=strlen(commands);
        glColor3f(1.0,0.0,0.0);
        glRasterPos3f(-18,34,0.0);
        for(int i=0;i<len_commands;i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,commands[i]);
        glPopMatrix();
        glPushMatrix();
        if(tr>=43 && w>=5 && q>2)q--;
        glTranslatef(q,q,0);
        char response[50]=" RESPONSE FROM SERVER TO CLIENT";
        int len_response=strlen(response);
        glColor3f(1.0,0.0,0.0);
        glRasterPos3f(-9,26,0.0);
        for(i=0;i<len_response;i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12,response[i]);
        glPopMatrix();
        glutSwapBuffers();
        glFlush();



        }


void init()
{
        //glClearColor(0.5,1.0,1.0,0.0);
        //glClearColor(0.76,0.03,0.03,0.0);
        glClearColor(0,1,0,0.0);
        glOrtho(-50,50,-50,50,-50,50);
        //gluOrtho2D(0,500,0,500);
        }
        void animate()
        {
        if(tr<48)
        tr+=0.2;
        else if(tr>=48 && tr1<48)
        tr1+=0.2;
        else if(tr1>=48 && tr2<48)
        tr2+=0.1;
        else if(tr2>=48 && tr3<48)
        tr3+=0.1;
        glutPostRedisplay();
}


void anim()
{
        if(t<53)
        t+=0.2;
        else if(t>=53 && t1<53)
        t1+=0.2;
        //S T O R E
        else if(t2<53)
        t2+=0.2;
        else if(t2>=53 && t3<53)
        t3+=0.2;
        //L I S T
        else if(t4<53)
        t4+=0.2;
        else if(t4>=53 && t5<53)
        t5+=0.2;
        glutPostRedisplay();
}


void mymenu(int id)
{
        switch(id)
        {
            case 1: glutIdleFunc(animate);
                    break;

            case 2:flag=1;
                    glutIdleFunc(anim);
                    break;

            case 3: flag=2;
                    glutIdleFunc(anim);
                    break;

            case 4: flag=3;
                    glutIdleFunc(anim);
                    break;

            case 5:exit(0);

        }
}


int main(int argc,char **argv)
{
        glutInit(&argc,argv);
        glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB |GLUT_DEPTH);
        glutInitWindowSize(1000,1000);
        glutInitWindowPosition(0,0);
        glutCreateWindow("CLIENT SERVER SIMULATION");
        glutDisplayFunc(display);
        //glRotatef(90,1,0,0);
        // To make full sceen
        //glutFullScreen();
        glutCreateMenu(mymenu);
        glutAddMenuEntry(" 1 : START SIMULATION",1);
        glutAddMenuEntry(" 2 : RETRIVE DATA",2);
        glutAddMenuEntry(" 3 : STORE DATA",3);
        glutAddMenuEntry(" 4 : LIST DATA",4);
        glutAddMenuEntry(" 5 : EXIT SIMULATION",5);
        glutAttachMenu(GLUT_RIGHT_BUTTON);
        glBlendFunc(GL_SRC_ALPHA,GL_DST_ALPHA);
        init();
        glutMainLoop();
        return 0;
}
