#include <iostream>
using namespace std;
struct PTmem {
	char name[10];
	double height;
	double weight;
	int age;
	double bmi;
};
int num = 0;    //등록하고자 하는 회원수
int id, totalmem;       //회원번호, 저장된 회원수
PTmem mem[5];

int main(void)
{
	int i = 0;
	int menu = 0, search_by = 0;   //메뉴선택, 검색방법선택

	while (1)
	{
		cout << "========================== HealthyGym 회원관리 시스템 ==========================" << endl << endl;
		cout << "1. 회원 입력\t\t2. 회원 검색\t\t3. 전체 회원 보기\t4. 종료" << endl;
		cout << "================================================================================" << endl;
		cout << "실행하고 싶은 메뉴를 선택하세요: ";
		cin >> menu;

		if (menu == 4) break;
		if (menu == 1)
		{
			if (id >= 5)
				cout << "더 이상 입력할 수 없습니다" << endl;
			else
			{
				cout << "등록하고자 하는 회원 수를 입력해주세요(등록 가능한 회원 수는 " << 5 - id << "명입니다): ";
				cin >> num;
				cout << endl;

				if (num <= 0 || num > 5 || 5 - id < num)
					cout << "다시 입력해주세요." << endl;
				else
				{
					for (i = totalmem; i < totalmem + num; i++)
					{
						cout << id + 1 << "번째 회원" << endl
							<< "회원의 이름, 나이, 키, 몸무게를 입력하세요 : ";
						cin >> mem[i].name >> mem[i].age >> mem[i].height >> mem[i].weight;
						mem[i].bmi = mem[i].weight / (mem[i].height*mem[i].height*0.0001);       //비만도 계산식
						id++;           //회원번호 부여
						for (int n = 0; n < id - 1; n++)
						{
							if (strcmp(mem[n].name, mem[i].name) == 0)               //중복된 이름 확인
							{
								cout << endl << endl;
								cout << "중복된 이름이 있습니다. 다시 입력해주세요." << endl << endl;
								id--;
								i--;
							}
							else
								continue;
						}

						if (mem[i].age <= 0 || mem[i].height <= 0 || mem[i].weight <= 0)            //나이, 키, 몸무게 예외 처리
						{
							cout << endl << "잘못 입력하셨습니다. 다시 입력해주세요." << endl;
							i--;
							id--;
						}

						cout << endl << endl;
					}
					totalmem += num;           //저장된 회원수
					cout << endl << endl;
				}
			}
		}
		if (menu == 2)
		{
			int search_number, result = 0, searchnum = 0, t = 0;     //검색할 회원번호, 검색한 이름 확인
			char search_name[10];    //검색할 회원이름
			if (totalmem == 0)
			{
				cout << "검색 가능한 회원이 없습니다." << endl;
				break;
			}
			cout << "1.회원의 번호로 검색하기\t2.회원의 이름으로 검색하기" << endl;
			cin >> search_by;                //검색방법선택
			cout << endl;

			if (search_by == 1)
			{

					cout << "검색하고자 하는 회원 수를 입력해주세요(검색 가능한 회원 수는 " << totalmem << "명입니다): ";
					cin >> searchnum;
					cout << endl;
					while (searchnum > totalmem)
					{
						cout << "검색할 수 있는 회원 수를 초과했습니다." << endl;
						cout << "검색하고자 하는 회원 수를 입력해주세요(검색 가능한 회원 수는 " << totalmem << "명입니다): ";
						cin >> searchnum;
						cout << endl;
					}
	
						for (i = 0; i<searchnum; i++)
						{
							cout << "검색할 회원의 번호를 입력해주세요(검색 가능한 번호는" << totalmem << "까지 입니다.):";  //검색 가능한 번호 알려주기
							cin >> search_number;              //검색할 회원번호
							cout << endl;
							id = search_number - 1;
							cout << "--------------------------------------------------------------------------------" << endl;
							cout << "회원번호\t이름\t나이\t키\t몸무게" << endl;
							cout << "--------------------------------------------------------------------------------" << endl;
							cout << id + 1 << "\t\t"
								<< mem[id].name << "\t"
								<< mem[id].age << "\t"
								<< mem[id].height << "\t"
								<< mem[id].weight << endl;
							cout << "--------------------------------------------------------------------------------" << endl << endl << endl;
					}

			}
			if (search_by == 2)
			{
					cout << "검색하고자 하는 회원 수를 입력해주세요(검색 가능한 회원 수는 " << totalmem << "명입니다): ";
					cin >> searchnum;
					cout << endl;
					while (searchnum > totalmem)
					{
						cout << "검색할 수 있는 회원 수를 초과했습니다." << endl;
						cout << "검색하고자 하는 회원 수를 입력해주세요(검색 가능한 회원 수는 " << totalmem << "명입니다): ";
						cin >> searchnum;
						cout << endl;
					}
					{
						for (t = 0; t < searchnum; t++)
						{
							cout << "검색할 회원의 이름을 입력해주세요(검색 가능한 이름은";    //검색 가능한 이름 알려주기
							for (i = 0; i < totalmem; i++)
							{
								cout << mem[i].name << " ";
							}
							cout << "가 있습니다.): ";
							cin >> search_name;          //검색할 회원이름
							cout << endl;
							for (i = 0; i < totalmem; i++)
							{
								result = strcmp(mem[i].name, search_name);         //회원이름찾기
								if (result == 0)
									id = i;
							}
							cout << "--------------------------------------------------------------------------------" << endl;
							cout << "회원번호\t이름\t나이\t키\t몸무게" << endl;
							cout << "--------------------------------------------------------------------------------" << endl;
							cout << id + 1 << "\t\t"
								<< mem[id].name << "\t"
								<< mem[id].age << "\t"
								<< mem[id].height << "\t"
								<< mem[id].weight << endl;
							cout << "--------------------------------------------------------------------------------" << endl << endl << endl;
						}
				}

			}

		}
		if (menu == 3)
		{
			if (totalmem == 0)
			{
				cout << "검색 가능한 회원이 없습니다." << endl;
				break;
			}
			cout << "--------------------------------------------------------------------------------" << endl;
			cout << "회원번호\t이름\t나이\t키\t몸무게\tbmi\t비만도" << endl;
			cout << "--------------------------------------------------------------------------------" << endl;
			for (i = 0; i < totalmem; i++)
			{
				cout << i + 1 << "\t\t"
					<< mem[i].name << "\t"
					<< mem[i].age << "\t"
					<< mem[i].height << "\t"
					" " << mem[i].weight << "\t"
					<< mem[i].bmi << "\t";
				if (20 <= mem[i].age && mem[i].age <= 29)
				{
					if (mem[i].bmi < 18)
						cout << "저체중입니다." << endl;
					else if (18 <= mem[i].bmi && mem[i].bmi <= 24)
						cout << "표준체중입니다." << endl;
					else if (24 < mem[i].bmi && mem[i].bmi <= 30)
						cout << "과체중입니다." << endl;
					else if (30 < mem[i].bmi)
						cout << "비만입니다." << endl;
				}
				else if (30 <= mem[i].age && mem[i].age <= 39)
				{
					if (mem[i].bmi < 18.5)
						cout << "저체중입니다." << endl;
					else if (18.5 <= mem[i].bmi && mem[i].bmi <= 25)
						cout << "표준체중입니다." << endl;
					else if (25 < mem[i].bmi && mem[i].bmi <= 30)
						cout << "과체중입니다." << endl;
					else if (30 < mem[i].bmi)
						cout << "비만입니다." << endl;
				}
				else
				{
					cout << "측정할 수 없습니다.";
				}

			}
			cout << "--------------------------------------------------------------------------------" << endl << endl << endl;
		}

	}
	return 0;
}