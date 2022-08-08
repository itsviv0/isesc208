#include<stdio.h>
#include<math.h>

float input_x_co_ordinate_of_ith_point(int ith_point)
{
    float x;
    printf("Enter the x co-cordinate of the point %d: ", ith_point);
    scanf("%f", &x);
    return x;
}

float input_y_co_ordinate_of_ith_point(int ith_point)
{
    float y;
    printf("Enter the y co-cordinate of the point %d: ", ith_point);
    scanf("%f", &y);
    return y;
}

float distance_formula(float x1, float y1, float x2, float y2)
{
    return(sqrt(pow((x2-x1), 2)+ pow((y2-y1), 2)));
}

void output(float x1, float y1, float x2, float y2, float distance)
{
    printf("Distance between points (%f, %f) and (%f, %f) is %f\n", x1, y1, x2, y2, distance);
}

int main()
{
    float x1=input_x_co_ordinate_of_ith_point(1);
    float y1=input_y_co_ordinate_of_ith_point(1);
    float x2=input_x_co_ordinate_of_ith_point(2);
    float y2=input_y_co_ordinate_of_ith_point(2);
    float distance = distance_formula(x1, y1, x2,  y2);
    output(x1, y1, x2, y2, distance);
    return 0;
}
