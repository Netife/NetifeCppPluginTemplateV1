#include "library.h"

#include <iostream>
#include "include/plugins/v1/NetifePluginAgent.h"
#if defined(_WIN32)
#define LIBRARY_API __declspec(dllexport)
#else
#define LIBRARY_API
#endif
extern "C" void LIBRARY_API Test(NetifePluginAgent* agent);

void Test(NetifePluginAgent* agent) {
    agent->LogInfo("Hello, This symbol has been hooked!!!");
    //Todo something...
    //这个地方可以执行具体的过程，注，关于 Hook 的具体定义需要在 Netife Develop Guide 查看，确保函数原型一样
}
