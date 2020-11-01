#include<stdio.h>
int main() {

	//국어 영어 수학  키보드로 입력 총점 평균 출력
	int arr[3]; //   arr[0], arr[1], arr[2]
	int tot=0;
	double avg;
	int size = sizeof(arr) / sizeof(int);
	for (int i = 0; i < 3; i++) {
		printf("점수%d 입력 : ", i+1);
		scanf_s("%d", &arr[i]);

		tot += arr[i];
	}
	avg = tot / 3.0;

	printf("====================================\n");
	printf("국어\t영어\t수학\t총점\t평균\n");
	printf("------------------------------------\n");
	for (int i = 0; i < 3; i++) {
		printf("%4d\t", arr[i]);
	}
	printf("%4d\t%.2f\n", tot, avg);
	printf("====================================\n");
	
	



	return 0;
}
/*
#include<stdio.h>

int main() {
	//            123456789ab+'\0'
	char str[] = "hello world";

	char str1[] = { 'a','b' };
	str[11] = 48;// '0'
	printf("%s\n", str);
	//printf("%s\n", str1);
	return 0;
}
//*/

/*
#include<stdio.h>
int main() {

	char ch = 'a';
	printf("%c", ch);

	char str[100];
	//문자형배열
	char str1[100] = {'a','b','c'};
	char str2[] = { 'a','b','c' };
	int arr[] = {10,20,30,50};

	//char배열은 문자열저장가능
	char str3[] = "123456";//  널문자'\0'==0
	//문자열은 저장시 마지막 위치에 널문자('\0')가 포함된다
	printf("널문자:%c\n", '\0');//null
	printf("널문자:%d\n", '\0');

	return 0;
}
//*/

/*
#include<stdio.h>
int main() {

	//int kor[5] = { 0,0,0,0,0,0,0 };
	int kor[5] = {1};
	//첫번째변수에 0으로 셋, 나머지는 값이 없으면 default초기화
	int tot = 0;
	double avg;
	int length = sizeof(kor) / sizeof(int);
	//데이터 삽입
	//int i;
	for (int i = 0; i < length; i++) {
		kor[i] = 1;
	}
	//printf("%d", i);
	//int i;
	//총점계산
	for (int i = 0; i < length; i++) {
		tot += kor[i];
	}
	//평균계산
	avg = tot / 5.0;

	//출력
	printf("총점 : %d\n", tot);
	printf("평균 : %.2f\n", avg);



	return 0;
}
//*/

/*
#include<stdio.h>
int main(){

	int kor[5] = {70,88,85,60,90};
	int tot=0;
	double avg;


	//tot = kor[0] + kor[1] + kor[2] + kor[3] + kor[4];
	int length = sizeof(kor)/sizeof(int);
	//배열의사이즈 = sizeof(배열이름)/ sizeof(type)

	printf("%d\n", length);

	for (int i = 0; i < length;i++) {
		//tot = tot + kor[i];
		tot += kor[i];
	}
	


	avg = tot / 5.0;

	//출력
	printf("총점 : %d\n", tot);
	printf("평균 : %.2f\n", avg);



	return 0;
}
//*/


/*
#include<stdio.h>
int main() {

	//선언과 동시 초기화
	double num[3] = { 0.1, 0.2, 0.3 };
	// num[0], num[1], num[2]
	
	//double pi;
	//pi = 3.14;

	printf("%.2f\n", num[0]);
	printf("%.2f\n", num[1]);
	printf("%.2f\n", num[2]);

	for (int i = 0; i < 3; i++) {
		printf("%.2f\n", num[i]);
	}

	return 0;
}
//*/
/*
#include<stdio.h>
int main() {

	int a1, a2, a3;
	//배열선언
	int kor[3];//kor:배열이름
	//변수를 자동으로 만들어준다.
	//배열이름[인덱스번호] : 인덱스번호는 0부터..
	//kor[0], kor[1], kor[2]

	//동일한 데이터타입을 여러개 묶어놓은 데이터 구조

	kor[0] = 10;
	kor[1] = 20;
	kor[2] = 30;

	printf("%d\n", kor[0]);
	printf("%d\n", kor[1]);
	printf("%d\n", kor[2]);
	puts("--------");
	for (int idx=0; idx <3 ; idx++) {
		printf("%d\n", kor[idx]);
	}

	return 0;
}
//*/
/*
//구구단 출력
#include<stdio.h>
int main() {

	for (int i = 1; i <= 9; i++) {//i: 2~9

		for (int j = 2; j <= 9; j++) {//j:1~9
			printf("%d*%d=%2d ", j, i, i * j);
		}
		puts("");
	}

	return 0;
}
//*/

/*
#include<stdio.h>
int main() {

	int n;
	puts("0보다큰 정수입력");
	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i) {//행개수 i : 0 ,1,2
		//공백출력
		for (int j = 0; j <n-1-i ; j++) {//열의 개수 2,1,0
			printf("  ");
		}


		//별출력
		for (int j = 0; j < i+1; j++) {//열의 개수
			printf("* ");
		}
		puts("");
	}

	return 0;
}
//*/
/*
#include<stdio.h>
int n;//전역변수는 default초기화 : 0
int main() {

	int m;//지역변수는 초기화하지 않으면 사용불가
	printf("전역변수 n : %d\n", n);
	//printf("지역변수 m : %d\n", m);

	//while (m<=0) {
	//	puts("0보다 큰 정수를 입력!");
	//	scanf_s("%d", &m);
	//}
	do{
		puts("0보다 큰 정수를 입력!");
		scanf_s("%d", &m);
	}while (m <= 0);

	return 0;
}
//*/

/*
#include<stdio.h>
int main() {
	int i = 1;
	do {
		printf("%d\n", i);
		i++;
	} while (i<=10);

	return 0;
}
//*/

/*
#include<stdio.h>
int main() {

	do {
		printf("반복실행영역");
	} while (10<0);

	//조건상관없이 일단 한번은 무조건 실행합니다.
	//그다음 조건에 따라 반복할지 탈출할지 결정
	return 0;
}
//*/
/*
#include<stdio.h>
int main() {

	int i = 0;
	while(i<3){
		printf("* ");
		i++;
	}
	puts("\n--------------");
	for (i=0; i < 3; i++) {
		printf("* ");
	}

	return 0;
}
//*/
/*
#include<stdio.h>
int main() {
	for (int i = 0; i < 3; i++) {//3회전
		for (int j = 0; j < 3; j++) {
			printf("* ");
		}//for j
		puts("");//줄바꿈
	}//for i
	
	return 0;
}
//*/
/*
#include<stdio.h>
int main() {
	//초기값
	for (int dan = 2; dan<=9 ; dan++) {
		for (int i = 1; i <= 9; i++) {
			printf("%d * %d =%2d\n", dan, i, dan * i);
		}
		printf("\n");//puts("");//줄바꿈
	}
	return 0;
}
//*/

/*
#include<stdio.h>
int main() {
	//초기값
	//while (조건문) { 내용;증감문 }

	//for (초기값;조건문;증감문) {}
	//int i;
	for (int i = 0;	i < 10;	i++){
		printf("%-2d\t", i);
	}
	puts("-----------");
	for (;;) {//무한루프
		printf("a");
	}

	return 0;
}//main()
//*/