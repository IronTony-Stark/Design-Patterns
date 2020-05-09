#include "VirtualProxy.h"
#include "ProtectionProxy.h"
#include "RemoteProxy.h"
#include "CachingProxy.h"
#include "LoggingProxy.h"
#include "SmartProxy.h"

using namespace std;

int main() {
    cout << "Database without proxy\n";
    IDatabase* database = new Database();
    cout << database->getData() << "\n\n";

    cout << "Virtual proxy to leverage lazy initialization\n";
    IDatabase* virtualProxy = new VirtualProxy();
    cout << virtualProxy->getData() << "\n\n";

    cout << "Protection proxy to protect db access\n";
    AuthUtils utils;
    IDatabase* protectionProxy = new ProtectionProxy(utils);
    cout << protectionProxy->getData() << "\n\n";

    cout << "Remote proxy to hide network operations\n";
    IDatabase* remoteProxy = new RemoteProxy();
    cout << remoteProxy->getData() << "\n\n";

    cout << "Caching proxy to cache results\n";
    IDatabase* cachingProxy = new CachingProxy();
    cout << cachingProxy->getData() << endl;
    cout << cachingProxy->getData() << "\n\n";

    cout << "Logging proxy to log db usage\n";
    Logger logger;
    IDatabase* loggingProxy = new LoggingProxy(logger);
    cout << loggingProxy->getData() << "\n\n";

    cout << "Smart proxy to release resources if db is not used by anyone\n";
    IDatabaseWithConnection* smartProxy = new SmartProxy();
    smartProxy->connect();
    smartProxy->connect();
    cout << smartProxy->getData() << endl;
    smartProxy->disconnect();
    cout << smartProxy->getData() << endl;
    smartProxy->disconnect();
    smartProxy->connect();
    cout << smartProxy->getData() << endl;
    smartProxy->disconnect();
}
