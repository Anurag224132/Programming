#include <stdio.h>
#include <string.h>
#define MAX_FLAVORS 10

typedef struct flavor {
    char name[20];
    int stock;
} Flavor;

Flavor flavors[MAX_FLAVORS];
int num_flavors = 0;

void add_flavor(char* name, int stock) 
{
    if (num_flavors == MAX_FLAVORS) 
    {
        printf("Maximum number of flavors reached.\n");
        return;
    }
    for (int i = 0; i < num_flavors; i++) 
    {
        if (strcmp(flavors[i].name, name) == 0) 
        {
            printf("Flavor already exists.\n");
            return;
        }
    }
    Flavor new_flavor;
    strcpy(new_flavor.name, name);
    new_flavor.stock = stock;
    flavors[num_flavors] = new_flavor;
    num_flavors++;
    printf("Flavor added successfully.\n");
}

void remove_flavor(char* name) {
    for (int i = 0; i < num_flavors; i++) {
        if (strcmp(flavors[i].name, name) == 0) {
            for (int j = i; j < num_flavors - 1; j++) {
                flavors[j] = flavors[j + 1];
            }
            num_flavors--;
            printf("Flavor removed successfully.\n");
            return;
        }
    }
    printf("Flavor not found.\n");
}

void print_flavors() {
    printf("Flavors available:\n");
    for (int i = 0; i < num_flavors; i++) {
        printf("%s - %d\n", flavors[i].name, flavors[i].stock);
    }
}

int main() {
    int choice, stock;
    char name[20];
    do {
        printf("\n1. Add flavor\n");
        printf("2. Remove flavor\n");
        printf("3. View available flavors\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Enter flavor name: ");
                scanf("%s", name);
                printf("Enter stock: ");
                scanf("%d", &stock);
                add_flavor(name, stock);
                break;
            case 2:
                printf("Enter flavor name: ");
                scanf("%s", name);
                remove_flavor(name);
                break;
            case 3:
                print_flavors();
                break;
            case 4:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice.\n");
                break;
        }
    } while (choice != 4);
    return 0;
}

            //DRY RUN
// Initially, the program declares an array of `Flavor` structs named `flavors` with a maximum size of 10 and sets the `num_flavors` variable to 0.

// The program then defines three functions: `add_flavor`, `remove_flavor`, and `print_flavors`. `add_flavor` takes in a name and stock and adds a new flavor to the `flavors` array. It checks whether the `flavors` array has reached its maximum size or whether the given name already exists in the array before adding a new flavor.

// `remove_flavor` removes a flavor from the `flavors` array if it exists in the array, and `print_flavors` prints all the flavors in the `flavors` array along with their stock.

// The `main` function presents a menu to the user with four options: add flavor, remove flavor, view available flavors, or exit. It prompts the user to enter a choice and then performs the appropriate action based on the user's input.

// Here's a dry run of the code:

// 1. Initially, the `flavors` array is empty and `num_flavors` is set to 0.
// 2. The `main` function presents a menu to the user and prompts them to enter a choice.
// 3. If the user selects option 1 (add flavor), the program prompts them to enter the name and stock of the flavor they want to add. If the `flavors` array has reached its maximum size, the program prints a message indicating that the maximum number of flavors has been reached. If the name already exists in the `flavors` array, the program prints a message indicating that the flavor already exists. Otherwise, the program adds the new flavor to the `flavors` array and increments `num_flavors`.
// 4. If the user selects option 2 (remove flavor), the program prompts them to enter the name of the flavor they want to remove. If the flavor exists in the `flavors` array, the program removes it and decrements `num_flavors`. If the flavor doesn't exist in the `flavors` array, the program prints a message indicating that the flavor was not found.
// 5. If the user selects option 3 (view available flavors), the program prints all the flavors in the `flavors` array along with their stock.
// 6. If the user selects option 4 (exit), the program prints a message indicating that it is exiting and terminates.
// 7. If the user enters an invalid choice, the program prints a message indicating that the choice is invalid.

// And that's how the program works!