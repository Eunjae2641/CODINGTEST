//약수의 합
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    for(int i=1; i<=n; i++){
        if(n%i==0){
            answer += i;
        }
    }
    return answer;
}

//멀쩡한 사각형
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long long solution(int w, int h) {
    long long answer = 0;
    long long block = 0;
    for (int i = 0; i < h; i++) {
		block = (long long)w*i / h;
		answer += (2 * block);
    }
    return answer;
}
