#include <stdio.h>
#include <math.h>
#include <GL/glut.h>

double xc,yc,r;

void displayPoints(int x,int y){
    glVertex2d(xc+x, yc+y);
    glVertex2d(xc+x, yc-y);
    glVertex2d(xc-x, yc+y);
    glVertex2d(xc-x, yc-y);
    glVertex2d(xc+y, yc+x);
    glVertex2d(xc+y, yc-x);
    glVertex2d(xc-y, yc+x);
    glVertex2d(xc-y, yc-x);
}

void draw(void)
{
    int x=0,y=r;
    double d = 5.0/4.0  - r;

    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POINTS);
    
    displayPoints(x,y);
    
    while(y>=x){
        x++;
        if(d>0){
            y--;
            d=d + 2*(x-y) +1;
        }else{
            d = d+ 2*x +1;
        }
        displayPoints(x,y);
    }    
    glEnd();

    glFlush();
}
void Init()
{
    glClearColor(0.0,0.0,0.0,0);
    glColor3f(0.0,1.0,0.0);
    gluOrtho2D(0 , 640 , 0 , 480);
}
int main(int argc, char **argv)
{
    printf("\nEnter center Point:\n");
    scanf("%lf%lf",&xc,&yc);

    printf("\n-----------------------------------\n");
    printf("Enter radius\n");
    scanf("%lf",&r);
    
    glutInit(&argc,argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(500,200);
    glutInitWindowSize(840,580);
    glutCreateWindow("Bresenham's Circle Drawing");
    Init();

    glutDisplayFunc(draw);

    glutMainLoop();
}
