#include <stdio.h>
int Menu();
int Bus();
int Cars();
int Rikshaws();
int Bikes();
int Cycles();
int ShowDetails();
int Delete();
int no_of_rikshaws=0,no_of_bus=0,no_of_cars=0,no_of_bikes=0,no_of_cycles=0,amount=0,count=0;

int main() {
    while(1){
        int choice = Menu();
    switch(choice) {
        case 1:
            Bus();
            break;
        case 2:
            Cars();
            break;
        case 3:
            Rikshaws();
            break;
        case 4:
            Bikes();
            break;
        case 5:
            Cycles();
            break;
        case 6:
            ShowDetails(); 
            break;
        case 7:
            Delete();
            break;
        case 8:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Please try again.\n");
    }
    }
    

    return 0;
}
int Menu() {
    int choice;
    printf("\n*** Menu ***\n");
    printf("1. Add Bus\n");
    printf("2. Add Cars\n");
    printf("3. Add Rikshaws\n");
    printf("4. Add Bikes\n");
    printf("5. Add Cycles\n");
    printf("6. Show Details\n");
    printf("7. Delete Records\n");
    printf("8. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);
    return choice;
}

int Bus() {
    no_of_bus++;
    amount=amount+75;
    count++;
    return 0;
}

int Cars() {
    no_of_cars++;
    amount=amount+50;
    count++;
    return 0;
}

int Rikshaws() {
    no_of_rikshaws++;
    amount=amount+25;
    count++;
    return 0;
}

int Bikes() {
    no_of_bikes++;
    amount=amount+20;
    count++;
    return 0;
}

int Cycles() {
    no_of_cycles++;
    amount=amount+10;
    count++;
    return 0;
}

int ShowDetails() {
    printf("Showing Details.\n");
    printf("\nnumber of bus=%d",no_of_bus);
    printf("\nnumber of cars=%d",no_of_cars);
    printf("\nnumber of rikshaws=%d",no_of_rikshaws);
    printf("\nnumber of bikes=%d",no_of_bikes);
    printf("\nnumber of cycles=%d",no_of_cycles);
    printf("\nTotal number of vehicles=%d",no_of_bus+no_of_cars+no_of_rikshaws+no_of_bikes+no_of_cycles);
    printf("\nTotal gain amount=%d",amount);
    return 0;
}

int Delete() {
    printf("Deleting Records.\n");
    no_of_rikshaws=0;
    no_of_bus=0;
    no_of_cars=0;
    no_of_bikes=0;
    no_of_cycles=0;
    amount=0;
    return 0;
}
