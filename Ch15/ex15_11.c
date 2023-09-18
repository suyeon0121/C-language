#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int cnt, kuk, eng, mat, tot;
	char name[16];
	double avg;
	FILE* in, * out;
	errno_t err1, err2;

	err1 = fopen_s(&in, "input.dat", "r");
	err2 = fopen_s(&out, "output.dat", "w");

	if ((in == NULL) || (out == NULL))
	{
		puts("input.dat ������ �������� ����");
		exit(1);
	}

	puts("input.dat ������ ã�ҽ��ϴ�.");

	fprintf(out, "===============================================\n");
	fprintf(out, "���� \t| ����\t| ����\t| ����\t| ����\t| ���\n");
	fprintf(out, "-----------------------------------------------\n");

	for (cnt = 0; cnt <= 2; cnt++)
	{
		fscanf_s(in, "%s %d %d %d", name, sizeof(name), &kuk, &eng, &mat);
		tot = kuk + eng + mat;
		avg = tot / 3.0;
		fprintf(out, "%s\t | %3d\t | %3d\t | %3d\t | %3d\t | %7.3f\n", name, kuk, eng, mat, tot, avg);
	}
	fprintf(out, "-----------------------------------------------\n");

	puts("������ ��� ���� �Ϸ�");
	puts("output.dat ������ ������ Ȯ���ϼ���.");

	fclose(in);
	fclose(out);
	return 0;
}