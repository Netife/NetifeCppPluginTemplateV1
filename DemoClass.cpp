//
// Created by Administrator on 2023/5/2.
//

#include "DemoClass.h"

DemoClass::~DemoClass() {
    //自定义析构过程
}

std::string DemoClass::GetName() const{
    //返回插件名称的信息，注：需要与 JSON 一致
    return "DemoClass";
}

std::string DemoClass::GetVersion() const{
    //返回插件的版本信息，注：需要与 JSON 一致
    return "1.0.0";
}

std::string DemoClass::DispatcherCommand(std::string commandOriginal) {
    //分发命令，插件的命令会通过本渠道进入
    //例如，可以使用 Switch 来判断
}

bool DemoClass::OnEnable() {
    //插件启动的时候
    //如果返回 False 会不加载插件
    return true;
}

bool DemoClass::OnDisable() {
    //插件结束的时候
    //如果返回 False 时会抛出异常
    return false;
}

void DemoClass::OnLoaded() {
    //插件加载的时候
}

void DemoClass::OnExiting() {
    //插件退出的时候
}

bool DemoClass::OnRequestSendingOut(NetworkRequest *request) {
    //当请求发送的时候
    //如果返回 False，请求会被拦截在 Dispatcher，且软件不会受到回复
    return false;
}

bool DemoClass::ExposeRefModule() {
    //是否允许其他插件修改本插件实例，不建议启用，默认为 False
    return false;
}
POCO_BEGIN_MANIFEST(NetifePlugins)
        POCO_EXPORT_CLASS(DemoClass)
POCO_END_MANIFEST
void pocoInitializeLibrary()
{

}
void pocoUninitializeLibrary()
{

}
