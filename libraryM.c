#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>


int login(void);//로그인 함수
int sign_up(void);// 회원가입 함수
int member_menu(void);// 이용자 메뉴 함수
int admin_menu(void);//관리자 메뉴 함수
int search_book(void);//도서 검색 함수
int my_borrow(void);//도서 대여 함수
int change_myinfo(void);//개인정보 수정 함수
int withdraw(void);//회원탈퇴 함수
int search_book_name(void);//도서명 검색
int search_book_publisher(void);//출판사 검색
int search_book_ISBN(void);//ISBN  검색
int search_book_author(void);//저자 검색
int search_book_all(void);//전체 책 검색
int regist_book(void);//도서 등록
int delete_book(void);//도서 삭제
int borrow_book(void);//도서 대여
int return_book(void);//도서 반납
int member_list(void);//회원 목록
int search_member_name(void);//회원 이름 검색
int search_member_num(void);//회원 학번 검색
int search_member_all(void);//회원 전체 검색


typedef struct client_list{
	int student_num;
	char password[20];
	char student_name[5];
}client;



int main(void)
{
	int menu;
	int a = 0;
	while (1) {
		system("clear");
		printf(">>도서관 서비스<<\n");
		printf("1.회원가입		2.로그인	3.종료\n\n");
		printf("번호를 선택하세요 :");
		scanf("%d", &menu);
		switch (menu) {
		case 1:
			sign_up();
			break;
		case 2:
			login();
			break;
		case 3:
			a = 1;
			break;
		default :
			printf("잘못 입력하셨습니다.\n");
		}
		if (a == 1)
			break;

	}
	return 0;
}

int sign_up(void)
{
	return 0;
}

int login(void)
{
	char id[10];
	char password[30];
	system("clear");
	printf("학	번 :");
	scanf("%s", id);
	printf("비밀번호 :");
	scanf("%s", password);
	if(!strcmp(id,"admin") && !strcmp(password,"admin"))
		admin_menu();
	else
		member_menu();
	return 0;
}

int member_menu(void)
{
	int menu;
	int a = 0;
	while (1)
	{
		printf(">>회원 메뉴<<\n");
		printf("1.도서검색	2.내 대여 목록\n3.개인정보 수정	4.회원탈퇴\n5.로그아웃	6.프로그램 종료\n\n");
		printf("번호를 선택하세요 :");
		scanf("%d", &menu);

		switch (menu) {
		case 1:
			search_book();
			break;
		case 2:
			my_borrow();
			break;
		case 3:
			change_myinfo();
			break;
		case 4:
			withdraw();
			break;
		case 5:
			a = 1;
			break;
		case 6:
			exit(1);
			break;
		default:
			printf("잘못입력하셨습니다.\n");
		}
		if (a == 1)
			break;
		system("clear");
	}
	return 0;
}

int admin_menu(void)
{
	int menu;
	int n=0;
	while(1)
	{
		system("clear");
		printf(">>관리자메뉴<<\n");
		printf("1.도서등록	2.도서 삭제\n3.도서 대여	4.도서반납\n5.도서검색	6.회원목록\n7.로그아웃	8.프로그램 종료\n\n");
		printf("번호를 선택하세요 :");
		scanf("%d", &menu);
		switch(menu){
			case 1:
				regist_book();
				break;
			case 2:
				delete_book();
				break;
			case 3:
				borrow_book();
				break;
			case 4:
				return_book();
				break;
			case 5:
				search_book();
				break;
			case 6:
				member_list();
				break;
			case 7:
				n=1;
				break;
			case 8:
				exit(1);
				break;
			default:
				printf("잘못된 입력입니다. 다시 입력해주세요");
		}
		if(n==1)
			break;
	}

	return 0;
}

int search_book(void)
{
	int menu;
	int n = 0;
	while(1)
	{
		system("clear");
		printf(">>도서검색<<\n");
		printf("1.도서명 검색 	2.출판사 검색\n3.ISBN검색 	4.저자명 검색\n5.전체 검색 	6.이전 메뉴\n\n");
		printf("번호를 선택하세요 :");
		scanf("%d", &menu);
		switch(menu){
			case 1:
				search_book_name();
				break;
			case 2:
				search_book_publisher();
				break;
			case 3:
				search_book_ISBN();
				break;
			case 4:
				search_book_author();
				break;
			case 5:
				search_book_all();
				break;
			case 6:
				n=1;
				break;
			default:
				printf("다시 입력하시오");
		}
		if(n==1)
			break;
	}
	return 0;
}

int my_borrow(void)
{
	return 0;
}

int change_myinfo(void)
{
	return 0;
}

int withdraw(void)
{
	return 0;
}

int search_book_name(void)
{
	return 0;
}

int search_book_publisher(void)
{
	return 0;
}

int search_book_ISBN(void)
{
	return 0;
}

int search_book_author(void)
{
	return 0;
}

int search_book_all(void)
{
	return 0;
}

int regist_book(void)
{
	return 0;
}

int delete_book(void)
{
	return 0;
}

int borrow_book(void)
{
	return 0;
}

int return_book(void)
{
	return 0;
}

int member_list(void)
{
	int menu;
	int n=0;
	while(1)
	{
		system("clear");
		printf(">>회원 목록<<\n");
		printf("1.이름검색 	2.학번검색\n3.전체 검색	 4.이전메뉴\n\n");
		printf("번호를 입력하세요 : ");
		scanf("%d", &menu);
		switch(menu){
			case 1:
				search_member_name();
				break;
			case 2:
				search_member_num();
				break;
			case 3:
				search_member_all();
				break;
			case 4:
				n=1;
				break;
			default:
				printf("잘못 입력하셨습니다.");
		}
		if(n==1)
			break;
	}

	return 0;
}

int search_member_name(void)
{
	return 0;
}

int search_member_num(void)
{
	return 0;
}

int search_member_all(void)
{
	return 0;
}
