//피보나치 수열
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0, f0 = 0, f1=1;
    for (int i=0; i<n-1; i++){ 
        answer = f0 + f1; f0 = f1%1234567; 
        f1 = answer%1234567; 
    } 
    return answer%1234567;

}
