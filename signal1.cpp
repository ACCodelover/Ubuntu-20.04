#include <iostream>
#include <csignal>
#include <unistd.h>

using namespace std;

void singalHandler(int signum)
{
    cout << "Interrupt signal (" << signum << ") received.\n";
    
    //清理并关闭
    //终止程序
    exit(signum);
}

int main()
{
    signal(SIGINT,singalHandler);
    while(1)
    {
        cout << "Going to sleep..." << endl;
        sleep(1);
    }

    return 0;
}