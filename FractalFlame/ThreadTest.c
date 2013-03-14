#include <Windows.h>
#include <stdint.h>
#include <stdio.h>

DWORD WINAPI ThreadFunc(void* data){
	printf("Hello, ");
	for(uint32_t i = 0; i<0xFFFFFFF; i++){
		printf("");
	}
	return 0;
}

int old_main(int argc, char **argv){
	HANDLE thread = CreateThread(NULL, 0, ThreadFunc, NULL, 0, NULL);
	WaitForSingleObject(thread, INFINITE);
	printf("world!\n");
	getchar();
}