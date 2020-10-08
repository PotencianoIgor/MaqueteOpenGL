#ifndef FUNCOES
#define FUNCOES

#endif // FUNCOES

GLfloat ASPECTO, ANGULO;
int x_ini,y_ini, bot, floors = 10;
GLfloat obsX, obsY, obsZ, rotX, rotY;
GLfloat obsX_ini, obsY_ini, obsZ_ini, rotX_ini, rotY_ini;
GLfloat escalaX, escalaY, escalaZ;
#define SENS_ROT 10.0
#define SENS_OBS 10.0
#define SENS_TRANS 10.0


void Desenha(void)
{
    // Limpa a janela e o depth buffer
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


      // glRotatef(15,0,15, 0);// rotaciona o chão
        glPushMatrix();
            glColor3f(0.13, 0.55, 0.13);
            glScalef(10.0, 0.2, 8.0);
            glTranslatef(0.0, -170, -10.0);
            glutSolidSphere(5.0, 70.0, 70.0);
        glPopMatrix();


    // glRotatef(15,0,15, 0);// rotaciona o prédio
     /*glPushMatrix();
     glColor3f(0.18, 0.31, 0.31);
     glScalef(3.0, 8.0, 2.0);
     glTranslatef(0.0, 0.6, -40.0);
     glutSolidCube(10.0);
     glPopMatrix();*/

       /* glPushMatrix();
        glColor3f(1.0, 1.0, 1.0);
        glScalef(3.5, 3.0, 2.0);
        glTranslatef(0.0, -9.8, -35.8);
        glutSolidCube(2.0);
        glPopMatrix();*/

       glColor3f(0.18, 0.31, 0.31);
       //frente predio - esquerda
      glBegin(GL_QUADS);
      glPushMatrix();
      glVertex3f(-17.0, 50.0, -69.7);
      glVertex3f(-17.0, -34.0, -69.7);
      glVertex3f(-12.0, -34.0, -69.7);
      glVertex3f(-12.0, 50.0, -69.7);
      glEnd();

      // frente do predio-meio
      glBegin(GL_QUADS);
      glPushMatrix();
      glVertex3f(-3.0, 50.0, -69.7);
      glVertex3f(-3.0, -34.0, -69.7);
      glVertex3f(3.0, -34.0, -69.7);
      glVertex3f(3.0, 50.0, -69.7);
      glEnd();

      //frente do predio-direita
      glBegin(GL_QUADS);
      glPushMatrix();
      glVertex3f(12.0, 50.0, -69.7);
      glVertex3f(12.0, -34.0, -69.7);
      glVertex3f(17.0, -34.0, -69.7);
      glVertex3f(17.0, 50.0, -69.7);
      glEnd();

      //lateral predio - esquerda
      glColor3f(0.18, 0.31, 0.31);
     glBegin(GL_QUADS);
     glPushMatrix();
     glVertex3f(-17.0, 50.0, -69.7);
     glVertex3f(-17.0, -34.0, -69.7);
     glVertex3f(-17.0, -34.0, -100.0);
     glVertex3f(-17.0, 50.0, -100.0);
     glEnd();

     //lateral predio - direita
     glColor3f(0.18, 0.31, 0.31);
    glBegin(GL_QUADS);
    glPushMatrix();
    glVertex3f(17.0, 50.0, -69.7);
    glVertex3f(17.0, -34.0, -69.7);
    glVertex3f(17.0, -34.0, -100.0);
    glVertex3f(17.0, 50.0, -100.0);
    glEnd();

      //fundo predio
        glColor3f(0.18, 0.31, 0.31);
        glBegin(GL_QUADS);
        glPushMatrix();
        glVertex3f(-17.0, 50.0, -100.0);
        glVertex3f(-17.0, -34.0, -100.0);
        glVertex3f(17.0, -34.0, -100.0);
        glVertex3f(17.0, 50.0, -100.0);
        glEnd();

        //base predio
          glColor3f(0.18, 0.31, 0.31);
          glBegin(GL_QUADS);
          glPushMatrix();
          glVertex3f(-17.0, -34.0, -69.7);
          glVertex3f(-17.0, -34.0, -100.0);
          glVertex3f(17.0, -34.0, -100.0);
          glVertex3f(17.0, -34.0, -69.7);
          glEnd();

          /*//base predio
                       glColor4f(0.5, 0.5, 0.5,0.6);
                    glBegin(GL_QUADS);
                    glPushMatrix();
                    glVertex3f(-17.0, -32.5, -69.7);
                    glVertex3f(-17.0, -32.5, -100.0);
                    glVertex3f(17.0, -32.5, -100.0);
                    glVertex3f(17.0, -32.5, -69.7);
                    glEnd();*/

                    //topo predio
                      glColor3f(0.18, 0.31, 0.31);
                      glBegin(GL_QUADS);
                      glPushMatrix();
                      glVertex3f(-17.0, 50.0, -69.7);
                      glVertex3f(-17.0, 50.0, -100.0);
                      glVertex3f(17.0, 50.0, -100.0);
                      glVertex3f(17.0, 50.0, -69.7);
                      glEnd();


    //
     for(int i = 0; i < floors; i++){

         //piso
         glPushMatrix();
         glColor4f(0.8, 0.8, 0.7, 0.9);
         glScalef(17.5, 0.1, 15.65);
         glTranslatef(0.0, -250.0 + 70 * i, -5.45);
         glutSolidCube(2.0);
         glPopMatrix();

         /*glColor4f(0.5, 0.5, 0.5,0.6);
         glBegin(GL_QUADS);
         glPushMatrix();
         glVertex3f(-17.0, -25.0 + 7*i, -69.7);
         glVertex3f(-17.0, -25.0 + 7*i , -100.0);
         glVertex3f(17.0, -25.0 + 7*i, -100.0);
         glVertex3f(17.0, -25.0 + 7*i, -69.7);
         glEnd();*/

         //sacada esquerda
         glPushMatrix();
         glColor3f(0.24, 0.17, 0.12);
         glScalef(5.0, 0.5, 2.0);
         glTranslatef(-1.5, -50.0 + 14*i, -34.0);
         glutSolidCube(2.0);
         glPopMatrix();

         //sacada direita
         glPushMatrix();
         glColor3f(0.24, 0.17, 0.12);
         glScalef(5.0, 0.5, 2.0);
         glTranslatef(1.5, -50.0 + 14*i, -34.0);
         glutSolidCube(2.0);
         glPopMatrix();
     }

     glEnable(GL_BLEND);
     glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

         glColor4f(0.5, 0.5, 1.0, 0.4);
         for(int i = 0; i < floors; i++){

             //proteção de vidro sacada esquerda-frente
             glBegin(GL_QUADS);
             glPushMatrix();
             glVertex3f(-12.0, -21.0 + i*7, -66.0);
             glVertex3f(-12.0, -24.0 + i*7, -66.0);
             glVertex3f(-3.0, -24.0 + i*7, -66.0);
             glVertex3f(-3.0, -21.0 + i*7, -66.0);
             glEnd();
         glPopMatrix();

         //proteção de vidro sacada esquerda-lateral-esquerda
         glBegin(GL_QUADS);
             glPushMatrix();
             glVertex3f(-12.0, -21.0 + i*7, -66.0);
             glVertex3f(-12.0, -24.0 + i*7, -66.0);
             glVertex3f(-12.0, -24.0 + i*7, -70.0);
             glVertex3f(-12.0, -21.0 + i*7, -70.0);
             glEnd();
             glPopMatrix();

             //proteção de vidro sacada esquerda-lateral-direita
             glBegin(GL_QUADS);
             glPushMatrix();
             glVertex3f(-3.0, -21.0 + i*7, -66.0);
             glVertex3f(-3.0, -24.0 + i*7, -66.0);
             glVertex3f(-3.0, -24.0 + i*7, -70.0);
             glVertex3f(-3.0, -21.0 + i*7, -70.0);
             glEnd();
             glPopMatrix();


             //proteção de vidro sacada direita-frente
             glBegin(GL_QUADS);
             glPushMatrix();
             glVertex3f(12.0, -21.0 + i*7, -66.0);
             glVertex3f(12.0, -24.0 + i*7, -66.0);
             glVertex3f(3.0, -24.0 + i*7, -66.0);
             glVertex3f(3.0, -21.0 + i*7, -66.0);
             glEnd();
             glPopMatrix();

             //proteção de vidro sacada direita-lateral-esquerda
             glBegin(GL_QUADS);
             glPushMatrix();
             glVertex3f(12.0, -21.0 + i*7, -66.0);
             glVertex3f(12.0, -24.0 + i*7, -66.0);
             glVertex3f(12.0, -24.0 + i*7, -70.0);
             glVertex3f(12.0, -21.0 + i*7, -70.0);
             glPopMatrix();

             //proteção de vidro sacada direita-lateral-direita
             glBegin(GL_QUADS);
             glPushMatrix();
             glVertex3f(3.0, -21.0 + i*7, -66.0);
             glVertex3f(3.0, -24.0 + i*7, -66.0);
             glVertex3f(3.0, -24.0 + i*7, -70.0);
             glVertex3f(3.0, -21.0 + i*7, -70.0);
             glEnd();
             glPopMatrix();

         }


     glutSwapBuffers();
}


