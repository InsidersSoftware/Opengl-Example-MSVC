#include <GL/glew.h>
#include <GL/freeglut.h> //You Can Use glut.h
#include <GL/gl.h>

//To Display What To Render In The Window
void display()
{

}

//The Main Function
int main(int argc, char** argv)
{
	glutInit(&argc, argv); //Init The Glut In The Main Function
	glutInitWindowSize(500, 500); //Adjust The Window Size
	glutInitWindowPosition(100, 100); //Adjust The Window Positon On The Screen.
	glutCreateWindow("Example-Opengl"); //Create The Window Context

	glutMainLoop(); //Loop The Event
	return 0;
}