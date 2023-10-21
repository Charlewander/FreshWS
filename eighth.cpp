#include <iostream>
#include <string>
#include <map>

// 定义用户结构体，包括用户名和密码
struct User {
    std::string username;
    std::string password;
};

int main() {
    std::map<std::string, User> userDatabase; // 用于存储用户信息的数据库

    int loginAttempts = 0;
    const int maxLoginAttempts = 3;

    while (true) {
        std::cout << "请选择操作 (1 - 注册, 2 - 登录, 3 - 退出): ";
        int choice;
        std::cin >> choice;

        if (choice == 1) {
            // 用户注册
            User newUser;
            std::cout << "请输入用户名: ";
            std::cin >> newUser.username;

            if (userDatabase.find(newUser.username) != userDatabase.end()) {
                std::cout << "用户名已存在，请重新输入。\n";
                continue;
            }

            std::cout << "请输入密码: ";
            std::cin >> newUser.password;

            std::string confirmPassword;
            std::cout << "请再次输入密码: ";
            std::cin >> confirmPassword;

            if (newUser.password != confirmPassword) {
                std::cout << "两次密码输入不一致，请重新注册。\n";
            } else {
                userDatabase[newUser.username] = newUser;
                std::cout << "注册成功!\n";
            }
        } else if (choice == 2) {
            // 用户登录
            std::string username, password;
            std::cout << "请输入用户名: ";
            std::cin >> username;

            if (userDatabase.find(username) == userDatabase.end()) {
                std::cout << "用户名不存在，请重新登录。\n";
                loginAttempts++;
                if (loginAttempts >= maxLoginAttempts) {
                    std::cout << "登录尝试次数超过限制，谢谢使用。\n";
                    break;
                }
                continue;
            }

            std::cout << "请输入密码: ";
            std::cin >> password;

            if (userDatabase[username].password == password) {
                std::cout << "欢迎, " << username << "!\n";
                break;
            } else {
                std::cout << "密码错误，请重新登录。\n";
                loginAttempts++;
                if (loginAttempts >= maxLoginAttempts) {
                    std::cout << "登录尝试次数超过限制，谢谢使用。\n";
                    break;
                }
            }
        } else if (choice == 3) {
            std::cout << "谢谢使用。\n";
            break;
        } else {
            std::cout << "无效的选项，请重新选择。\n";
        }
    }

    return 0;
}
