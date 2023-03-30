#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

struct point{
    int x;
    int y;
};
typedef struct point point;

void input(char *function);
void processFunction(char *function, point *points);

char function[100];
point points[100];

int main()
{
    input(function);
    processFunction(function, points);
    return 0;
}

void input(char *function){
    printf("This is a graphing application that graphs in the command line the input function.\nPlease Enter the function you want to graph with spaces between every literate\n f(x) = ");
    scanf(" %[^\n]%*c", function);
}

void processFunction(char *function, point *points){
    char *token = strtok(function, " ");
    while(token != NULL){
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
}
    
//program description:
/*Graphing Application:
This program is a graphing application that graphs in the command line the input function.
Structure :
The program is divided into 3 main parts:
1. The main function that takes the input and calls the other functions.
2. The function that calculates the function value at a given point.
3. The function that draws the graph. */