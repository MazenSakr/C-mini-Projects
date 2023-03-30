#include <stdio.h>
#include <stdlib.h>

void draw (int noOfRows, int noOfSpaces, int noOfPattern, char *Pattern );
void input(int *noOfRows, int *noOfSpaces, int *noOfPattern, char *Pattern);
void Quit();

int main(void)
{
    int noOfSpaces, noOfPattern, noOfRows;
    char Pattern[100];
    while(1){
        input(&noOfRows, &noOfSpaces, &noOfPattern, Pattern);
        draw(noOfRows, noOfSpaces, noOfPattern, Pattern);
        Quit();
    }
    return 0;
}
void draw (int noOfRows, int noOfSpaces, int noOfPattern, char *Pattern ){
        for (int rowCounter = 1; rowCounter <= noOfRows; rowCounter++)
    {
        for (int spaceCounter = 1; spaceCounter <= noOfSpaces-rowCounter; spaceCounter++)
            printf(" ");
        for (int k = 1; k <= rowCounter; k++)
            printf("%s ", Pattern);
        printf("\n");
    }
}
void input(int *noOfRows, int *noOfSpaces, int *noOfPattern, char *Pattern){
    printf("Enter the number of rows: ");
    scanf("%d", noOfRows);
    printf("Enter the pattern: ");
    scanf(" %[^\n]%*c", Pattern);
    printf("Enter the number of spaces: ");
    scanf("%d", noOfSpaces);
}
void Quit(){
    char choice[10];
    printf("Would you like to quit? (Y/N): ");
    scanf("%s", &choice);
    if (*choice == 'Y' || *choice == 'y'){
    exit(0);
    }
    else if (*choice == 'N' || *choice == 'n'){
        return;
    }
    else{
        printf("Invalid input. Please try again.\n");
        Quit();
    }
}