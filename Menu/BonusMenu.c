#include <stdio.h>
#include "../include/Menu.h"
#include "../include/file_utils.h"
#include "../include/common.h"


void BonusMenu() {
    int choice;
    Record dataset[MAX_LIST_SIZE];
    int count = 0;
    do {
        printf("\n=== Bonus Menu ===\n");
        printf("1. Number of Records   2.Display Dataset  3. Sort Dataset\n" 
               "4. Find Max            5. Find Min        6. Calculate Average\n"
               "7. Filter by Condition 8. Save Dataset    9. Input Record\n"
               "0. Back\nChoice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                if (loadDataset("dataset.bin", dataset, &count) == 0) {
                    printf("Number of records: %d\n", count);
                } else {
                    printf("Failed to load dataset.\n");
                }
                break;
            case 2:
                displayDataset(dataset, count);
                break;
            case 3:
                char field[20];
                printf("Enter the field to sort by (id, name, score, category): ");
                scanf("%s", field);
                sortDatasetByField(dataset, count, field);
                printf("Dataset sorted by %s.\n", field);
                break;
            case 4:
                Record maxRecord = FindMaxByField(dataset, count);
                printf("Record with max score: ID=%d, Name=%s, Score=%.2f, Category=%s\n", maxRecord.id, maxRecord.name, maxRecord.score, maxRecord.category);
                break;
            case 5:
                Record minRecord = FindMinByField(dataset, count);
                printf("Record with min score: Id = %d, Name = %s, Score = %.2f, Category = %s\n", minRecord.id, minRecord.name, minRecord.score, minRecord.category);
                break;
            case 6:
                float average = averageByField(dataset, count);
                printf("Average score: %.2f\n", average);
                break;
            case 7:
                float threshold;
                printf("Enter score threshold: ");
                scanf("%f", &threshold);
                Record filtered[MAX_LIST_SIZE];
                int filteredCount = filterByCondition(dataset, count, threshold, filtered);
                printf("Records with score above %.2f:\n", threshold);
                displayDataset(filtered, filteredCount);
                break;
            case 8: 
                if (saveBinaryReport("report.bin", dataset, count) == 0) {
                    printf("Dataset saved to report.bin successfully.\n");
                } else {
                    printf("Failed to save dataset.\n");
                }
                break;
            case 9:
                Record newRecord = inputRecord();
                if (count < MAX_LIST_SIZE) {
                    dataset[count++] = newRecord;
                    printf("Record added successfully.\n");
                } else {
                    printf("Dataset is full. Cannot add more records.\n");
                }
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 0);
}