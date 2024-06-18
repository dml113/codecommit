#include <stdio.h>

int main() {
    int sum = 0, count = 0, num; 

    while (count < 5) {
        printf("0보다 큰 수를 입력(%d번째): ", count + 1);
        scanf("%d", &num);

        if (num >= 1) { 
            sum += num; 
            count++;    
        } else {
            printf("1 이상의 정수를 입력하세요.\n"); 
        }
    }

    printf("총합은 %d\n", sum);
}
--------------------------
#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // 5번 반복
  
    for (i = 1; i <= n; i++) {
        for (j = 1; j < i; j++) {
            printf("0");
        }
        printf("*\n");
    }
}
--------------------------
#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // 5번 반복

    for (i = 1; i <= n; i++) {
        // 0을 i번 출력
        for (j = 1; j <= i; j++) {
            printf("0");
        }
        // *을 (5 - i + 1)번 출력
        for (j = 1; j <= (n - i + 1); j++) {
            printf("*");
        }

        printf("\n");
    }
}
--------------------------
#include <stdio.h>

int main() {
    int sum_even = 0;
    int num = 0;
    do {
        if (num % 2 == 0) {
            sum_even += num;
        }

        num++;
        
    } while (num <= 100);

    printf("0 이상 100 이하의 짝수 합: %d\n", sum_even);
}
--------------------------
#include <stdio.h>

int main() {
    int a, i;
    float sum = 0.0, average;

    printf("몇 개의 정수를 입력하시겠습니까? ");
    scanf("%d", &a);

    for (i = 0; i < a; i++) {
        int temp;
        printf("정수 입력 %d: ", i+1);
        scanf("%d", &temp);
        sum += temp;
    }
    average = sum / num_integers;

    printf("평균값: %.1f\n", average);
}
