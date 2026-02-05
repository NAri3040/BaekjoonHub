#include <stdio.h>
#include <stdlib.h>

/*
1 X: 정수 X를 스택에 넣는다. (1 ≤ X ≤ 100,000) push
2: 스택에 정수가 있다면 맨 위의 정수를 빼고 출력한다. 없다면 -1을 대신 출력한다. pop
3: 스택에 들어있는 정수의 개수를 출력한다. print item
4: 스택이 비어있으면 1, 아니면 0을 출력한다. empty
5: 스택에 정수가 있다면 맨 위의 정수를 출력한다. 없다면 -1을 대신 출력한다. peek
*/

struct Stack {
	int items[1000000];
	int top;
};

int push(struct Stack *s1, int v) {
	if (s1->top == 999999) {
		return 1;
	}

	s1->top++;
	s1->items[s1->top] = v;

	return 0;
}

int pop(struct Stack* s1) {
	if (s1->top == -1) {
		printf("-1\n");
		return 1;
	}

	printf("%d\n", s1->items[s1->top]);

	s1->top--;

	return 0;
}

int peek(struct Stack *s1) {
	if (s1->top == -1) {
		printf("-1\n");
		return 1;
	}

	printf("%d\n", s1->items[s1->top]);
	return 0;
}

int IsEmpty(struct Stack* s1) {
	if (s1->top == -1) {
		printf("1\n");
		return 1;
	}

	printf("0\n");
	return 0;
}

int CountItems(struct Stack *s1) {
	printf("%d\n", s1->top + 1);
	return 0;
}

struct Stack s1 = { {0}, -1 };

int main(void) {
	int a;
	int b;
	int c;
	

	scanf(" %d", &a);


	for (int i = 0; i < a; i++) {
		c = 0;
		scanf(" %d", &b);

		switch (b) {
			case 1:
				scanf(" %d", &c);
				push(&s1, c);
				break;
			case 2:
				pop(&s1);
				break;
			case 3:
				CountItems(&s1);
				break;
			case 4:
				IsEmpty(&s1);
				break;
			case 5:
				peek(&s1);
				break;
		}

	}

	return 0;
}