#include <stdio.h>
char ice_cream[100][50];
int quantity[100];
int num_ice_cream = 0;
void display_ice_cream();
void add_ice_cream();
void delete_ice_cream();
void search_ice_cream();
void update_ice_cream();
int main()
{
    int choice;
    do
    {
        printf("\n***** ICE CREAM PARLOUR MANAGEMENT SYSTEM****\n\n");
        printf("\t1. Display Ice Cream Detail\n");
        printf("\t2. Add New Ice Cream\n");
        printf("\t3. Delete Ice Cream\n");
        printf("\t4. Search Ice Cream\n");
        printf("\t5. Update Ice Cream\n");
        printf("\t6. Exit\n");
        printf("\n\tEnter your choice (1 to 6): ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            display_ice_cream();
            break;
        case 2:
            add_ice_cream();
            break;
        case 3:
            delete_ice_cream();
            break;
        case 4:
            search_ice_cream();
            break;
        case 5:
            update_ice_cream();
            break;
        case 6:
            printf("\n............ Hope You Enjoy .............\n\n");
            break;
        default:
            printf("Invalid choice!\n");
            break;
        }
    } while (choice != 6);
    return 0;
}
// function for displaying ICE CREAM
void display_ice_cream()
{
    printf("\n\t---------- ICE CREAM DETAILS ----------\n");
    if (num_ice_cream == 0)
    {
        printf("\t\tNo Ice Cream to display.\n");
    }
    else
    {
        printf("Ice Cream Name\t\tQuantity\n");
        for (int i = 0; i < num_ice_cream; i++)
        {
            printf("%s\t\t\t%d\n", ice_cream[i], quantity[i]);
        }
    }
}
// function for adding new ICE CREAM
void add_ice_cream()
{
    printf("\n\t---------- ADD NEW ICE CREAM ----------\n");
    if (num_ice_cream == 100)
    {
        printf("Can not add more Ice Cream.\n");
    }
    else
    {
        printf("\tEnter Ice Cream name: ");
        scanf(" %[^\n]", &ice_cream[num_ice_cream]);
        printf("\tEnter Ice Cream quantity: ");
        scanf("%d", &quantity[num_ice_cream]);
        num_ice_cream++;
        printf("\tIce Cream added successfully.\n");
    }
}
// function for deleting ICE CREAM from the record
void delete_ice_cream()
{
    printf("\n\t---------- DELETE ICE CREAM DETAILS-----------\n");
    if (num_ice_cream == 0)
    {
        printf("\t\tNo Ice Cream to delete.\n");
        return;
    }
    printf("\tEnter Ice Cream name to delete: ");
    char ice_cream_name[50];
    scanf(" %[^\n]", ice_cream_name);
    int index = -1;
    for (int i = 0; i < num_ice_cream; i++)
    {
        int j = 0;
        while (ice_cream[i][j] != '\0' && ice_cream_name[j] != '\0' && ice_cream[i][j] == ice_cream_name[j])
        {
            j++;
        }
        if (ice_cream[i][j] == '\0' && ice_cream_name[j] == '\0')
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        printf("\t\tIce Cream not found.\n");
    }
    else
    {
        for (int i = index; i < num_ice_cream - 1; i++)
        {
            for (int j = 0; j < 50; j++)
            {
                ice_cream[i][j] = ice_cream[i + 1][j];
            }
            quantity[i] = quantity[i + 1];
        }
        num_ice_cream--;
        printf("\t\tIce Cream deleted successfully.\n");
    }
}
// function for searching ICE CREAM
void search_ice_cream()
{
    printf("\n\t---------- SEARCH ICE CREAM -----------\n");
    if (num_ice_cream == 0)
    {
        printf("\t\tNo Ice Cream to search.\n");
        return;
    }
    printf("\tEnter Ice Cream name to search: ");
    char ice_cream_name[50];
    scanf(" %[^\n]", ice_cream_name);
    int index = -1;
    for (int i = 0; i < num_ice_cream; i++)
    {
        int j = 0;
        while (ice_cream[i][j] != '\0' && ice_cream_name[j] != '\0' && ice_cream[i][j] == ice_cream_name[j])
        {
            j++;
        }
        if (ice_cream[i][j] == '\0' && ice_cream_name[j] == '\0')
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        printf("\t\tIce Cream not found.\n");
    }
    else
    {
        printf("\t\tIce Cream Found\n");
        printf("Ice Cream Name\tQuantity\n");
        printf("%s\t\t%d\n", ice_cream[index], quantity[index]);
    }
}
// function for updating ICE CREAM
void update_ice_cream()
{
    printf("\n\t---------- UPDATE ICE CREAM -----------\n");
    if (num_ice_cream == 0)
    {
        printf("\t\tNo Ice Cream to update.\n");
        return;
    }
    printf("\tEnter Ice Cream name to update: ");
    char ice_cream_name[50];
    scanf(" %[^\n]", ice_cream_name);
    int index = -1;
    for (int i = 0; i < num_ice_cream; i++)
    {
        int j = 0;
        while (ice_cream[i][j] != '\0' && ice_cream_name[j] != '\0' && ice_cream[i][j] == ice_cream_name[j])
        {
            j++;
        }
        if (ice_cream[i][j] == '\0' && ice_cream_name[j] == '\0')
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        printf("\t\tIce Cream not found.\n");
    }
    else
    {
        printf("Enter new Ice Cream name: ");
        scanf(" %[^\n]", &ice_cream[index]);
        printf("Enter new quantity: ");
        scanf("%d", &quantity[index]);
        printf("\t\tIce Cream updated successfully.\n");
    }
}