#include <iostream>
#include <GL/glut.h>

void display();
void leftDoor();
void rightDoor();
void leftDoorKnob();
void rightDoorKnob();
void chimney();
void house();
void doorLines();
void lines();
void lines1();
void lines2();
void lines3();

int main(int argc, char** argv){
   glutInit(&argc, argv);
   glutCreateWindow("simple");
   glutDisplayFunc(display);
   glutMainLoop();
}

void display(){
	glClear(GL_COLOR_BUFFER_BIT);
		chimney();
		house();
		leftDoor();
		leftDoorKnob();
		rightDoor();
		rightDoorKnob();
		doorLines();
		lines();
		lines1();
		lines2();
		lines3();
		//hello
	
	glEnd(); 
  	glFlush();
}

void leftDoor(){
	glColor3f(0.28,0.24,0.8);
  	glLineWidth(2.0f);
  	glBegin(GL_POLYGON);
  		glVertex2f(0, -0.3);
  		glVertex2f(0, 0);
  		glVertex2f(-0.2, 0);
  		glVertex2f(-0.2, -0.3);
 	glEnd();
 	
}

void rightDoor(){
	glColor3f(0.28,0.24,0.8);
  	glLineWidth(2.0f);
  	glBegin(GL_POLYGON);
  		glVertex2f(0, -0.3);
  		glVertex2f(0, 0);
  		glVertex2f(0.2, 0);
  		glVertex2f(0.2, -0.3);
 	glEnd();
}

void leftDoorKnob(){
	glColor3f(0.3,0.6,0.2);
  	glLineWidth(2.0f);
  	glBegin(GL_POLYGON);
  		glVertex2f(-0.1, -0.2);
  		glVertex2f(-0.1, -0.15);
  		glVertex2f(-0.05, -0.15);
  		glVertex2f(-0.05, -0.2);
 	glEnd();
}

void rightDoorKnob(){
	glColor3f(0.3,0.6,0.2);
  	glLineWidth(2.0f);
  	glBegin(GL_POLYGON);
  		glVertex2f(0.1, -0.2);
  		glVertex2f(0.1, -0.15);
  		glVertex2f(0.05, -0.15);
  		glVertex2f(0.05, -0.2);
 	glEnd();
}

void chimney(){	
	glColor3f(1,0.7,1);
  	glLineWidth(2.0f);
  	glBegin(GL_POLYGON);
  		glVertex2f(-0.25, 0.3);
  		glVertex2f(-0.25, 0.7);
  		glVertex2f(-0.12, 0.7);
  		glVertex2f(-0.12, 0.3);
  		
 	glEnd();
}

void house(){
	glColor3f(0.6,0.4,0.3);
  	glLineWidth(2.0f);
  	glBegin(GL_POLYGON);
  		glVertex2f(-0.3, -0.3);
  		glVertex2f(-0.3, 0.3);
  		glVertex2f(0, 0.7);
 		glVertex2f(0.3, 0.3);
 		glVertex2f(0.3, -0.3);
 	glEnd();
}

void doorLines(){
	glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
	glLineWidth(3.0f);
	glBegin(GL_LINE_LOOP);
 		glVertex2f(-0.2, -0.3);
 		glVertex2f(-0.2, 0);
 		glVertex2f(0.2, 0);
 		glVertex2f(0.2, -0.3);
 		glVertex2f(-0.2, -0.3);
 	glEnd();
}

void lines(){
	glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
	glLineWidth(3.0f);
	glBegin(GL_LINES);
 		glVertex2f(0, 0);
 		glVertex2f(0, -0.3);
 	glEnd();
}

void lines1(){
	glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
	glLineWidth(3.0f);
	glBegin(GL_LINE_LOOP);
 		glVertex2f(-0.1, -0.2);
  		glVertex2f(-0.1, -0.15);
  		glVertex2f(-0.05, -0.15);
  		glVertex2f(-0.05, -0.2);
  	glEnd();
}

void lines2(){
	glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
	glLineWidth(3.0f);
	glBegin(GL_LINE_LOOP);
  		glVertex2f(0.1, -0.2);
  		glVertex2f(0.1, -0.15);
  		glVertex2f(0.05, -0.15);
  		glVertex2f(0.05, -0.2);
 	glEnd();
}

void lines3(){
	glColor4f(0.0f, 0.0f, 0.0f, 0.0f);
	glLineWidth(3.0f);
	glBegin(GL_LINE_LOOP);
  		glVertex2f(-0.3, -0.3);
  		glVertex2f(-0.3, 0.3);
  		glVertex2f(0, 0.7);
 		glVertex2f(0.3, 0.3);
 		glVertex2f(0.3, -0.3);
 	glEnd();
}
