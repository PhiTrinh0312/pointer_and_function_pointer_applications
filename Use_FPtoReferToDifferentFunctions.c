#include <stdio.h>
#include <stdbool.h> 
#include <string.h> // Bao gồm thư viện string.h để sử dụng strcpy

bool asc(int a, int b) {
    return a > b;
}

bool desc(int a, int b) {
    return a < b;
}

void selectionSort(int *a, int n, bool (*compare)(int, int)) {
    for (int i = 0; i < n - 1; i++) {
        int min = i;
        for (int j = i + 1; j < n; j++) {
            if (compare(a[min], a[j])) {
                min = j;
            }
        }

        int temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
}

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    char s[10];
    int check;

    printf("Chon tang hay giam an: 1 de chon tang, 2 de chon giam\n");
    scanf("%d", &check);

    switch (check) {
        case 1:
            strcpy(s, "asc");
            break;
        case 2:
            strcpy(s, "desc");
            break;
        default:
            printf("Lua chon khong hop le.\n");
            return 1; // Thoát với mã lỗi
    }

    bool (*compare)(int, int);
    if (strcmp(s, "asc") == 0) {
        compare = asc;
    } else if (strcmp(s, "desc") == 0) {
        compare = desc;
    }

    selectionSort(a, n, compare);

    printf("Day da sap xep :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