void EspecificaParametrosVisualizacao(void) //equivalente ao posiciona observador
{
    // Especifica sistema de coordenadas de projeção
    glMatrixMode(GL_PROJECTION);
    // Inicializa sistema de coordenadas de projeção
    glLoadIdentity();

    // Especifica a projeção perspectiva
    //gluPerspective(angle,fAspect,0.4,500);
    gluPerspective(ANGULO, ASPECTO, 0.4, 500);

    // Especifica sistema de coordenadas do modelo
    glMatrixMode(GL_MODELVIEW);
    // Inicializa sistema de coordenadas do modelo
    glLoadIdentity();

    // Especifica posição do observador e do alvo
    //gluLookAt(0,80,200, 0,0,0, 0,1,0);
    //gluLookAt(obsX, obsY, obsZ, 0,0,0, 0,1,0);
    glTranslatef(-obsX, -obsY, -obsZ);/*Translata a cÃ¢mera para essas variÃ¡veis*/
    glRotatef(rotX,1,0,0);/*Rotacionar a cÃ¢mera para essas coordenadas*/
    glRotatef(rotY,0,1,0);
}

void Inicializa (void)
{
    GLfloat luzAmbiente[4]={0.2,0.2,0.2,1.0};
    GLfloat luzDifusa[4]={0.3,0.3,0.3,1.0};		 // "cor"
    GLfloat luzEspecular[4]={0.5, 0.5, 0.5, 5.0};// "brilho"
    //GLfloat posicaoLuz[4]={0.0, 20.0, 20.0, 1.0};
    GLfloat posicaoLuz[4]={0.0, 50.0, -140.0, 1.0};

    // Capacidade de brilho do material
    GLfloat especularidade[4]={1.0,1.0,1.0,1.0};
    GLint especMaterial = 60;

    // Especifica que a cor de fundo da janela será preta
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);

    // Habilita o modelo de colorização de Gouraud
    glShadeModel(GL_SMOOTH);

    // Define a refletância do material
    glMaterialfv(GL_FRONT,GL_SPECULAR, especularidade);
    // Define a concentração do brilho
    glMateriali(GL_FRONT,GL_SHININESS,especMaterial);

    // Ativa o uso da luz ambiente
    glLightModelfv(GL_LIGHT_MODEL_AMBIENT, luzAmbiente);

    // Define os parâmetros da luz de número 0
    glLightfv(GL_LIGHT0, GL_AMBIENT, luzAmbiente);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, luzDifusa );
    glLightfv(GL_LIGHT0, GL_SPECULAR, luzEspecular );
    glLightfv(GL_LIGHT0, GL_POSITION, posicaoLuz);

    // Habilita a definição da cor do material a partir da cor corrente
    glEnable(GL_COLOR_MATERIAL);
    //Habilita o uso de iluminação
    glEnable(GL_LIGHTING);
    // Habilita a luz de número 0
    glEnable(GL_LIGHT0);
    // Habilita o depth-buffering
    glEnable(GL_DEPTH_TEST);

    //angle=45;
    ANGULO = 45;
    rotX = rotY = 0;
    obsX = obsY = 0;
    obsZ = 60;//Voltar para 10
    escalaX = escalaY = escalaZ = 1;
}
void GerenciaMouse(int button, int state, int x, int y)
{
    /*if (button == GLUT_LEFT_BUTTON)
        if (state == GLUT_DOWN) {  // Zoom-in
            if (angle >= 10) angle -= 5;
        }
    if (button == GLUT_RIGHT_BUTTON)
        if (state == GLUT_DOWN) {  // Zoom-out
            if (angle <= 130) angle += 5;
        }*/
    if(state == GLUT_DOWN){
        x_ini = x;
        y_ini = y;
        obsX_ini = obsX;
        obsY_ini = obsY;
        obsZ_ini = obsZ;
        rotX_ini = rotX;
        rotY_ini = rotY;
        bot = button;
    }
    else bot = -1;
    EspecificaParametrosVisualizacao();
    glutPostRedisplay();
}
// Função usada para especificar o volume de visualização

