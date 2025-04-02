#include <GL/glut.h>

void Display(void)
{

}

int main (int argc, char *argv[]) 
{
    glutInit (argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (250, 250);
    glutInitWindowPosition (100, 100);
    glutCreateWindow("App-Linux");
    init ();
    glutDisplayFunc(Display);
    glutReshapeFunc(reshapeCallback );
    /* Registro de outras rotinas callback */
    glutMainLoop();
    return 0;
}