#include <stdio.h>
#include <iostream>
using namespace std;
 
int main(){
    FILE *in;
	// 1. 打开图片文件
	in = fopen("D:\\appstore\\XnView\\XnView\\1.jpm", "rb");
    cout<<&in<<endl;
	if(in){
        // 2. 计算图片长度
        fseek(in, 0L, SEEK_END);
        int length =  ftell(in);
        fseek(in, 0L, SEEK_SET);
        // 3. 创建内存缓存区
        char * buffer = new char[length];
        // 4. 读取图片
        fread(buffer, sizeof(char), length, in);
        if (in)
          std::cout << "picture read successfully.";
        fclose(in);
        // 到此，图片已经成功的被读取到内存（buffer）中
        delete [] buffer;
	}
	return 0;
}