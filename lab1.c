
#include <stdio.h>
#include <math.h>

const double EPS = 1e-9;
const double Pi = 3.14159265358979323846;
void task1(double *arr){
    double x, y, z, a, b, c, d, f;
    printf("1) Task 27: cos(x)^2/sin(x) - xyz + ax^2+bx+c/dx^3-f \n");
    printf("Input x, y, z: ");
    scanf("%lf %lf %lf", &x, &y, &z);
    printf("Input a, b, c, d, f: ");
    scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &f);
    if (fabs(sin(x)) < EPS)
    {
        printf("No solution for sin(x)=0, division by zero is undefined.\n");
        return;
    }
    
    double part1 = pow(cos(x), 2) / sin(x);
    double part2 = x * y * z;
    if (fabs(d * pow(x, 3) - f) < EPS)
    {
        printf("No solution for dx^3-f=0, division by zero is undefined. \n");
        return;
    }
    
    double part3 = (a*pow(x, 2) + b * x + c)/(d * pow(x,3) - f);
    double result = part1 - part2 + part3;
    printf("\nTask 27 Solution: %.4lf \n", result); 
    *arr = result;
}
void task2(double *arr){
//34 
    double x, r;
    printf("2) Task 34: 3xR/pi^3 \n");
    printf("Input x, R: ");
    scanf("%lf %lf", &x, &r);
    double y = (3.0 * x *r) / pow(Pi, 3);
    printf("Task 34 Solution: %.4lf \n", y);
    *arr = y;
}
void task3(double *arr){
//53
    double x;
    printf("3) Task 53: 1/sin(x) + |x-3| \n");
    printf("Input X: ");
    scanf("%lf", &x);


    if (fabs(sin(x)) < EPS ){
        printf("No solution for sin(x)=0, division by zero is undefined.\n");
        return;
    }
    double y = (1 / sin(x)) + fabs(x - 3.0);
    printf("Task 53 Solution: %.4lf \n", y);
    *arr = y;
}
void task4(double *arr){
//30
    double v, t, a;
    printf("4) Task 30 S = Vt + at^2/2 \n");
    printf("Input V, t, a: ");
    scanf("%lf %lf %lf", &v, &t, &a);
    double s = v * t + (a * pow(t, 2)) / 2;
    printf("Task 30 Solution: S = %.4lf \n", s);
    *arr = s;
}
void task5(double *arr){
//31
    double x;
    printf("5) Task 31: sqrt|sin(x)|/x-pi\n");
    printf("Input X: ");
    scanf("%lf", &x);
    if (x == Pi)
    {
        printf("No solution for x-pi = 0, division by zero is undefined.\n");
        return;
    }
    double y = sqrt(fabs(sin(x))) / (x - Pi);
    printf("Task 31 Solution: %.4lf\n", y);
    *arr = y;
    
}

int main(){
    double results[5];

    task1(&results[0]);
    task2(&results[1]);
    task3(&results[2]);
    task4(&results[3]);
    task5(&results[4]);
    //printf("Task1 = %.4lf\nTask2 = %.4lf\nTask3 = %.4lf\nTask4 = %.4lf\nTask5 = %.4lf\n", results[0], results[1], results[2], results[3], results[4]);

    return 0;
}
