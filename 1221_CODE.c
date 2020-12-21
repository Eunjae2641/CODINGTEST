//두 정수 사이의 합

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int a, int b) {
    long long answer = 0;
    if(a<b){
        for(int i = a; i<=b; i++){
          answer += i;
        }
    }
    else{
        for(int i=b; i<=a; i++){
            answer += i;
        }
     }
    return answer;
}


//평균 구하기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// arr_len은 배열 arr의 길이입니다.
double solution(int arr[], size_t arr_len) {
        double answer = 0;
        double sum = 0;
    for(int i=0; i<arr_len; i++){
        sum += arr[i];
    }
    answer = sum / arr_len;
    return answer;
}

//짝수와 홀수
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int num) {
        char* answer = (char*)malloc(sizeof(int));
    if(num%2==0){
        answer = "Even";
    }
    else
        answer = "Odd";
    return answer;
}

//자릿수 더하기
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    for(int i=1; n!=0; i++){
        answer = answer + (n%10);
        n = n/10;
    }
    return answer;
}

//하샤드 수
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {

    int sum = 0;
    int x1 = x;
    bool answer = true;
    
    for(int i=1; x1!=0; i++){
        sum = sum + (x1%10);
        x1 = x1/10;
    }

    if(x%sum!=0){
        answer = false;
    }
    return answer;
}
