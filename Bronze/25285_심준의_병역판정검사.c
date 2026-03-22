#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int height, weight;
        scanf("%d %d", &height, &weight);

        double h_m = height / 100.0;
        double bmi = (double)weight / (h_m * h_m);

        if (height < 141) // 140 이하
            printf("6\n");
        else if (height < 146) // 141 ~ 145
            printf("5\n");
        else if (height < 159) // 146 ~ 158
            printf("4\n");
        else if (height < 161) { // 159 ~ 160
            if (bmi >= 16.0 && bmi < 35.0) printf("3\n");
            else printf("4\n");
        }
        else if (height < 204) { // 161 ~ 203
            if (bmi >= 20.0 && bmi < 25.0) printf("1\n");
            else if (bmi >= 18.5 && bmi < 30.0) printf("2\n");
            else if (bmi >= 16.0 && bmi < 35.0) printf("3\n");
            else printf("4\n");
        }
        else // 204 이상
            printf("4\n");
    }

    return 0;
}