void motion(int x, int y){
       if(bot == GLUT_LEFT_BUTTON){//RotaÃ§Ã£o
           int deltaX = x_ini - x;
           int deltaY = y_ini - y;
           rotX = rotX_ini - deltaY/ SENS_ROT;
           rotY = rotY_ini - deltaX/ SENS_ROT;
        }
        else if (bot == GLUT_RIGHT_BUTTON){//Zoom
            int deltaZ = y_ini - y;
            obsZ = obsZ_ini + deltaZ/ SENS_OBS;
        }
        else if (bot == GLUT_MIDDLE_BUTTON){//Correr
            int deltaX = x_ini - x;
            int deltaY = y_ini - y;
            obsX = obsX_ini + deltaX/ SENS_TRANS;
            obsY = obsY_ini + deltaY/ SENS_TRANS;
        }
        EspecificaParametrosVisualizacao();
        glutPostRedisplay();
}
// Função callback chamada quando o tamanho da janela é alterado
void AlteraTamanhoJanela(GLsizei w, GLsizei h)
{
    // Para previnir uma divisão por zero
    if ( h == 0 ) h = 1;

    // Especifica o tamanho da viewport
    glViewport(0, 0, w, h);

    // Calcula a correção de aspecto
    //fAspect = (GLfloat)w/(GLfloat)h;
    ASPECTO = (GLfloat)w/(GLfloat)h;

    EspecificaParametrosVisualizacao();
}
