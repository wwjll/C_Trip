/*
 * @Author: your name
 * @Date: 2021-08-15 22:00:28
 * @LastEditTime: 2021-08-22 22:22:32
 * @LastEditors: Please set LastEditors
 * @Description: In User Settings Edit
 * @FilePath: \C_Trip\Miscellaneous\v14.17.5.c
 */
// 切换 14.17.5 版本的 nodejs
#include <stdlib.h>
void main() 
{
    // 系统变量
    system("setx /m NVM_HOME D:/Nodejs/nvm");
    system("setx /m NVM_SYMLINK D:/Nodejs/nvm/v14.17.5");
    // 用户变量
    system("setx NVM_HOME D:/Nodejs/nvm");
    system("setx NVM_SYMLINK D:/Nodejs/nvm/v14.17.5");
    system("setx NODE_GLOBAL D:/Nodejs/nvm/v14.17.5/node_global");
    // node 设置
    system("nvm use 14.17.5");
    system("npm config set prefix D:/Nodejs/nvm/v14.17.5/node_global");
    system("npm config set cache D:/Nodejs/nvm/v14.17.5/node_cache");
}