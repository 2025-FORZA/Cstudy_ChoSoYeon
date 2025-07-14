#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int age;
    char name[101];
    int order;  // 가입 순서
} Member;

int compare(const void* a, const void* b) {
    Member* m1 = (Member*)a;
    Member* m2 = (Member*)b;

    if (m1->age != m2->age)
        return m1->age - m2->age;        
    else
        return m1->order - m2->order;    
}

int main() {
    int N;
    scanf("%d", &N);

    Member members[100000];  // 최대 10만 명

    for (int i = 0; i < N; i++) {
        scanf("%d %s", &members[i].age, members[i].name);
        members[i].order = i;  // 가입 순서 기록
    }

    qsort(members, N, sizeof(Member), compare);

    for (int i = 0; i < N; i++) {
        printf("%d %s\n", members[i].age, members[i].name);
    }

    return 0;
}
