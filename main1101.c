#include<stdio.h>
int main() {

	//���� ���� ����  Ű����� �Է� ���� ��� ���
	int arr[3]; //   arr[0], arr[1], arr[2]
	int tot=0;
	double avg;
	int size = sizeof(arr) / sizeof(int);
	for (int i = 0; i < 3; i++) {
		printf("����%d �Է� : ", i+1);
		scanf_s("%d", &arr[i]);

		tot += arr[i];
	}
	avg = tot / 3.0;

	printf("====================================\n");
	printf("����\t����\t����\t����\t���\n");
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
	//�������迭
	char str1[100] = {'a','b','c'};
	char str2[] = { 'a','b','c' };
	int arr[] = {10,20,30,50};

	//char�迭�� ���ڿ����尡��
	char str3[] = "123456";//  �ι���'\0'==0
	//���ڿ��� ����� ������ ��ġ�� �ι���('\0')�� ���Եȴ�
	printf("�ι���:%c\n", '\0');//null
	printf("�ι���:%d\n", '\0');

	return 0;
}
//*/

/*
#include<stdio.h>
int main() {

	//int kor[5] = { 0,0,0,0,0,0,0 };
	int kor[5] = {1};
	//ù��°������ 0���� ��, �������� ���� ������ default�ʱ�ȭ
	int tot = 0;
	double avg;
	int length = sizeof(kor) / sizeof(int);
	//������ ����
	//int i;
	for (int i = 0; i < length; i++) {
		kor[i] = 1;
	}
	//printf("%d", i);
	//int i;
	//�������
	for (int i = 0; i < length; i++) {
		tot += kor[i];
	}
	//��հ��
	avg = tot / 5.0;

	//���
	printf("���� : %d\n", tot);
	printf("��� : %.2f\n", avg);



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
	//�迭�ǻ����� = sizeof(�迭�̸�)/ sizeof(type)

	printf("%d\n", length);

	for (int i = 0; i < length;i++) {
		//tot = tot + kor[i];
		tot += kor[i];
	}
	


	avg = tot / 5.0;

	//���
	printf("���� : %d\n", tot);
	printf("��� : %.2f\n", avg);



	return 0;
}
//*/


/*
#include<stdio.h>
int main() {

	//����� ���� �ʱ�ȭ
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
	//�迭����
	int kor[3];//kor:�迭�̸�
	//������ �ڵ����� ������ش�.
	//�迭�̸�[�ε�����ȣ] : �ε�����ȣ�� 0����..
	//kor[0], kor[1], kor[2]

	//������ ������Ÿ���� ������ ������� ������ ����

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
//������ ���
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
	puts("0����ū �����Է�");
	scanf_s("%d", &n);

	for (int i = 0; i < n; ++i) {//�ళ�� i : 0 ,1,2
		//�������
		for (int j = 0; j <n-1-i ; j++) {//���� ���� 2,1,0
			printf("  ");
		}


		//�����
		for (int j = 0; j < i+1; j++) {//���� ����
			printf("* ");
		}
		puts("");
	}

	return 0;
}
//*/
/*
#include<stdio.h>
int n;//���������� default�ʱ�ȭ : 0
int main() {

	int m;//���������� �ʱ�ȭ���� ������ ���Ұ�
	printf("�������� n : %d\n", n);
	//printf("�������� m : %d\n", m);

	//while (m<=0) {
	//	puts("0���� ū ������ �Է�!");
	//	scanf_s("%d", &m);
	//}
	do{
		puts("0���� ū ������ �Է�!");
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
		printf("�ݺ����࿵��");
	} while (10<0);

	//���ǻ������ �ϴ� �ѹ��� ������ �����մϴ�.
	//�״��� ���ǿ� ���� �ݺ����� Ż������ ����
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
	for (int i = 0; i < 3; i++) {//3ȸ��
		for (int j = 0; j < 3; j++) {
			printf("* ");
		}//for j
		puts("");//�ٹٲ�
	}//for i
	
	return 0;
}
//*/
/*
#include<stdio.h>
int main() {
	//�ʱⰪ
	for (int dan = 2; dan<=9 ; dan++) {
		for (int i = 1; i <= 9; i++) {
			printf("%d * %d =%2d\n", dan, i, dan * i);
		}
		printf("\n");//puts("");//�ٹٲ�
	}
	return 0;
}
//*/

/*
#include<stdio.h>
int main() {
	//�ʱⰪ
	//while (���ǹ�) { ����;������ }

	//for (�ʱⰪ;���ǹ�;������) {}
	//int i;
	for (int i = 0;	i < 10;	i++){
		printf("%-2d\t", i);
	}
	puts("-----------");
	for (;;) {//���ѷ���
		printf("a");
	}

	return 0;
}//main()
//*/