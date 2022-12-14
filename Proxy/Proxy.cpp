//代理模式:提供一种代理来控制其他对象的访问
#include <iostream>
using namespace std;

class AbstractCommonInterface
{
public:
    virtual void run() = 0;
};
//下面是操作系统类
class MySystem : public AbstractCommonInterface
{
public:
    virtual void run()
    {
        cout << "系统启动" << endl;
    }
};

//代理： 启动系统必须要权限验证,不是所以的人都可以来启动我的系统,必须要提供用户名和密码
class MySystemProxy : public AbstractCommonInterface
{
public:
    MySystemProxy(string userName, string password)
    {
        this->mUserName = userName;
        this->mPassword = password;
        pMySystem = new MySystem;
    }

    bool checkUserNameAndPassword()
    {
        if (mUserName == "admin" && mPassword == "admin")
        {
            return true;
        }
        return false;
    }
    virtual void run()
    {
        if (checkUserNameAndPassword() == true)
        {
            cout << "启动成功" << endl;
            this->pMySystem->run();
        }
        else
        {
            cout << "用户名或者密码错误,权限不足" << endl;
        }
    }
    ~MySystemProxy()
    {
        if (pMySystem != NULL)
        {
            delete pMySystem;
        }
    }

private:
    string mUserName;
    string mPassword;
    MySystem *pMySystem;
};
void test01()
{
    MySystemProxy *proxy = new MySystemProxy("admin", "admin");
    proxy->run();
}

int main()
{
    test01();
    return 0;
}
