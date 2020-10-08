#include <GL/glut.h>
#include"cenario.h"
#include"funcoes.h"






int main(int argc, char *argv[])
{
       glutInit(&argc, argv);
       //glutInitDisplayMode(GLUT_SINGLE);
       glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
       glutInitWindowSize(700, 700);
       glutInitWindowPosition(300, 300);
       glutCreateWindow("Maquete");

       glClearColor(0.25, 0.41, 0.88, 0.0);
       glutDisplayFunc(Desenha);
       glutReshapeFunc(AlteraTamanhoJanela);
       glutMouseFunc(GerenciaMouse);
       glutMotionFunc(motion);
       Inicializa();
       glutMainLoop();
}

