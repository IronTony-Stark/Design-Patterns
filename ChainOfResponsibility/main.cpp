#include "AuthHandler.h"
#include "BruteForceHandler.h"
#include "IpAddressHandler.h"
#include "LogHandler.h"
#include "SqlInjectionHandler.h"
#include "AuthSystem.h"

int main() {
    AuthHandler authHandler(nullptr);
    SqlInjectionHandler sqlInjectionHandler(&authHandler);
    IpAddressHandler ipAddressHandler(&sqlInjectionHandler);
    BruteForceHandler bruteForceHandler(&ipAddressHandler);
    LogHandler logHandler(&bruteForceHandler);

    AuthSystem authSystem(logHandler);

    Request wrongLogin { "login", "password", false, "127.0.0.1" };
    Request sqlInjection { "irontony", "password", true, "127.0.0.1" };
    Request successful { "irontony", "password", false, "127.0.0.1" };
    Request wrongPassword { "irontony", "passwold", false, "127.0.0.1" };
    Request newIpAddress { "irontony", "password", false, "127.0.0.2" };
    Request preventBruteForceAttack { "irontony", "password", false, "127.0.0.1" };

    authSystem.auth(wrongLogin);
    std::cout << std::endl;

    authSystem.auth(sqlInjection);
    std::cout << std::endl;

    authSystem.auth(successful);
    std::cout << std::endl;

    authSystem.auth(wrongPassword);
    std::cout << std::endl;

    authSystem.auth(newIpAddress);
    std::cout << std::endl;

    authSystem.auth(preventBruteForceAttack);
    std::cout << std::endl;
}
