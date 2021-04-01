#include <iostream>
using namespace std;
struct PTmem {
	char name[10];
	double height;
	double weight;
	int age;
	double bmi;
};
int num = 0;    //����ϰ��� �ϴ� ȸ����
int id, totalmem;       //ȸ����ȣ, ����� ȸ����
PTmem mem[5];

int main(void)
{
	int i = 0;
	int menu = 0, search_by = 0;   //�޴�����, �˻��������

	while (1)
	{
		cout << "========================== HealthyGym ȸ������ �ý��� ==========================" << endl << endl;
		cout << "1. ȸ�� �Է�\t\t2. ȸ�� �˻�\t\t3. ��ü ȸ�� ����\t4. ����" << endl;
		cout << "================================================================================" << endl;
		cout << "�����ϰ� ���� �޴��� �����ϼ���: ";
		cin >> menu;

		if (menu == 4) break;
		if (menu == 1)
		{
			if (id >= 5)
				cout << "�� �̻� �Է��� �� �����ϴ�" << endl;
			else
			{
				cout << "����ϰ��� �ϴ� ȸ�� ���� �Է����ּ���(��� ������ ȸ�� ���� " << 5 - id << "���Դϴ�): ";
				cin >> num;
				cout << endl;

				if (num <= 0 || num > 5 || 5 - id < num)
					cout << "�ٽ� �Է����ּ���." << endl;
				else
				{
					for (i = totalmem; i < totalmem + num; i++)
					{
						cout << id + 1 << "��° ȸ��" << endl
							<< "ȸ���� �̸�, ����, Ű, �����Ը� �Է��ϼ��� : ";
						cin >> mem[i].name >> mem[i].age >> mem[i].height >> mem[i].weight;
						mem[i].bmi = mem[i].weight / (mem[i].height*mem[i].height*0.0001);       //�񸸵� ����
						id++;           //ȸ����ȣ �ο�
						for (int n = 0; n < id - 1; n++)
						{
							if (strcmp(mem[n].name, mem[i].name) == 0)               //�ߺ��� �̸� Ȯ��
							{
								cout << endl << endl;
								cout << "�ߺ��� �̸��� �ֽ��ϴ�. �ٽ� �Է����ּ���." << endl << endl;
								id--;
								i--;
							}
							else
								continue;
						}

						if (mem[i].age <= 0 || mem[i].height <= 0 || mem[i].weight <= 0)            //����, Ű, ������ ���� ó��
						{
							cout << endl << "�߸� �Է��ϼ̽��ϴ�. �ٽ� �Է����ּ���." << endl;
							i--;
							id--;
						}

						cout << endl << endl;
					}
					totalmem += num;           //����� ȸ����
					cout << endl << endl;
				}
			}
		}
		if (menu == 2)
		{
			int search_number, result = 0, searchnum = 0, t = 0;     //�˻��� ȸ����ȣ, �˻��� �̸� Ȯ��
			char search_name[10];    //�˻��� ȸ���̸�
			if (totalmem == 0)
			{
				cout << "�˻� ������ ȸ���� �����ϴ�." << endl;
				break;
			}
			cout << "1.ȸ���� ��ȣ�� �˻��ϱ�\t2.ȸ���� �̸����� �˻��ϱ�" << endl;
			cin >> search_by;                //�˻��������
			cout << endl;

			if (search_by == 1)
			{

					cout << "�˻��ϰ��� �ϴ� ȸ�� ���� �Է����ּ���(�˻� ������ ȸ�� ���� " << totalmem << "���Դϴ�): ";
					cin >> searchnum;
					cout << endl;
					while (searchnum > totalmem)
					{
						cout << "�˻��� �� �ִ� ȸ�� ���� �ʰ��߽��ϴ�." << endl;
						cout << "�˻��ϰ��� �ϴ� ȸ�� ���� �Է����ּ���(�˻� ������ ȸ�� ���� " << totalmem << "���Դϴ�): ";
						cin >> searchnum;
						cout << endl;
					}
	
						for (i = 0; i<searchnum; i++)
						{
							cout << "�˻��� ȸ���� ��ȣ�� �Է����ּ���(�˻� ������ ��ȣ��" << totalmem << "���� �Դϴ�.):";  //�˻� ������ ��ȣ �˷��ֱ�
							cin >> search_number;              //�˻��� ȸ����ȣ
							cout << endl;
							id = search_number - 1;
							cout << "--------------------------------------------------------------------------------" << endl;
							cout << "ȸ����ȣ\t�̸�\t����\tŰ\t������" << endl;
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
					cout << "�˻��ϰ��� �ϴ� ȸ�� ���� �Է����ּ���(�˻� ������ ȸ�� ���� " << totalmem << "���Դϴ�): ";
					cin >> searchnum;
					cout << endl;
					while (searchnum > totalmem)
					{
						cout << "�˻��� �� �ִ� ȸ�� ���� �ʰ��߽��ϴ�." << endl;
						cout << "�˻��ϰ��� �ϴ� ȸ�� ���� �Է����ּ���(�˻� ������ ȸ�� ���� " << totalmem << "���Դϴ�): ";
						cin >> searchnum;
						cout << endl;
					}
					{
						for (t = 0; t < searchnum; t++)
						{
							cout << "�˻��� ȸ���� �̸��� �Է����ּ���(�˻� ������ �̸���";    //�˻� ������ �̸� �˷��ֱ�
							for (i = 0; i < totalmem; i++)
							{
								cout << mem[i].name << " ";
							}
							cout << "�� �ֽ��ϴ�.): ";
							cin >> search_name;          //�˻��� ȸ���̸�
							cout << endl;
							for (i = 0; i < totalmem; i++)
							{
								result = strcmp(mem[i].name, search_name);         //ȸ���̸�ã��
								if (result == 0)
									id = i;
							}
							cout << "--------------------------------------------------------------------------------" << endl;
							cout << "ȸ����ȣ\t�̸�\t����\tŰ\t������" << endl;
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
				cout << "�˻� ������ ȸ���� �����ϴ�." << endl;
				break;
			}
			cout << "--------------------------------------------------------------------------------" << endl;
			cout << "ȸ����ȣ\t�̸�\t����\tŰ\t������\tbmi\t�񸸵�" << endl;
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
						cout << "��ü���Դϴ�." << endl;
					else if (18 <= mem[i].bmi && mem[i].bmi <= 24)
						cout << "ǥ��ü���Դϴ�." << endl;
					else if (24 < mem[i].bmi && mem[i].bmi <= 30)
						cout << "��ü���Դϴ�." << endl;
					else if (30 < mem[i].bmi)
						cout << "���Դϴ�." << endl;
				}
				else if (30 <= mem[i].age && mem[i].age <= 39)
				{
					if (mem[i].bmi < 18.5)
						cout << "��ü���Դϴ�." << endl;
					else if (18.5 <= mem[i].bmi && mem[i].bmi <= 25)
						cout << "ǥ��ü���Դϴ�." << endl;
					else if (25 < mem[i].bmi && mem[i].bmi <= 30)
						cout << "��ü���Դϴ�." << endl;
					else if (30 < mem[i].bmi)
						cout << "���Դϴ�." << endl;
				}
				else
				{
					cout << "������ �� �����ϴ�.";
				}

			}
			cout << "--------------------------------------------------------------------------------" << endl << endl << endl;
		}

	}
	return 0;
}