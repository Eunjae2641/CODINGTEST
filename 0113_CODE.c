#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    char* arr[] = {"FRI", "SAT","SUN","MON","TUE","WED","THU"};
    char* answer = (char*)malloc(sizeof(arr));
    
    int final[20] = {31,29,31,30,31,30,31,31,30,31,30,31};
    int total = 0;
    for(int i = 0; i<a-1;i++){
        total = total + final[i];
    }
    
    total += b-1;
    answer = arr[total%7];
    
    return answer;
}
