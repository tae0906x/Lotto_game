#/*include<stdio.h>
int main()
{
	float a, b;
	scanf("%f %f", &a, &b);
	printf("%f", a / b);
}*/

//#include<stdio.h> //로또게임
//#include<stdlib.h>
//#include<time.h>
//struct number {
//	int cnt;
//};
//int main()
//{
//	struct number List[10] = { 0, };
//	int a = 0;
//	int b = 0;
//	int cnt = 1;
//	int i, j, si;
//	int n;
//	int player[6] = { 0, };
//	int check[100][6] = { 0, };
//	printf("############### 로또 ##############\n");
//	printf("로또 번호를 입력해주세요: ");
//	for (i = 0; i < 6; i++) {
//		scanf(" %d", &player[i]);
//	}
//	printf("출력 할 게임 수를 입력해주세요: ");
//	scanf(" %d", &n);
//	srand((int)time(NULL));
//	for (j = 0; j < n; j++) {
//		for (i = 0; i < 6; i++) {
//			check[j][i] = rand() % 45 + 1;
//			for (si = 0; si < i; si++) {
//				if (check[j][i] == check[j][si]) {
//					i--;
//					break;
//				}
//			}
//		}
//	}
//
//	printf("\n");
//	for (j = 0; j < n; j++) {
//		for (i = 0; i < 6; i++) {
//			printf("%2d ", check[j][i]);
//		}
//		printf("\n");
//	}
//
//	for (j = 0; j < n; j++) {
//		for (i = 0; i < 6; i++) {
//			if (check[j][i] == player[i]) {
//				List[j].cnt++;
//			}
//		}
//	}
//	for (i = 0; i < n; i++) {
//
//		if (List[i].cnt >= 1) {
//			printf("%d개 당첨!\n", List[i].cnt);
//		}
//		else
//			printf("%d\n", List[i].cnt);
//	}
//}
