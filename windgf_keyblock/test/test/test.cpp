#include <stdio.h>
#include <windows.h>

int main(int argc, char* argv[])
{
	char tmp[30];
	char buff[1024];
	FILE* fp;
	if (argc >= 2)
	{
		fp = fopen(argv[1], "rb");
		if (fp == NULL)
		{
			printf("can not load file!\n");
			return 1;
		}
		fgets(buff, 1024, fp);	//��ȡ�ļ����� 
		fclose(fp);
		strcpy(tmp, buff);		//����ջ���©��
		printf("%s\n", tmp);
		return 1;
	}
	return 0;
}//test.exe
