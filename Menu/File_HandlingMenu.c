#include <stdio.h>
#include <stdlib.h>
#include "../include/Menu.h"
#include "../include/file_utils.h"
#include "../include/common.h"

void File_HandlingMenu()
{
    int choice, id, index;
        Record r;
        char filename[MAX_STRING_LEN];
    do {
        printf("\n=== File Handling Menu ===\n");
        printf("1. Create file\t2. Write to file\t3. Read from file\n");
        printf("4. voidCount records\t5. Append record\t6. Search record\n");
        printf("7. Update record\t8. Copy file\t0. Back\nChoice: ");
        scanf("%d", &choice);
        switch (choice)
        { 
            case 1:
                printf("Enter the filename to create: ");
                scanf("%s", filename);
                createBinaryFile(filename);
                break;
            case 2:
                printf("Entre filename: ");
                scanf("%s", filename);
                printf("Entre id: ");
                scanf("%d", &r.id);
                printf("Entre name: ");
                scanf("%s", r.name);
                printf("Entre score: ");
                scanf("%f", &r.score);
                printf("Entre category: ");
                scanf("%s", r.category);
                writeRecord(filename, &r);
                break;
            case 3:
                printf("Enter filename: ");
                scanf("%s", filename);
                printf("Entre index: ");
                scanf("%d", &index);
                readRecord(filename, index, &r);
                printf("ID: %d\nName: %s\nScore: %.2f\nCategory: %s\n", r.id, r.name, r.score, r.category);
                break;
            case 4:
                printf("Enter filename: ");
                scanf("%s", filename);
                printf("Number of Records: %d\n", countRecords(filename));
                break;
            case 5:
                printf("Entre filename: ");
                scanf("%s", filename);
                printf("Entre id: ");
                scanf("%d", &r.id);
                printf("Entre name: ");
                scanf("%s", r.name);
                printf("Entre score: ");
                scanf("%f", &r.score);
                printf("Entre category: ");
                scanf("%s", r.category);
                appendRecord(filename, &r);
                break;
            case 6:
                printf("Enter filename: ");
                scanf("%s", filename);
                printf("Enter id to search: ");
                scanf("%d", &id);
                if (searchRecord(filename, id, &r) == 1)
                {
                    printf("Record found:\nID: %d\nName: %s\nScore: %.2f\nCategory: %s\n", r.id, r.name, r.score, r.category);
                }
                else
                {
                    printf("Record not found.\n");
                }
                
                break;
            case 7:
                printf("Enter filename: ");
                scanf("%s", filename);
                printf("Enter id to update: ");
                scanf("%d", &id);
                index = searchRecord(filename, id, &r);
                if (index != -1)
                {
                    printf("Current Record:\nID: %d\nName: %s\nScore: %.2f\nCategory: %s\n", r.id, r.name, r.score, r.category);
                    printf("Enter new name: ");
                    scanf("%s", r.name);
                    printf("Enter new score: ");
                    scanf("%f", &r.score);
                    printf("Enter new category: ");
                    scanf("%s", r.category);
                    if (updateRecord(filename, index, &r) == 1)
                        printf("Record updated successfully.\n");
                    else
                        printf("Error updating record.\n");
                }
                else
                {
                    printf("Record not found.\n");
                }  
                break;
            case 8:
                printf("Enter source filename: ");
                scanf("%s", filename);
                char dest[MAX_STRING_LEN];
                printf("Enter destination filename: ");
                scanf("%s", dest);
                if (copyBinaryFile(filename, dest) == 1)
                    printf("File copied successfully.\n");
                else
                    printf("Error copying file.\n");

                break;
            default:
                printf("Invalid choice! Please try again.\n");  
        }
    } while (choice != 0);
}