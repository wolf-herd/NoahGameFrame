#include "HelloWorld7.h"


bool HelloWorld7::Init()
{
    //初始化
    std::cout << "Hello, world1, Init" << std::endl;

    return true;
}

bool HelloWorld7::AfterInit()
{
    //初始化完毕
    std::cout << "Hello, world1, AfterInit" << std::endl;

    m_pUulClientModule = pPluginManager->FindModule<NFIUrlClientModule>("NFCUrlClientModule");

    assert(NULL != m_pUulClientModule);

    return true;
}

bool HelloWorld7::Execute( const float fLasFrametime, const float fStartedTime )
{
    //每帧执行
    //std::cout << "Hello, world1, Execute" << std::endl;

    return true;
}

bool HelloWorld7::BeforeShut()
{
    std::cout << "Hello, world1, BeforeShut1111" << std::endl;

    system("PAUSE");

    //反初始化之前
    std::cout << "Hello, world1, BeforeShut" << std::endl;

    return true;
}

bool HelloWorld7::Shut()
{
    //反初始化
    std::cout << "Hello, world1, Shut" << std::endl;

    return true;
}
