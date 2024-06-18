#include <stdio.h>

int main() {
    int sum = 0, count = 0, num; // 변수 선언

    while (count < 5) { // 유효한 숫자 5개를 입력 받을 때까지 반복
        printf("0보다 큰 수를 입력(%d번째): ", count + 1);
        scanf("%d", &num);

        if (num >= 1) { // 입력이 1 이상인지 확인
            sum += num; // 유효한 숫자면 합계에 더함
            count++;    // 유효한 입력 개수 증가
        } else {
            printf("1 이상의 정수를 입력하세요.\n"); // 유효하지 않은 입력에 대한 경고 메시지
        }
    }

    printf("총합은 %d\n", sum); // 총합 출력
}
--------------------------
#include <stdio.h>

int main() {
    int i, j;
    int n = 5; // 5번 반복
    
    // 첫 번째 반복문: 줄 번호를 제어 (1부터 n까지)
    for (i = 1; i <= n; i++) {
        // 두 번째 반복문: 각 줄에 대해 0을 출력 (0의 개수는 현재 줄 번호 - 1)
        for (j = 1; j < i; j++) {
            printf("0"); // 0 출력
        }
        printf("*\n"); // 각 줄 끝에 * 출력하고 줄 바꿈
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
        // 줄 바꿈
        printf("\n");
    }
}
--------------------------
#include <stdio.h>

int main() {
    // 짝수의 합을 저장할 변수 초기화
    int sum_even = 0;
    
    // 0에서 시작하여 100까지 반복할 변수 초기화
    int num = 0;
    
    // do-while 구조
    do {
        // num이 짝수인지 확인
        if (num % 2 == 0) {
            sum_even += num;
        }
        
        // num을 1 증가
        num++;
        
    } while (num <= 100);
    
    // 결과 출력
    printf("0 이상 100 이하의 짝수 합: %d\n", sum_even);
}
--------------------------
#include <stdio.h>

int main() {
    int a, i;
    float sum = 0.0, average;

    // 사용자에게 입력할 정수의 개수를 묻기
    printf("몇 개의 정수를 입력하시겠습니까? ");
    scanf("%d", &a);

    // 입력받은 정수의 개수만큼 정수 입력받기
    for (i = 0; i < a; i++) {
        int temp;
        printf("정수 입력 %d: ", i+1);
        scanf("%d", &temp);
        sum += temp;
    }

    // 평균 계산하기
    average = sum / num_integers;

    // 평균 출력하기
    printf("평균값: %.1f\n", average);
}
