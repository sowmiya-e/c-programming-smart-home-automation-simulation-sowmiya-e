#include <stdio.h>

// Function Prototypes
void initializeSystem(int rooms, int lights[], int temp[], int motion[], int locks[]);
void toggleLight(int rooms, int lights[]);
void readTemperature(int rooms, int temp[]);
void detectMotion(int rooms, int motion[]);
void securitySystem(int rooms, int locks[]);
void analyzeHouseStatus(int rooms, int lights[], int temp[], int motion[], int locks[], int *noMotionCounter);

int main() {
    int rooms;
    printf("Enter number of rooms: ");
    scanf("%d", &rooms);

    int lights[rooms], temp[rooms], motion[rooms], locks[rooms];
    int noMotionCounter = 0;
    initializeSystem(rooms, lights, temp, motion, locks);

    int choice;
    do {
        printf("\n===== Smart Home Menu =====\n");
        printf("1. Toggle Light\n2. Read Temperature\n3. Check Motion Sensor\n4. Lock/Unlock Security System\n5. House Status Summary\n6. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) {
            case 1: toggleLight(rooms, lights); break;
            case 2: readTemperature(rooms, temp); break;
            case 3: detectMotion(rooms, motion); break;
            case 4: securitySystem(rooms, locks); break;
            case 5: analyzeHouseStatus(rooms, lights, temp, motion, locks, &noMotionCounter); break;
            case 6: printf("Exiting...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }
    } while (choice != 6);

    return 0;
}



