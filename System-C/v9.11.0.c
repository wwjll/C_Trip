/*
 * @Author: your name
 * @Date: 2021-08-15 23:23:02
 * @LastEditTime: 2021-08-22 22:22:54
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Trip\Miscellaneous\v9.11.0.c
 */
// 切换 9.11.0 版本的 nodejs
#include <stdlib.h>
void main() 
{
    // 系统变量
    system("setx /m NVM_HOME D:/Nodejs/nvm");
    system("setx /m NVM_SYMLINK D:/Nodejs/nvm/v9.11.0");
    system("setx /m NODE_GLOBAL D:/Nodejs/nvm/v9.11.0/node_global");
    // 用户变量
    system("setx NVM_HOME D:/Nodejs/nvm");
    system("setx NVM_SYMLINK D:/Nodejs/nvm/v9.11.0");
    system("setx NODE_GLOBAL D:/Nodejs/nvm/v9.11.0/node_global");
    // node 设置
    system("nvm use 9.11.0");
    system("npm config set prefix D:/Nodejs/nvm/v9.11.0/node_global");
    system("npm config set cache D:/Nodejs/nvm/v9.11.0/node_cache");
}