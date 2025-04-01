#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[][50], int n) {
    char temp[50];
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main() {
    int n;
    printf("Enter number of strings: ");
    scanf("%d", &n);

    char words[n][50];
    printf("Enter strings:\n");
    for (int i = 0; i < n; i++)
        scanf("%s", words[i]);

    bubbleSort(words, n);

    printf("Sorted strings:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", words[i]);

    return 0;
}