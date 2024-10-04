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
		fgets(buff, 1024, fp);	//读取文件内容 
		fclose(fp);
		strcpy(tmp, buff);		//存在栈溢出漏洞
		printf("%s\n", tmp);
		return 1;
	}
	return 0;
}//test.exe
